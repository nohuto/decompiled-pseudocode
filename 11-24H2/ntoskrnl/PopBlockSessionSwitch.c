/*
 * XREFs of PopBlockSessionSwitch @ 0x1409B7CC0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x1405DAF70 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x1405DB008 (PoSessionEngagementUpdate.c)
 *     PopScreenOn @ 0x14075D4A0 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x14075F9BC (PoSessionPowerControl.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopBlockSessionSwitch(char a1, unsigned int *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v7 = 0;
    PoBlockConsoleSwitchEx((__int64)&v4, &v7, 0LL);
    result = v7;
    *a2 = v7;
  }
  else
  {
    v7 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(&v4, &v7);
  }
  return result;
}
