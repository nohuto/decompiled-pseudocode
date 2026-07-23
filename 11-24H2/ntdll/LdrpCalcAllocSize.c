/*
 * XREFs of LdrpCalcAllocSize @ 0x18000228C
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180001530 (RtlpIsQualifiedLanguage.c)
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013D30C (RtlpAddLanguagesToMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCalcAllocSize(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ecx

  v2 = 0LL;
  v3 = a2 * a1;
  if ( is_mul_ok(a2, a1) )
  {
    v4 = 0;
  }
  else
  {
    v3 = -1LL;
    v4 = -1073741675;
  }
  if ( v4 >= 0 )
    return v3;
  return v2;
}
