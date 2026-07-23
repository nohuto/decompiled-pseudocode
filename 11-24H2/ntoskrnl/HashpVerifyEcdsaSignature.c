/*
 * XREFs of HashpVerifyEcdsaSignature @ 0x14083044C
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14051FD6C (SymCryptEcurveFree.c)
 *     SymCryptEckeyAllocate @ 0x1405205FC (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyFree @ 0x1405206E8 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline @ 0x1406A01A0 (Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HashpVerifyEcdsaSignature(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rbp
  int v11; // ecx
  int v12; // ecx
  __int64 *v13; // rcx
  struct _SYMCRYPT_ECURVE **v14; // rbx
  struct _SYMCRYPT_ECURVE *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rsi
  bool v19; // zf

  v7 = 0;
  v8 = a3;
  v11 = a1 - 11777;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 || !(unsigned int)Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline() )
        return (unsigned int)-1073740760;
      v13 = (__int64 *)SymCryptEcurveParamsNistP521;
      v14 = &g_pEcurveP521;
      v15 = g_pEcurveP521;
    }
    else
    {
      v13 = (__int64 *)SymCryptEcurveParamsNistP384;
      v14 = &g_pEcurveP384;
      v15 = g_pEcurveP384;
    }
  }
  else
  {
    v13 = (__int64 *)SymCryptEcurveParamsNistP256;
    v14 = &g_pEcurveP256;
    v15 = g_pEcurveP256;
  }
  if ( !v15 )
  {
    v17 = SymCryptEcurveAllocate((__int64)v13, 0);
    if ( !v17 )
      return (unsigned int)-1073741801;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, v17, 0LL) )
      SymCryptEcurveFree(v17);
  }
  v18 = SymCryptEckeyAllocate((__int64)*v14);
  if ( !v18 )
    return (unsigned int)-1073741801;
  v19 = (unsigned int)Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline() == 0;
  if ( (unsigned int)SymCryptEckeySetValue(0LL, 0LL, a2, v8, 2u, 2, ((unsigned int)v19 + 16) << 8, v18) )
  {
    v16 = -1073740760;
  }
  else
  {
    if ( (unsigned int)SymCryptEcDsaVerify(v18, a4, a5, a6, a7, 2, 0) )
      v7 = -1073740760;
    v16 = v7;
  }
  SymCryptEckeyFree(v18);
  return v16;
}
