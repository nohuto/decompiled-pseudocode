/*
 * XREFs of PspInheritMitigationOptions @ 0x1409FFEB4
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  int i; // r9d
  __int64 v6; // xmm1_8
  char v7; // cl
  unsigned __int64 v8; // r10
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v11; // rdx
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  unsigned __int64 result; // rax
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int128 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  for ( i = 0; i < 40; ++i )
  {
    v6 = *((_QWORD *)a1 + 2);
    v7 = (4 * i) & 0x3F;
    v8 = (unsigned __int64)(unsigned int)(4 * i) >> 6;
    v16 = *a1;
    v9 = *a2;
    v17 = v6;
    v10 = *((_QWORD *)a2 + 2);
    v11 = *((_QWORD *)&v16 + v8) >> v7;
    v18 = v9;
    v12 = v11 & 0xF;
    v19 = v10;
    v13 = (*((_QWORD *)&v18 + v8) >> v7) & 0xF;
    if ( (v12 & 4) != 0 || ((*((_QWORD *)&v18 + v8) >> v7) & 3) == 0 )
      v13 = v12;
    result = (unsigned __int64)v13 << v7;
    *((_QWORD *)&v20 + v8) = result | *((_QWORD *)&v20 + v8) & ~(15LL << v7);
  }
  v15 = v21;
  *(_OWORD *)a3 = v20;
  *(_QWORD *)(a3 + 16) = v15;
  return result;
}
