/*
 * XREFs of ?DxgkpRegistryQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1403CBB20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DxgkpRegistryQueryRoutine(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 result; // rax

  if ( a2 == a5[132] )
  {
    if ( a4 > a5[134] )
    {
      WdLogSingleEntry2(3LL, a5[134], a4);
      result = 2147483653LL;
      WdLogGlobalForLineNumber = 2878;
    }
    else
    {
      memmove(a5 + 136, a3, a4);
      result = 0LL;
    }
    a5[134] = a4;
  }
  else
  {
    WdLogSingleEntry2(3LL, a5[132], a2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2873;
  }
  return result;
}
