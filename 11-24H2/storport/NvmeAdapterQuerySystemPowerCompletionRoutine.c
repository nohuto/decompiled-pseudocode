/*
 * XREFs of NvmeAdapterQuerySystemPowerCompletionRoutine @ 0x140130CC0
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 */

__int64 __fastcall NvmeAdapterQuerySystemPowerCompletionRoutine(__int64 a1)
{
  __int64 Context; // rdx
  _DWORD *NvmeAdapter; // rdi
  __int64 v3; // rax
  NTSTATUS v4; // ebx

  NvmeAdapter = GetNvmeAdapter(a1);
  v3 = Context + 184;
  if ( *(_BYTE *)(Context + 65) )
    *(_BYTE *)(*(_QWORD *)v3 + 3LL) |= 1u;
  v4 = *(_DWORD *)(Context + 48);
  if ( v4 >= 0
    && (v4 = PoRequestPowerIrp(
               *((PDEVICE_OBJECT *)NvmeAdapter + 1),
               3u,
               DevicePowerStateTable[*(int *)(*(_QWORD *)v3 + 24LL)],
               (PREQUEST_POWER_COMPLETE)NvmeAdapterQueryDevicePowerCompletionRoutine,
               (PVOID)Context,
               0LL),
        v4 >= 0) )
  {
    return (unsigned int)-1073741802;
  }
  else
  {
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)NvmeAdapter + 19));
  }
  return (unsigned int)v4;
}
