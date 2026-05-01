/*
 * XREFs of ?HampClientPkgCompareByHandle@@YAJPEAX0@Z @ 0x180044B20
 * Callers:
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180044A38 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampClientPkgCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = a2[6];
  if ( v2 == *a1 )
    return 0LL;
  else
    return v2 < *a1 ? -1 : 1;
}
