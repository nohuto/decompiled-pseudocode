/*
 * XREFs of sub_180098214 @ 0x180098214
 * Callers:
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180097784 @ 0x180097784 (sub_180097784.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180098214(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax

  v5 = a1 + 8;
  sub_180027FBC(a1 + 8);
  sub_180097784(a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 4) = 0;
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 208) & 1LL | ((unsigned __int64)v6 >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 392) & 1LL | ((unsigned __int64)v9 >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  *(double *)(a2 + 16) = v10 / a3 * 1000.0;
  sub_18002815C(v5);
  return a2;
}
