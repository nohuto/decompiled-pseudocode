/*
 * XREFs of DpiPdoVerifyOpmParameters @ 0x1403E4168
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoVerifyOpmParameters(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 1049;
    return 3221225485LL;
  }
  if ( a3 >= a6 )
  {
    if ( !a7 || a4 )
    {
      if ( a5 >= a7 )
        return 0LL;
      WdLogSingleEntry2(2LL, a1, -1073741789LL);
      WdLogGlobalForLineNumber = 1079;
      return 3221225507LL;
    }
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 1069;
    return 3221225485LL;
  }
  WdLogSingleEntry2(2LL, a1, -1073741789LL);
  WdLogGlobalForLineNumber = 1059;
  return 3221225507LL;
}
