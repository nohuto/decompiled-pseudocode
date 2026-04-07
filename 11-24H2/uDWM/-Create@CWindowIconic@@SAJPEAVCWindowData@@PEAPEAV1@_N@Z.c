/*
 * XREFs of ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18000670C
 * Callers:
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180002F8C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003DB18 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 * Callees:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180004C7C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowIconic@@IEAA@XZ @ 0x1800067E8 (--0CWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CWindowIconic::Create(struct CWindowData *a1, struct CWindowIconic **a2, char a3)
{
  CWindowIconic *v6; // rax
  CWindowIconic *v7; // rax
  CBaseObject *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx

  v6 = (CWindowIconic *)DefaultHeap::AllocClear(0x78uLL);
  if ( v6 && (v7 = CWindowIconic::CWindowIconic(v6), (v8 = v7) != 0LL) )
  {
    *((_BYTE *)v7 + 20) = a3;
    v9 = CWindowIconic::Initialize(v7, a1);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x47u, 0LL);
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
        a1);
      CBaseObject::Release(v8);
    }
    else
    {
      *a2 = v8;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u, 0LL);
  }
  return v10;
}
