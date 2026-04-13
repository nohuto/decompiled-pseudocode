/*
 * XREFs of ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005E798
 * Callers:
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18005B6C4 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18005B8E8 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18009F480 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x18005B02C (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 */

__int64 __fastcall std::wstreambuf::sgetc(unsigned __int16 ***a1)
{
  if ( std::wstreambuf::_Gnavail((__int64)a1) <= 0 )
    return ((__int64 (__fastcall *)(unsigned __int16 ***))(*a1)[6])(a1);
  else
    return **a1[7];
}
