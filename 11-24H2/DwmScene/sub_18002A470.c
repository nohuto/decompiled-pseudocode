/*
 * XREFs of sub_18002A470 @ 0x18002A470
 * Callers:
 *     sub_18002B070 @ 0x18002B070 (sub_18002B070.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 *     sub_1800294F0 @ 0x1800294F0 (sub_1800294F0.c)
 *     sub_180029504 @ 0x180029504 (sub_180029504.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180095EF4 @ 0x180095EF4 (sub_180095EF4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18002A470(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[136]; // [rsp+38h] [rbp-D0h] BYREF
  void *v13[3]; // [rsp+C0h] [rbp-48h] BYREF
  void *v14[20]; // [rsp+D8h] [rbp-30h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[45] < a1[54] )
  {
    sub_180029BC0((__int64)v12);
    if ( !(unsigned __int8)sub_1800403F0(a1[49] + 184LL) || v4 > *(_QWORD *)(v5 + 192) )
      goto LABEL_13;
    v6 = sub_180095EF4(v5, v4, v12);
    if ( !v6 )
    {
      v7 = a2[1];
      if ( v7 == a2[2] )
      {
        sub_180028FCC(a2, v7, (__int64)v12);
      }
      else
      {
        sub_1800294F0(v6, v7, (__int64)v12);
        a2[1] += 152LL;
      }
      goto LABEL_17;
    }
    if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v6 - 1) & 0xFFFFFFFD) == 0 )
      {
        sub_1800291FC(v13, (__int64)v13);
        return a2;
      }
    }
    else
    {
LABEL_13:
      memset(v14, 0, 0x98uLL);
      v9 = sub_180029BC0((__int64)v14);
      v11 = a2[1];
      if ( v11 == a2[2] )
      {
        sub_1800290E4(a2, v11, v9);
      }
      else
      {
        sub_180029504(v10, v11, v9);
        a2[1] += 152LL;
      }
      sub_1800291FC(&v14[17], (__int64)&v14[17]);
    }
LABEL_17:
    ++a1[45];
    sub_1800291FC(v13, (__int64)v13);
  }
  return a2;
}
