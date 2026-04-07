/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180009DA0
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180009648 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800C561C (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800C5A58 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800DDA48 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800E7170 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000A038 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapSource::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        struct CBitmapSource **a6)
{
  unsigned __int64 v6; // r10
  struct IWICBitmap *v11; // rdi
  int v12; // eax
  const struct _MARGINS *v13; // rdx
  unsigned int v14; // ebx
  struct IWICBitmap *v15; // rcx
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v6 = 4LL * a1;
  v19 = 0LL;
  v20 = 0LL;
  v11 = 0LL;
  if ( v6 > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    v16 = -2147024362;
    v18 = 214;
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, _DWORD, unsigned int, const void *, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 30) + 160LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          a1,
          a2,
          &GUID_WICPixelFormat32bppPBGRA,
          v6,
          4 * a2 * a1,
          a5,
          &v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    v18 = 224;
  }
  else
  {
    v15 = v19;
    if ( !v19 )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xE1u, 0LL);
      goto LABEL_23;
    }
    if ( a3 == a1 && a4 == a2 )
    {
LABEL_14:
      v12 = CBitmapSource::Create(v15, v13, a6);
      v14 = v12;
      if ( v12 >= 0 )
        goto LABEL_23;
      v18 = 246;
      goto LABEL_16;
    }
    v19 = 0LL;
    v11 = v15;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 30)
                                                       + 88LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
            &v20);
    v14 = v12;
    if ( v12 < 0 )
    {
      v18 = 232;
    }
    else
    {
      if ( !v20 )
      {
        v14 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xE9u, 0LL);
        goto LABEL_23;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmap *, _QWORD, _QWORD, int))(*(_QWORD *)v20 + 64LL))(
              v20,
              v11,
              a3,
              a4,
              1);
      v14 = v12;
      if ( v12 < 0 )
      {
        v18 = 235;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                           + 30)
                                                                                        + 144LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
                v20,
                2LL,
                &v19);
        v14 = v12;
        if ( v12 >= 0 )
        {
          v15 = v19;
          if ( !v19 )
          {
            v14 = -2147024890;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xEEu, 0LL);
            goto LABEL_23;
          }
          goto LABEL_14;
        }
        v18 = 237;
      }
    }
  }
LABEL_16:
  v16 = v12;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v18, 0LL);
LABEL_23:
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmap *))v19->lpVtbl->Release)(v19);
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmap *))v11->lpVtbl->Release)(v11);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v14;
}
