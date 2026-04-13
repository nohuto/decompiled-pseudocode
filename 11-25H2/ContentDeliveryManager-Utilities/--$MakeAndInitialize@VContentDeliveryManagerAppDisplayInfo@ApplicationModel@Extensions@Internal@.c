/*
 * XREFs of ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800A8F9C
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800A9280 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     InlineIsEqualGUID @ 0x180033CD8 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInternalAppInfo@ApplicationModel@Extensions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A8750 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakRefe_ea_1800A8750.c)
 *     ??0ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ @ 0x1800A90B8 (--0ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A9500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800AA15C (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo **a1,
        const unsigned __int16 **a2,
        struct Windows::ApplicationModel::IAppDisplayInfo **a3)
{
  void *v6; // rax
  int CanCastTo; // edi
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *v8; // rbx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rdx
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  if ( !v6 )
  {
    CanCastTo = -2147024882;
    goto LABEL_13;
  }
  v8 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *)Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::ContentDeliveryManagerAppDisplayInfo((Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *)v6);
  v14 = 0LL;
  CanCastTo = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
                v8,
                *a2,
                *a3);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v8;
      (*(void (__fastcall **)(Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, v11) )
      {
        *a1 = v8;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v8 + 8,
                      v12);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v8);
LABEL_13:
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return (unsigned int)CanCastTo;
}
