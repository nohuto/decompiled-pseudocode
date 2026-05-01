/*
 * XREFs of ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x18006890C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180035DF4 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HampActGetDependencyAction(__int64 a1, char a2)
{
  _BYTE *v3; // rax
  char v4; // dl

  v3 = (_BYTE *)(*(_QWORD *)a1 + 552LL);
  if ( *(_QWORD *)a1 && (*v3 & 8) != 0 || (a2 & 2) != 0 )
    return 3;
  v4 = 3;
  if ( *(_BYTE *)(a1 + 40) == 3 )
    return *(_QWORD *)(a1 + 64) < *(_QWORD *)(*(_QWORD *)(a1 + 48) + 816LL) ? 5 : 0;
  if ( (*(_DWORD *)v3 & 0x300u) >= 0x100 || (a2 & 1) == 0 )
    v4 = 1;
  if ( (v4 == 1) == (*(_BYTE *)(*(_QWORD *)a1 + 562LL) == 1) )
    return 0;
  else
    return (v4 == 1) + 1;
}
