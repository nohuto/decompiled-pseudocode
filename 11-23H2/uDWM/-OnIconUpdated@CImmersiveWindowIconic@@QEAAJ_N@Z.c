/*
 * XREFs of ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x1800C4B50
 * Callers:
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x1800C4C78 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C4CEC (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C4A0C (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnIconUpdated(CImmersiveWindowIconic *this, char a2)
{
  int IconW; // eax
  unsigned int v5; // ebx
  int v6; // eax

  IconW = CImmersiveWindowIconic::LoadIconW(this);
  v5 = IconW;
  if ( IconW >= 0 )
  {
    if ( a2 )
    {
      v6 = (*(__int64 (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 64LL))(this);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xCFu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0xCCu);
  }
  return v5;
}
