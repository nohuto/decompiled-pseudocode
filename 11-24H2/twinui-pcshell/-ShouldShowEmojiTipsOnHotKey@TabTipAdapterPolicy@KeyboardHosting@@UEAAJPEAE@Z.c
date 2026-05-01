/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180487940
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::ShouldShowEmojiTipsOnHotKey(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  unsigned __int8 v3; // r11
  void *v5[4]; // [rsp+20h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)v5, (__int64)this + 912);
  if ( std::wstring::_Equal((char *)v5, (char *)L"Chrome")
    || std::wstring::_Equal((char *)v5, (char *)L"MSEdge")
    || std::wstring::_Equal((char *)v5, (char *)L"MSEdgeDev") )
  {
    v3 = 1;
  }
  *a2 = v3;
  std::wstring::_Tidy_deallocate(v5);
  return 0LL;
}
