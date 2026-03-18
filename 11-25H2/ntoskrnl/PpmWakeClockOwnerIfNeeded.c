/*
 * XREFs of PpmWakeClockOwnerIfNeeded @ 0x1404C9558
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 * Callees:
 *     HalRequestIpi @ 0x140205130 (HalRequestIpi.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     PoAllProcessorsDeepIdle @ 0x1405C9424 (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_BYTE *__fastcall PpmWakeClockOwnerIfNeeded(__int64 a1, char a2)
{
  _BYTE *result; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  _DWORD v7[2]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v8[264]; // [rsp+28h] [rbp-120h] BYREF

  result = memset_0(v8, 0, 0x100uLL);
  v5 = *(_QWORD *)(a1 + 34880);
  v6 = KiClockTimerOwner;
  if ( !(_BYTE)KiDynamicTickDisableReason && !PpmIpiLastClockOwnerDisable && !*(_BYTE *)(a1 + 33) )
  {
    result = (_BYTE *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    if ( result[33] )
    {
      if ( !a2 )
      {
        result = (_BYTE *)PoAllProcessorsDeepIdle();
        if ( (_BYTE)result )
        {
          v7[1] = 0;
          v7[0] = 2097153;
          memset_0(v8, 0, 0x100uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v7, v6);
          *(_WORD *)(v5 + 56) |= 0x800u;
          return (_BYTE *)HalRequestIpi(0, (unsigned __int16 *)v7);
        }
      }
    }
  }
  return result;
}
