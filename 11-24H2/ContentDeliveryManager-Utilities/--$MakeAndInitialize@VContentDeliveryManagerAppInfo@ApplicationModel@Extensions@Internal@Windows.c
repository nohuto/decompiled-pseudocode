/*
 * XREFs of ??$MakeAndInitialize@VContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppInfo@25@AEAPEAUHSTRING__@@PEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@$$QEAPEAU345@@Z @ 0x1800A8714
 * Callers:
 *     ?FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@25@@Z @ 0x1800A8B40 (-FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800224A0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FC0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     InlineIsEqualGUID @ 0x180033DB8 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009BC20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IMapView@W4Wind.c)
 *     ??0ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ @ 0x1800A8938 (--0ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInternalAppInfo@ApplicationModel@Extensions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A8A70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefe_ea_1800A8A70.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x1800A98E0 (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &,Windows::ApplicationModel::IAppInfo *>(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo **a1,
        void *a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  void *v5; // rax
  int CanCastTo; // edi
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *v7; // rbx
  HSTRING v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rdx
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  *a1 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( !v5 )
  {
    CanCastTo = -2147024882;
    goto LABEL_13;
  }
  v7 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *)Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::ContentDeliveryManagerAppInfo((Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *)v5);
  v14 = 0LL;
  CanCastTo = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize(
                v7,
                v8,
                *a3);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v7;
      (*(void (__fastcall **)(Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, v11) )
      {
        *a1 = v7;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v7 + 8,
                      v12,
                      a1);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::Release((__int64)v7);
LABEL_13:
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return (unsigned int)CanCastTo;
}
