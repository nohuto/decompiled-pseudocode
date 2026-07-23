/*
 * XREFs of PopBlockSessionSwitch @ 0x140A2BB70
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x1405D6440 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x1405D64D8 (PoSessionEngagementUpdate.c)
 *     PopScreenOn @ 0x140750B94 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x140752DB4 (PoSessionPowerControl.c)
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  ULONG v7; // [rsp+60h] [rbp+10h] BYREF

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
