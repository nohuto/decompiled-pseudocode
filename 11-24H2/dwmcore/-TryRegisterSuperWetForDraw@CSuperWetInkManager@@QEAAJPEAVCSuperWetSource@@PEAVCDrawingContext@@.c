/*
 * XREFs of ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018F084
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A1F90 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A29D0 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018E754 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018EF14 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x18018F158 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18022FA30 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDraw(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        char a4,
        bool *a5)
{
  int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned __int8)IsSuperWetInkCompatibleVailContainer() )
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawHost(this, a2, a3, a4, a5);
    if ( v9 >= 0 )
      return 0LL;
    v11 = 375LL;
  }
  else
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(this, a2, (const struct CVisualTree **)a3, a4, a5);
    if ( v9 < 0 )
    {
      v11 = 358LL;
    }
    else
    {
      if ( *a5 )
        return 0LL;
      v9 = CSuperWetInkManager::TryDrawSuperWetLocal(this, a2, (const struct CVisualTree **)a3, a4, a5);
      if ( v9 >= 0 )
        return 0LL;
      v11 = 366LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
