/*
 * XREFs of rimIsWakeablePointerFrame @ 0x1C01A0F78
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C019F804 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E3494 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E34F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE4C (RIMCmActiveContactsNext.c)
 */

char __fastcall rimIsWakeablePointerFrame(__int64 a1)
{
  char v2; // bl
  __int64 active; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _BYTE v14[32]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  active = RIMCmActiveContactsBegin((__int64)&v12, a1);
  v4 = *(_QWORD *)(active + 16);
  v10 = *(_OWORD *)active;
  v11 = v4;
  while ( 1 )
  {
    v5 = RIMCmActiveContactsEnd((__int64)v14, a1);
    v6 = *(_OWORD *)v5;
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(_QWORD *)v5;
    v13 = v7;
    v12 = v6;
    if ( (_QWORD)v10 == v8 && DWORD2(v10) == DWORD2(v12) && v11 == v13 )
      break;
    if ( (*(_DWORD *)(v11 - 8) & 0x404) == 0 )
      return 1;
    RIMCmActiveContactsNext(a1, &v10);
  }
  return v2;
}
