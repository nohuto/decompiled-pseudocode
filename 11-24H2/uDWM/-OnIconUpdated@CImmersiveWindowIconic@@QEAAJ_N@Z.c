/*
 * XREFs of ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180095D3C
 * Callers:
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180095CC4 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C6B54 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180095DC0 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnIconUpdated(CImmersiveWindowIconic *this, char a2)
{
  int IconW; // eax
  unsigned int v5; // ebx
  int v6; // eax

  IconW = CImmersiveWindowIconic::LoadIconW(this);
  v5 = IconW;
  if ( IconW < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0xCAu, 0LL);
  }
  else if ( a2 )
  {
    v6 = (*(__int64 (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 48LL))(this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xCDu, 0LL);
  }
  return v5;
}
