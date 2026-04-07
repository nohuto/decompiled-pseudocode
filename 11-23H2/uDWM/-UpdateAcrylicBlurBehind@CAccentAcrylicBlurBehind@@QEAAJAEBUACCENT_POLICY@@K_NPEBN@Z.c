/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A0DAC
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800A14F8 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x1800A2AA8 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A3B00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000BB3C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B484 (--1-$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@.c)
 *     ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x18006B49C (-GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18009EC18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1078 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2,
        unsigned int a3,
        char a4,
        double *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // r14d
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  double LuminosityOpacity; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v25 = 0LL;
  v9 = CAccentAcrylicBlurBehind::ValidateGraphicsDevice(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x497u);
    goto LABEL_28;
  }
  if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
  {
    LuminosityOpacity = TaskbarAcrylic::GetLuminosityOpacity((TaskbarAcrylic *)a3);
    v11 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, a3, &LuminosityOpacity);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x49Du);
      goto LABEL_28;
    }
  }
  else
  {
    v12 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, a3, a5);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x4A1u);
      goto LABEL_28;
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 56LL))(
          *((_QWORD *)this + 43),
          *((_QWORD *)this + 41));
  v10 = v13;
  if ( v13 >= 0 )
  {
    v14 = 0;
    if ( *((_DWORD *)this + 92) - *((_DWORD *)this + 90) >= 0 )
      v14 = *((_DWORD *)this + 92) - *((_DWORD *)this + 90);
    v15 = 0;
    if ( *((_DWORD *)this + 93) - *((_DWORD *)this + 91) >= 0 )
      v15 = *((_DWORD *)this + 93) - *((_DWORD *)this + 91);
    v16 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 43,
            &v25);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 288LL))(
              v25,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v14), (__m128)COERCE_UNSIGNED_INT((float)v15)).m128_u64[0]);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v18 = *((_QWORD *)this + 36);
        *(_QWORD *)&LuminosityOpacity = __PAIR64__(v15, v14);
        v19 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v18 + 104LL))(v18, &LuminosityOpacity);
        v10 = v19;
        if ( v19 >= 0 )
        {
          *(_QWORD *)&LuminosityOpacity = __PAIR64__(v15, v14);
          v20 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, double *))(*(_QWORD *)this + 104LL))(
                  this,
                  &LuminosityOpacity);
          v10 = v20;
          if ( v20 >= 0 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
            v10 = v21;
            if ( v21 >= 0 )
            {
              if ( a4 )
              {
                v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 32LL))(*((_QWORD *)this + 37));
                if ( v22 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4BB,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                    (const char *)(unsigned int)v22,
                    v24);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x4B2u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x4B0u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x4AFu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x4ADu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x4ACu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x4A6u);
  }
LABEL_28:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v25);
  return v10;
}
