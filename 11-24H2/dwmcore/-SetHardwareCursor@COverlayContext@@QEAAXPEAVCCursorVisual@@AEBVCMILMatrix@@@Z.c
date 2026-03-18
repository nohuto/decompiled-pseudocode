/*
 * XREFs of ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z @ 0x18026CF64
 * Callers:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x18027ACF0 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ClearHardwareCursor@COverlayContext@@AEAAXXZ @ 0x180269FC4 (-ClearHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::SetHardwareCursor(
        struct CCursorVisual **this,
        struct CCursorVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v6; // r15
  struct CCursorVisual *v7; // rcx
  struct CCursorVisual *v8; // rdi
  void (__fastcall *v9)(struct CCursorVisual *, struct D2D_RECT_F *); // rbx
  struct D2D_RECT_F *CursorBounds; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  CCachedVisualImage *v13; // rbx
  struct D2D_RECT_F v14; // [rsp+20h] [rbp-38h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct CCursorVisual *))(*(_QWORD *)*this + 280LL))(*this);
  if ( v6 )
  {
    v7 = this[2403];
    if ( v7 != a2 )
    {
      if ( v7 )
      {
        v8 = *this;
        v9 = *(void (__fastcall **)(struct CCursorVisual *, struct D2D_RECT_F *))(*(_QWORD *)*this + 296LL);
        CursorBounds = COverlayContext::GetCursorBounds((COverlayContext *)this, &v14);
        v9(v8, CursorBounds);
        COverlayContext::ClearHardwareCursor((COverlayContext *)this);
      }
      this[2404] = *(struct CCursorVisual **)(*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v6 + 216LL))(
                                               v6,
                                               &v14);
      *((_DWORD *)this + 4810) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 224LL))(v6);
      v13 = this[2403];
      this[2403] = a2;
      if ( a2 )
        CMILRefCountImpl::AddReference((struct CCursorVisual *)((char *)a2 + 8));
      if ( v13 )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13, v11, v12);
    }
    *(_OWORD *)((char *)this + 19244) = *(_OWORD *)a3;
    *(_OWORD *)((char *)this + 19260) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)this + 19276) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)this + 19292) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 4827) = *((_DWORD *)a3 + 16);
    *((_BYTE *)this + 19593) = 1;
    COverlayContext::UpdateHardwareCursor((COverlayContext *)this);
  }
}
