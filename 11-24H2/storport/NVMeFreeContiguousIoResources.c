/*
 * XREFs of NVMeFreeContiguousIoResources @ 0x14008770C
 * Callers:
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NVMeFreeContiguousIoResources(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // [rsp+20h] [rbp-18h]

  if ( IsDmarEnabled(a1) )
  {
    v3 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(v2 + 1144) + 8LL) + 24LL))(
      *(_QWORD *)(v2 + 1144),
      *(unsigned int *)(v1 + 16),
      *(_QWORD *)(v1 + 24),
      v1,
      v3);
  }
  else
  {
    MmFreeContiguousMemory((PVOID)v1);
  }
}
