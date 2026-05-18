/*
 * XREFs of sub_1800508B0 @ 0x1800508B0
 * Callers:
 *     sub_18001AAC0 @ 0x18001AAC0 (sub_18001AAC0.c)
 *     sub_18004E3E0 @ 0x18004E3E0 (sub_18004E3E0.c)
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_180084000 @ 0x180084000 (sub_180084000.c)
 *     sub_180084754 @ 0x180084754 (sub_180084754.c)
 *     sub_180089340 @ 0x180089340 (sub_180089340.c)
 *     sub_18008B790 @ 0x18008B790 (sub_18008B790.c)
 *     sub_18008F638 @ 0x18008F638 (sub_18008F638.c)
 *     sub_180091D54 @ 0x180091D54 (sub_180091D54.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800508B0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  _DWORD *v5; // r9
  __int64 result; // rax
  __int64 *v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]

  v3 = a3;
  v5 = *(_DWORD **)(a1 + 112);
  *v5 = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  v5[3] = a2[3];
  v5[4] = a2[4];
  v5[5] = a2[5];
  v5[6] = a2[6];
  v5[7] = a2[7];
  v5[8] = a2[8];
  v5[9] = a2[9];
  v5[10] = a2[10];
  v5[11] = a2[11];
  result = (unsigned int)a2[12];
  v5[12] = result;
  if ( a3 )
    result = sub_180027DD0(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( v3 )
    {
      v7 = (__int64 *)sub_180011D64(v3 + 8, &v13);
      sub_180050600(a1, v7);
      if ( v14 )
        sub_18001060C(v14);
      sub_180027DD0(a1, 2, 0);
      return sub_180027DD0(v9, v8 + 4, v8);
    }
    else
    {
      sub_180034808(*(_QWORD *)(a1 + 72), &v15);
      v10 = 0;
      v11 = v15;
      if ( (v16 - v15) >> 4 )
      {
        v12 = 0LL;
        do
        {
          unknown_libname_81(&v13, (_QWORD *)(v11 + 16 * v12));
          sub_180050600(a1, &v13);
          if ( v14 )
            sub_18001060C(v14);
          ++v10;
          v11 = v15;
          v12 = v10;
        }
        while ( v10 < (unsigned __int64)((v16 - v15) >> 4) );
      }
      return sub_1800131E0((__int64)&v15);
    }
  }
  return result;
}
