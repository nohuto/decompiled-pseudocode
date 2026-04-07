/*
 * XREFs of ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180054C78
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x180054BEC (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180039C40 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAccentAcrylicBlurBehind::ReleaseResources(CAccentAcrylicBlurBehind *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64 *); // rdi
  __int64 v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  *((_DWORD *)this + 82) = 0;
  v9 = 0LL;
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)this + 34)
    && (int)Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(v2, &v9) >= 0 )
  {
    v8 = 0LL;
    v3 = v9;
    v4 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 360LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    v4(v3, &v8);
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  v6 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 30) = 0LL;
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
