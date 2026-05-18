/*
 * XREFs of sub_1800CCD74 @ 0x1800CCD74
 * Callers:
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_1800CD050 @ 0x1800CD050 (sub_1800CD050.c)
 *     sub_1800CD080 @ 0x1800CD080 (sub_1800CD080.c)
 *     sub_1800CD0C0 @ 0x1800CD0C0 (sub_1800CD0C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CCD74(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  float *v11; // rcx
  float v12; // xmm0_4
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF

  v8 = *a1;
  sub_1800CD080(v14, a1);
  sub_1800CD050(v9, v15 + 32, a3, a4);
  *(_QWORD *)v15 = v8;
  *(_QWORD *)(v15 + 8) = v8;
  *(_QWORD *)(v15 + 16) = v8;
  *(_BYTE *)(v15 + 24) = 0;
  *(_BYTE *)(v15 + 25) = 0;
  v10 = v15;
  v11 = *(float **)(*a1 + 8LL);
  v16 = (unsigned __int64)v11;
  if ( !*((_BYTE *)v11 + 25) )
  {
    v12 = *(float *)(v15 + 32);
    do
    {
      *(_QWORD *)&v16 = v11;
      if ( v12 <= v11[8] )
      {
        DWORD2(v16) = 0;
        v11 = (float *)*((_QWORD *)v11 + 2);
      }
      else
      {
        DWORD2(v16) = 1;
        v11 = *(float **)v11;
      }
    }
    while ( !*((_BYTE *)v11 + 25) );
  }
  if ( a1[1] == 0x555555555555555LL )
    sub_18001CD64();
  v15 = 0LL;
  sub_1800CD0C0(v14);
  *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v16, v10);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
