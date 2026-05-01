/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18020A554
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C208 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NW4Rep.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ @ 0x18020C248 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int *v6; // rax
  char *v7; // rax

  v4 = 1;
  if ( dword_18098FC30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098FC30);
    if ( dword_18098FC30 == -1 )
    {
      dword_18098B91C = -2147009295;
      dword_18098B920 = 0;
      byte_18098B924 = 1;
      dword_18098B928 = -2147009287;
      dword_18098B92C = 0;
      byte_18098B930 = 1;
      dword_18098B934 = -2147009280;
      dword_18098B938 = 2;
      byte_18098B93C = 1;
      dword_18098B940 = -2018374645;
      dword_18098B944 = 0;
      byte_18098B948 = 1;
      dword_18098B94C = -2144927148;
      dword_18098B950 = 0;
      byte_18098B954 = 1;
      dword_18098B958 = -2147024891;
      dword_18098B95C = 0;
      byte_18098B960 = 1;
      dword_18098B964 = -2147023728;
      dword_18098B968 = 0;
      byte_18098B96C = 1;
      dword_18098B970 = -2147009290;
      dword_18098B974 = 0;
      byte_18098B978 = 1;
      dword_18098B97C = -2147009284;
      dword_18098B980 = 0;
      byte_18098B984 = 1;
      dword_18098B988 = -2147009296;
      dword_18098B98C = 0;
      byte_18098B990 = 1;
      dword_18098B994 = -2147024894;
      dword_18098B998 = 0;
      byte_18098B99C = 1;
      dword_18098B9A0 = -2144927142;
      dword_18098B9A4 = 2;
      byte_18098B9A8 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) != 0;
      dword_18098B9AC = -2147219196;
      dword_18098B9B0 = 2;
      byte_18098B9B4 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) != 0;
      Init_thread_footer(&dword_18098FC30);
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) )
  {
    if ( a2 < 0xA )
    {
      v6 = (unsigned int *)&unk_18098B910;
      while ( *v6 != a1 || !*((_BYTE *)v6 + 8) )
      {
        v6 += 3;
        if ( v6 == (unsigned int *)&g_header_init_StagingEventsInitialize )
          return v4;
      }
      return v6[1];
    }
    else
    {
      return 3LL;
    }
  }
  else
  {
    v7 = (char *)&unk_18098B910;
    while ( *(_DWORD *)v7 != a1 || !v7[8] )
    {
      v7 += 12;
      if ( v7 == (char *)&g_header_init_StagingEventsInitialize )
        return v4;
    }
    return *((unsigned int *)v7 + 1);
  }
}
