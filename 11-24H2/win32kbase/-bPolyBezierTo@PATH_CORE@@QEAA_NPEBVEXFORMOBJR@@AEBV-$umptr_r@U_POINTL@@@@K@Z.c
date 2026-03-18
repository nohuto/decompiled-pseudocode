/*
 * XREFs of ?bPolyBezierTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x140069DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x140069F84 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 */

bool __fastcall PATH_CORE::bPolyBezierTo(PATH_CORE *a1, const struct EXFORMOBJR *a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+44h] [rbp-14h]

  v5[0] = *(_QWORD *)a3;
  v5[1] = *(_QWORD *)(a3 + 8);
  v5[2] = *(_QWORD *)(a3 + 16);
  v6 = *(_WORD *)(a3 + 24);
  v7 = 16;
  v8 = a4;
  return PATH_CORE::addpoints(a1, a2, (struct PATHDATAL *)v5);
}
