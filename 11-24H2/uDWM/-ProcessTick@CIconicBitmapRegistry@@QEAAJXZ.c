/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800091CC
 * Callers:
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180026DD0 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180004CB4 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18000917C (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800092E0 (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001B42C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180027CA4 (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800EC890 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  double GlobalTime; // xmm0_8
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  CWindowIconic *v7; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi

  GlobalTime = CDesktopManager::GetGlobalTime();
  v3 = 0;
  if ( *(_DWORD *)(v4 + 72) )
  {
    do
    {
      v5 = *((_QWORD *)this + 6);
      if ( *(double *)(v5 + 16LL * v3) > GlobalTime )
        break;
      if ( !IsWindowTab(*(struct CWindowData **)(v5 + 16LL * v3 + 8)) )
      {
        if ( v6 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v7 = (CWindowIconic *)*((_QWORD *)this + 12);
          *(_WORD *)((char *)this + 89) = 256;
        }
        else
        {
          CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v6, 0);
          *(_BYTE *)(v6 + 738) |= 0x10u;
          v7 = *(CWindowIconic **)(v6 + 488);
        }
        CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)v6);
        if ( v7 )
        {
          v8 = CWindowIconic::OnRepresentationTypeUpdated(v7);
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3CFu, 0LL);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 18) );
  }
  v9 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v3);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3D5u, 0LL);
  else
    CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
  return v10;
}
