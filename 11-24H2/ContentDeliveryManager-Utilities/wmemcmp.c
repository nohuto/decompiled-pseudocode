/*
 * XREFs of wmemcmp @ 0x18005EBF8
 * Callers:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18005C43C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K1@Z @ 0x18005DA24 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K1@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAH_K0PEB_W0@Z @ 0x180090574 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAH_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800973E8 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl wmemcmp(const wchar_t *S1, const wchar_t *S2, size_t N)
{
  signed __int64 v3; // rcx
  wchar_t v4; // ax

  v3 = (char *)S1 - (char *)S2;
  while ( N )
  {
    v4 = *(const wchar_t *)((char *)S2 + v3);
    if ( v4 != *S2 )
      return v4 < *S2 ? -1 : 1;
    ++S2;
    --N;
  }
  return 0;
}
