/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x140196380
 * Callers:
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1401E0DF0 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     NtGdiStartDoc @ 0x140327FB0 (NtGdiStartDoc.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140330384 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x140336B8C (-init_probe@-$umptr_r@D@@SA-AV1@PEAD_K1@Z.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x14033E964 (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-2147024362;
  }
  return v3;
}
