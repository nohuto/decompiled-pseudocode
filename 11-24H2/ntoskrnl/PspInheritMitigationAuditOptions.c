/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x1409FFBD4
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, __int64 a3)
{
  int i; // r11d
  __int64 v6; // xmm1_8
  char v7; // bl
  unsigned __int64 v8; // rdi
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v11; // r10
  unsigned __int8 v12; // r8
  unsigned int v13; // r10d
  bool v14; // dl
  __int64 result; // rax
  __int64 v16; // xmm1_8
  __int128 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  __int128 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  for ( i = 0; i < 40; ++i )
  {
    v6 = *((_QWORD *)a1 + 2);
    v7 = (4 * i) & 0x3F;
    v8 = (unsigned __int64)(unsigned int)(4 * i) >> 6;
    v19 = *a1;
    v9 = *a2;
    v20 = v6;
    v10 = *((_QWORD *)a2 + 2);
    v11 = *((_QWORD *)&v19 + v8) >> v7;
    v17 = v9;
    v18 = v10;
    v12 = (*((_QWORD *)&v17 + v8) >> v7) & 3;
    v13 = v11 & 3;
    if ( v13 && v13 != 2 )
      v14 = v12 != 2;
    else
      v14 = ((v12 - 1) & 0xFD) != 0;
    if ( !v14 )
      v13 = v12;
    result = *((_QWORD *)&v21 + v8) & ~(15LL << v7);
    *((_QWORD *)&v21 + v8) = result | ((unsigned __int64)v13 << v7);
  }
  v16 = v22;
  *(_OWORD *)a3 = v21;
  *(_QWORD *)(a3 + 16) = v16;
  return result;
}
