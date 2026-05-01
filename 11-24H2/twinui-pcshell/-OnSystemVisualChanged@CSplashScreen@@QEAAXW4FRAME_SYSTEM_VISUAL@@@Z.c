/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180038248
 * Callers:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x180305764 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002FAD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180038040 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180038080 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800380B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, volatile int *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h]

  if ( (unsigned int)a2 <= 1 && ((_DWORD)a2 != 1) != *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = (_DWORD)a2 != 1;
    if ( (_DWORD)a2 != 1 )
    {
      v8 = a1;
      v3 = *(_QWORD *)(a1 + 64);
      while ( v3 >= 0 )
      {
        if ( (_DWORD)v3 != 0x7FFFFFFF )
        {
          v4 = v3;
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v3 + 1, v3);
          if ( v4 != v3 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), a2);
LABEL_10:
      v7 = a1;
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(&v7);
      v5 = (__int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( v5 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
        v6[6] = a1;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v6 + 6);
        *v6 = (__int64)off_18072D918;
        v6[1] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6
        && (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 120) + 232LL))(*(_QWORD *)(a1 + 120), v6) >= 0 )
      {
        *(_BYTE *)(a1 + 129) = 1;
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(a1);
    }
  }
}
