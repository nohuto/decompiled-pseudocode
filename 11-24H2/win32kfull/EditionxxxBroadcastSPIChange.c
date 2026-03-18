/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x140116DC0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxBroadcastMessage @ 0x140117780 (xxxBroadcastMessage.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(unsigned int a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+44h] [rbp-2Ch]
  __int64 v9; // [rsp+48h] [rbp-28h]
  _DWORD v10[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+88h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v8 = 0;
  v9 = a2;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v7 = 2 * v5;
    v8 = (2 * v5 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v7 = 0;
  }
  UpdateInputSettingWnfState(a1);
  v11 = &v13;
  v10[0] = 0;
  v10[1] = 100;
  return xxxBroadcastMessage(
           (unsigned int)v10,
           26,
           a1,
           (unsigned int)&v7,
           a3 != 0 ? 6 : 1,
           (union tagBROADCASTMSG *)v10,
           1);
}
