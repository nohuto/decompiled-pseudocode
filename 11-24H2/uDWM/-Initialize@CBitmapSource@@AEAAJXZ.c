/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000AFD4
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000A038 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18000AC9C (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000AF00 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x18000B028 (-CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(struct CBitmapSourceProxy **this)
{
  int BitmapSourceProxy; // eax
  unsigned int v2; // ebx

  BitmapSourceProxy = CCompositor::CreateBitmapSourceProxy(
                        *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                        this + 2);
  v2 = BitmapSourceProxy;
  if ( BitmapSourceProxy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapSourceProxy, 0x12Au, 0LL);
  else
    return 0;
  return v2;
}
