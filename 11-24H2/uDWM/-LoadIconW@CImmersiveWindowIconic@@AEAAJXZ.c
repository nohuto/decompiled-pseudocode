/*
 * XREFs of ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180095DC0
 * Callers:
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180095D3C (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C6850 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001D124 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800C5CF8 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800C5CF8.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C6C14 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowIconic::LoadIconW(CImmersiveWindowIconic *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  CMILRefCountBase *BitmapSourceNoRef; // rax
  struct tagSIZE *v6; // rsi
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 66);
  if ( v1 == 2 || (unsigned int)(*((_DWORD *)this + 66) - 3) <= 1 )
  {
    v3 = *((_QWORD *)this + 30);
    v8.x = 0;
    v8.y = 0;
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                            *(HWND *)(v3 + 40));
    if ( IconicResourceNoRef )
    {
      BitmapSourceNoRef = (CMILRefCountBase *)CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                                IconicResourceNoRef,
                                                v1,
                                                *((unsigned int *)this + 69));
      v6 = (struct tagSIZE *)BitmapSourceNoRef;
      if ( BitmapSourceNoRef )
      {
        CMILRefCountBase::AddRef(BitmapSourceNoRef);
        (*(void (__fastcall **)(CImmersiveWindowIconic *, struct tagSIZE *))(*(_QWORD *)this + 80LL))(this, v6 + 3);
        CImmersiveWindowIconic::_UpdateSolidFill(this);
        CVisual::SetSize(*((CVisual **)this + 31), v6 + 3);
        CVisual::SetOffset(*((struct tagPOINT **)this + 31), &v8);
        CImage::SetBitmapSource(*((CImage **)this + 31), (struct CBitmapSource *)v6);
        CBaseObject::Release((CBaseObject *)v6);
      }
    }
  }
  return 0LL;
}
