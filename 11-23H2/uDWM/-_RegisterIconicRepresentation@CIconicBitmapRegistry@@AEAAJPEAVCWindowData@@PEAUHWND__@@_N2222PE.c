/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x1800C3708
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800C34D0 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18000B71C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18004BCE0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800C33CC (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C35C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        HWND a3,
        __int64 a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8

  v9 = 0;
  if ( a6 )
  {
    *(_DWORD *)a9 = 2;
  }
  else if ( !(_BYTE)a4 || a5 )
  {
    *(_DWORD *)a9 = 0;
  }
  else
  {
    *(_DWORD *)a9 = 1;
    if ( !a7 )
    {
      v13 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xBDu);
        return v9;
      }
      goto LABEL_10;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
LABEL_10:
  if ( a8 != (*(_DWORD *)a9 == 2) && (unsigned __int64)a2 <= 0xFFFFFFFFFFFFFFFDuLL )
    CIconicBitmapRegistry::RegisterBitmapInUse(this, a2);
  v14 = *(unsigned int *)a9;
  if ( !(_DWORD)v14 )
    goto LABEL_18;
  v14 = (unsigned int)(v14 - 1);
  if ( !(_DWORD)v14 )
  {
    v15 = 5LL;
    goto LABEL_19;
  }
  if ( (_DWORD)v14 != 1 )
  {
LABEL_18:
    v15 = 4LL;
    goto LABEL_19;
  }
  v15 = 6LL;
LABEL_19:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v14, (__int64)&UdwmSelectIconicRepresentation_Info, v15, a3);
  if ( IsWindowTab(a2) && !a6 && *(_DWORD *)a9 == 1 )
    *(_DWORD *)a9 = 0;
  return v9;
}
