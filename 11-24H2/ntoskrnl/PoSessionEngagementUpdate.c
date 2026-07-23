/*
 * XREFs of PoSessionEngagementUpdate @ 0x1405D8328
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x14099D3C4 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14099E318 (PopBlockSessionSwitch.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PoSessionEngagementUpdate(__int64 a1)
{
  char v1; // bl
  __int128 v3; // [rsp+20h] [rbp-40h] BYREF
  __int128 v4; // [rsp+30h] [rbp-30h]
  __int128 v5; // [rsp+40h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp-10h]
  char v7; // [rsp+70h] [rbp+10h] BYREF
  int v8; // [rsp+78h] [rbp+18h] BYREF

  v8 = 0;
  v1 = a1;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v8);
  v7 = v1;
  v4 = 0LL;
  v6 = 0LL;
  BYTE4(v4) = 0;
  v5 = (unsigned __int64)&v7;
  v3 = 0LL;
  LODWORD(v4) = 8;
  DWORD2(v4) = 1;
  PopInvokeWin32Callout(5LL, &v3, 1LL);
  return PopBlockSessionSwitch(0LL, &v8);
}
