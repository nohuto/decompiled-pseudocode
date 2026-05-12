/*
 * XREFs of NvmeAdapterWaitForOutstandingIoComplete @ 0x1400DAD70
 * Callers:
 *     <none>
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     NvmeAdapterIsOutstandingRequest @ 0x1400D3B80 (NvmeAdapterIsOutstandingRequest.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterWaitForOutstandingIoComplete(__int64 DeviceObject, PVOID Context)
{
  ULONG v3; // ebx
  unsigned int v4; // edi
  _DWORD *NvmeAdapter; // rsi
  unsigned int v6; // ebp

  v3 = 1000;
  v4 = 0;
  NvmeAdapter = GetNvmeAdapter(DeviceObject);
  v6 = 1000000 * *(unsigned __int8 *)(*((_QWORD *)NvmeAdapter + 20) + 112LL);
  while ( NvmeAdapterIsOutstandingRequest((__int64)NvmeAdapter) )
  {
    StorDelayExecution(v3);
    v4 += v3;
    if ( v6 && v4 >= v6 )
      break;
    if ( v3 < 0x186A0 )
    {
      v3 *= 2;
      if ( v3 >= 0x186A0 )
        v3 = 100000;
    }
  }
  *(_BYTE *)(*((_QWORD *)NvmeAdapter + 20) + 113LL) = v4 / 0xF4240;
  (*(void (__fastcall **)(_QWORD, PVOID, _QWORD))(*((_QWORD *)NvmeAdapter + 20) + 128LL))(
    *((_QWORD *)NvmeAdapter + 1),
    Context,
    0LL);
}
