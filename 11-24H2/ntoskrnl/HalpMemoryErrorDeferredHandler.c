/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x14055542C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140555190 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x14054B744 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x14054B808 (HalpHvSetMachineCheckRecoveryState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     WheaAttemptClearPoison @ 0x1407C7210 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C72F0 (WheaAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredHandler(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx

  *(_BYTE *)(a1 + 13) &= 0xFu;
  v1 = *(_BYTE *)(a1 + 14) == 0;
  v3 = *(_QWORD *)a1;
  if ( v1 )
    result = WheaAttemptPhysicalPageOffline(v3 >> 12, 0, 1, 0, a1);
  else
    result = WheaAttemptClearPoison(v3, 0LL, a1);
  v6 = (unsigned int)result;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v7 = 0;
    v8 = *(unsigned int *)off_140E09738;
    if ( (_DWORD)result || (unsigned int)v8 <= 1 )
    {
      if ( (unsigned int)v8 <= 1 )
      {
        v7 = 64;
        if ( !(_DWORD)result )
          v7 = -64;
      }
      *(_BYTE *)(a1 + 48) = v7;
      HalpHvInvokeWheaErrorNotificationCallback(a1, v8, (unsigned int)result, v5);
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      result = qword_140FC0F48;
      if ( qword_140FC0F48 )
        return guard_dispatch_icall_no_overrides(v9, v8, v6, v5);
    }
    else
    {
      return HalpHvSetMachineCheckRecoveryState(2, v8, v6, v5);
    }
  }
  return result;
}
