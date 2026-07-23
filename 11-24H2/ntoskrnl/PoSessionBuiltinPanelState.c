/*
 * XREFs of PoSessionBuiltinPanelState @ 0x1405D8290
 * Callers:
 *     TtmpCallSetBuiltinPanelState @ 0x140768FCC (TtmpCallSetBuiltinPanelState.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14099E318 (PopBlockSessionSwitch.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PoSessionBuiltinPanelState(__int64 a1, int a2)
{
  int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+70h] [rbp+10h] BYREF
  int v9; // [rsp+78h] [rbp+18h]
  int v10; // [rsp+80h] [rbp+20h] BYREF

  v9 = a2;
  v8 = 0;
  v2 = a1;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v8);
  v10 = v2;
  v5 = 0LL;
  v7 = 0LL;
  BYTE4(v5) = 0;
  v6 = (unsigned __int64)&v10;
  v4 = 0LL;
  LODWORD(v5) = 7;
  DWORD2(v5) = 4;
  PopInvokeWin32Callout(5LL, &v4, 1LL);
  return PopBlockSessionSwitch(0LL, &v8);
}
