/*
 * XREFs of sub_180050750 @ 0x180050750
 * Callers:
 *     sub_18001AA00 @ 0x18001AA00 (sub_18001AA00.c)
 *     sub_18004E280 @ 0x18004E280 (sub_18004E280.c)
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_180083EA0 @ 0x180083EA0 (sub_180083EA0.c)
 *     sub_1800845F4 @ 0x1800845F4 (sub_1800845F4.c)
 *     sub_1800891E0 @ 0x1800891E0 (sub_1800891E0.c)
 *     sub_18008B630 @ 0x18008B630 (sub_18008B630.c)
 *     sub_18008F4D8 @ 0x18008F4D8 (sub_18008F4D8.c)
 *     sub_180091BF4 @ 0x180091BF4 (sub_180091BF4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_1800504A0 @ 0x1800504A0 (sub_1800504A0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180050750(__int64 a1, _DWORD *a2, __int64 a3)
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
    result = sub_180027C70(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( v3 )
    {
      v7 = (__int64 *)sub_180011C64(v3 + 8, &v13);
      sub_1800504A0(a1, v7);
      if ( v14 )
        sub_18001050C(v14);
      sub_180027C70(a1, 2, 0);
      return sub_180027C70(v9, v8 + 4, v8);
    }
    else
    {
      sub_1800346A8(*(_QWORD *)(a1 + 72), &v15);
      v10 = 0;
      v11 = v15;
      if ( (v16 - v15) >> 4 )
      {
        v12 = 0LL;
        do
        {
          unknown_libname_81(&v13, (_QWORD *)(v11 + 16 * v12));
          sub_1800504A0(a1, &v13);
          if ( v14 )
            sub_18001050C(v14);
          ++v10;
          v11 = v15;
          v12 = v10;
        }
        while ( v10 < (unsigned __int64)((v16 - v15) >> 4) );
      }
      return sub_1800130E0((__int64)&v15);
    }
  }
  return result;
}
