/*
 * XREFs of ScsiStartStopUnitRequest @ 0x1401164DC
 * Callers:
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d

  v3 = a2;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v3, a2, a3, 36, 0);
    return 3221225485LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
    return 0LL;
  }
}
