/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800199B0
 * Callers:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001DACC (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180040BD4 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x18004A0F0 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
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
