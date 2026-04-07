/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800C32B0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18000B6D8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18000B71C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18000BA04 (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C2C80 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800C368C (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180106EA4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  unsigned int v1; // edi
  double i; // xmm6_8
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  CWindowIconic *v6; // rsi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi

  v1 = 0;
  for ( i = *((double *)CDesktopManager::s_pDesktopManagerInstance + 33); v1 < *((_DWORD *)this + 18); ++v1 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( *(double *)(v4 + 16LL * v1) > i )
      break;
    if ( !IsWindowTab(*(struct CWindowData **)(v4 + 16LL * v1 + 8)) )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v6 = (CWindowIconic *)*((_QWORD *)this + 12);
        *(_WORD *)((char *)this + 89) = 256;
      }
      else
      {
        CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v5, 0);
        *(_BYTE *)(v5 + 674) |= 0x10u;
        v6 = *(CWindowIconic **)(v5 + 488);
      }
      CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)v5);
      if ( v6 )
      {
        v7 = CWindowIconic::OnRepresentationTypeUpdated(v6);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3D0u);
      }
    }
  }
  v8 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v1);
  v9 = v8;
  if ( v8 >= 0 )
    CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3D6u);
  return v9;
}
