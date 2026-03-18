/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x140069F10
 * Callers:
 *     <none>
 * Callees:
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x140069F84 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 */

bool __fastcall EPATHOBJ::bPolyLineTo(__int64 a1, const struct EXFORMOBJR *a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  __int16 v7; // ax
  bool result; // al
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
    return 0;
  v9[0] = *(_QWORD *)a3;
  v9[1] = *(_QWORD *)(a3 + 8);
  v9[2] = *(_QWORD *)(a3 + 16);
  v7 = *(_WORD *)(a3 + 24);
  v11 = 0;
  v10 = v7;
  v12 = a4;
  result = PATH_CORE::addpoints((PATH_CORE *)(v6 + 24), a2, (struct PATHDATAL *)v9);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) += a4;
    *(_DWORD *)a1 &= ~2u;
  }
  return result;
}
