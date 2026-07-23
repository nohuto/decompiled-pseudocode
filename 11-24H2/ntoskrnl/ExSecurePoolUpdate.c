/*
 * XREFs of ExSecurePoolUpdate @ 0x140656C70
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolFromHandle @ 0x1404F37FC (ExpSecurePoolFromHandle.c)
 */

__int64 __fastcall ExSecurePoolUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  if ( a6 && a7 )
    return ExpSecurePoolFromHandle(a1) != 0 ? -1073741637 : -1073741811;
  else
    return 3221225485LL;
}
