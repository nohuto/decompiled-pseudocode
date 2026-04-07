/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z @ 0x1800A1460
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800665AC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x180068100 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18006C1B0 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180039C90 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18004EA18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x18007A2E0 (-GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CVisual **this,
        const struct ACCENT_POLICY *a2,
        unsigned int a3,
        double *a4)
{
  int v5; // r11d
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  double v16[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
  {
    v16[0] = TaskbarAcrylic::GetLuminosityOpacity((TaskbarAcrylic *)a3);
    v6 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent((CAccentAcrylicBlurBehind *)this, v5, v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x477u, 0LL);
      goto LABEL_18;
    }
  }
  else
  {
    v8 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent((CAccentAcrylicBlurBehind *)this, a3, a4);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x47Bu, 0LL);
      goto LABEL_18;
    }
  }
  v9 = (*(__int64 (__fastcall **)(CVisual *, CVisual *))(*(_QWORD *)this[37] + 56LL))(this[37], this[35]);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x480u, 0LL);
  }
  else
  {
    v10 = 0;
    if ( *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 0 )
      v10 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78);
    v11 = 0;
    if ( *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 0 )
      v11 = *((_DWORD *)this + 81) - *((_DWORD *)this + 79);
    v12 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37,
            &v17);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x486u, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 288LL))(
              v17,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v10), (__m128)COERCE_UNSIGNED_INT((float)v11)).m128_u64[0]);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x487u, 0LL);
      }
      else
      {
        CVisual::SetSize(this[30], v10, v11);
        CVisual::SetSize((CVisual *)this, v10, v11);
        v14 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this[31] + 24LL))(this[31]);
        v7 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x48Cu, 0LL);
      }
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v7;
}
