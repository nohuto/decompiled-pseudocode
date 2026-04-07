/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000B034
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000AF00 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000A028 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18000B11C (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18000B2F0 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, HICON a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  struct IWICBitmap *v8; // [rsp+50h] [rbp+18h] BYREF
  struct IWICBitmapSource *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HICON, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 30)
                                                                            + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
         a2,
         &v9);
  if ( v3 < 0 )
  {
    DoStackCaptureDirect(v3, 0x18Cu);
    v5 = 0;
  }
  else
  {
    v4 = CreateFormatConverterToPBGRA(v9, &v8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = CBitmapSource::Update(this, v8);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x19Au, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x198u, 0LL);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct IWICBitmap *))v8->lpVtbl->Release)(v8);
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->Release)(v9);
  return v5;
}
