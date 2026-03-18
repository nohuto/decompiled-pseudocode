/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x1403111B0
 * Callers:
 *     DifPoFxNotifySurprisePowerOnWrapper @ 0x140637540 (DifPoFxNotifySurprisePowerOnWrapper.c)
 * Callees:
 *     PopPepSurprisePowerOn @ 0x1403112AC (PopPepSurprisePowerOn.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405CF9E0 (PopDirectedDripsStartDisengageTimer.c)
 */

__int64 __fastcall PoFxNotifySurprisePowerOn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rsi

  v3 = a1 + 312;
  v4 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
  LOBYTE(a3) = 1;
  result = PopFxLockDevice(a1, 1LL, a3);
  v6 = result;
  if ( result )
  {
    PopPepSurprisePowerOn(*(_QWORD *)(result + 56));
    result = PopFxDereferenceDevice(v6, 1LL);
    if ( v4 )
    {
      result = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
      if ( result )
      {
        result = *(unsigned int *)(result + 760);
        if ( (result & 0x30000) != 0 )
          return PopDirectedDripsStartDisengageTimer(1LL);
      }
    }
  }
  return result;
}
