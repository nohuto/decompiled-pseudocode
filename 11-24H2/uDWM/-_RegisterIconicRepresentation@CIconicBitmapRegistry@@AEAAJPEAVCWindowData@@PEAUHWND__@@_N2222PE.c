/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180007C94
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180007B4C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800064C4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180007E0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  struct CWindowData *v11; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // eax

  v9 = 0;
  v11 = a2;
  if ( a6 )
  {
    *(_DWORD *)a9 = 2;
  }
  else if ( !a4 || a5 )
  {
    *(_DWORD *)a9 = 0;
  }
  else
  {
    *(_DWORD *)a9 = 1;
    if ( !a7 )
    {
      v16 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xBCu, 0LL);
        return v9;
      }
      goto LABEL_4;
    }
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
    a2);
LABEL_4:
  if ( (unsigned __int64)v11 <= 0xFFFFFFFFFFFFFFFDuLL && a8 != (*(_DWORD *)a9 == 2) )
    CIconicBitmapRegistry::RegisterBitmapInUse(this, v11);
  v13 = *(unsigned int *)a9;
  if ( !(_DWORD)v13 )
    goto LABEL_15;
  v13 = (unsigned int)(v13 - 1);
  if ( !(_DWORD)v13 )
  {
    v14 = 5LL;
    goto LABEL_9;
  }
  if ( (_DWORD)v13 == 1 )
    v14 = 6LL;
  else
LABEL_15:
    v14 = 4LL;
LABEL_9:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v13, &UdwmSelectIconicRepresentation_Info, v14, a3);
  if ( IsWindowTab(v11) && !a6 && *(_DWORD *)a9 == 1 )
    *(_DWORD *)a9 = 0;
  return v9;
}
