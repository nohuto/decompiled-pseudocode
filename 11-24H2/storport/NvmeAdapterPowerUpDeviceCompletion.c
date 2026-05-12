/*
 * XREFs of NvmeAdapterPowerUpDeviceCompletion @ 0x14012FD70
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x140076F88 (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterPowerUpDeviceCompletion(__int64 a1, void *a2)
{
  _DWORD *NvmeAdapter; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  GUID v10; // [rsp+40h] [rbp-28h] BYREF

  NvmeAdapter = GetNvmeAdapter(a1);
  v5 = NvmeAdapter;
  if ( *(_BYTE *)(v4 + 65) )
    *(_BYTE *)(*(_QWORD *)(v4 + 184) + 3LL) |= 1u;
  v6 = *(_DWORD *)(v4 + 48);
  if ( v6 >= 0 && (*(_DWORD *)(*((_QWORD *)NvmeAdapter + 50) + 184LL) & 0x40000000) != 0 )
    LOBYTE(v6) = NvmeControllerPowerUp(*((_QWORD **)NvmeAdapter + 142));
  if ( (v5[104] & 0x40) != 0 )
  {
    IoQueueWorkItem(*((PIO_WORKITEM *)v5 + 164), NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine, NormalWorkQueue, a2);
    if ( StorEtwLoggingEnabled )
    {
      v10 = 0LL;
      IoGetActivityIdIrp(a2, &v10);
      if ( (byte_140171466 & 0x40) != 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(v8, v7, &v10, *((const wchar_t **)v5 + 127), v5[14], (__int64)(v5 + 258), v6);
    }
  }
  else
  {
    NvmeAdapterPowerUpDeviceCompletionLastStep(v5, a2);
  }
  return 3221225494LL;
}
