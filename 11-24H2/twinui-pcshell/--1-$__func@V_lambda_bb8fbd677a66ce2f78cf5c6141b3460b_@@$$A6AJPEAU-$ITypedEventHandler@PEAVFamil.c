/*
 * XREFs of ??1?$__func@V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAA@XZ @ 0x18056BF28
 * Callers:
 *     ??_E?$__func@V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18056C400 (--_E-$__func@V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@$$A6AJPEAU-$ITypedEventHandler@PEAVFami.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18056FC50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@P.c)
 */

void **__fastcall wistd::__function::__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::~__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  void **result; // rax

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(v2);
  }
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
