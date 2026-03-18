/*
 * XREFs of ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x140069E30
 * Callers:
 *     PATHOBJ_bPolyBezierTo @ 0x14006A9C0 (PATHOBJ_bPolyBezierTo.c)
 * Callees:
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x140069F84 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 */

bool __fastcall EPATHOBJ::bPolyBezierTo(__int64 a1, const struct EXFORMOBJR *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rcx
  bool v7; // r8
  unsigned int v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  unsigned int v13; // [rsp+44h] [rbp-14h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
    return 0;
  v10[0] = *(_QWORD *)a3;
  v10[1] = *(_QWORD *)(a3 + 8);
  v10[2] = *(_QWORD *)(a3 + 16);
  v11 = *(_WORD *)(a3 + 24);
  v12 = 16;
  v13 = a4;
  v7 = PATH_CORE::addpoints((PATH_CORE *)(v6 + 24), a2, (struct PATHDATAL *)v10);
  if ( v7 )
  {
    v8 = *(_DWORD *)a1 & 0xFFFFFFFD;
    *(_DWORD *)(a1 + 4) += a4 / 3;
    *(_DWORD *)a1 = v8 | 1;
  }
  return v7;
}
