/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18055BBD0
 * Callers:
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180562330 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803CB570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@E.c)
 *     ??0?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18055C4B8 (--0-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1)
{
  unsigned int v1; // edi
  void *v3; // rax
  __int64 v4; // rbx
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v3;
  v4 = (__int64)v3;
  if ( v3 )
  {
    Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(v3);
    v9 = 0LL;
    *(_QWORD *)v4 = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable';
    *(_QWORD *)(v4 + 8) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v4 + 16) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
    *(_QWORD *)(v4 + 24) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
    *(_QWORD *)(v4 + 32) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_DWORD *)(v4 + 72) = 1077936128;
    *(_QWORD *)(v4 + 76) = 1LL;
    v6 = *(_QWORD *)(v4 + 48);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 48), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
LABEL_9:
    *a1 = v4;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return v1;
}
