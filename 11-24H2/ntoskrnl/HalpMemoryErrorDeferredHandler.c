/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x140552D6C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140552AD0 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x140549004 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x1405490C8 (HalpHvSetMachineCheckRecoveryState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     WheaAttemptClearPoison @ 0x1407C76B0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredHandler(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  char v5; // cl
  __int64 v6; // rdx
  __int64 v7; // rcx

  *(_BYTE *)(a1 + 13) &= 0xFu;
  v1 = *(_BYTE *)(a1 + 14) == 0;
  v3 = *(_QWORD *)a1;
  if ( v1 )
    result = WheaAttemptPhysicalPageOffline(v3 >> 12, 0, 1, 0, a1);
  else
    result = WheaAttemptClearPoison(v3, 0LL, a1);
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v5 = 0;
    v6 = *(unsigned int *)off_140E097A8;
    if ( (_DWORD)result || (unsigned int)v6 <= 1 )
    {
      if ( (unsigned int)v6 <= 1 )
      {
        v5 = 64;
        if ( !(_DWORD)result )
          v5 = -64;
      }
      *(_BYTE *)(a1 + 48) = v5;
      HalpHvInvokeWheaErrorNotificationCallback(a1, v6);
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      result = qword_140FC11A8;
      if ( qword_140FC11A8 )
        return guard_dispatch_icall_no_overrides(v7, v6);
    }
    else
    {
      return HalpHvSetMachineCheckRecoveryState(2);
    }
  }
  return result;
}
