/*
 * XREFs of ?_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ @ 0x180113B84
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801130F0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x1802E0F40 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char AcrylicPolicyManager::_IsDeviceCapableOfAcrylic(void)
{
  char v0; // bl
  __m128i si128; // [rsp+20h] [rbp-58h] BYREF
  int v3; // [rsp+30h] [rbp-48h]
  _OWORD v4[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h]

  memset(v4, 0, sizeof(v4));
  v0 = 0;
  v5 = 0LL;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)NtDCompositionGetFrameStatistics(v4, &si128) >= 0 && si128.m128i_i32[3] )
    return si128.m128i_i32[2] == 0;
  return v0;
}
