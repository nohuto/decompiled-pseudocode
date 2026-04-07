/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18003E6CC
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18003DAC8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003E0D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x18003EF58 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800D0CDC (McTemplateU0z_EtwEventWriteTransfer.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CCachedVisualImageProxy *a2,
        struct CImageLegacyMilBrushProxy *a3,
        const struct D2D_POINTANDSIZE_L *a4)
{
  struct CWindowData *RepresentationWindowData; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // r9d
  __int128 v12; // xmm0
  CBaseObject *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int yBottom; // [rsp+20h] [rbp-58h]
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  if ( *((_DWORD *)this + 18) != 3
    && ((*((_BYTE *)RepresentationWindowData + 740) & 8) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    v9 = *((_DWORD *)a4 + 1);
    v10 = *(_DWORD *)a4;
    v11 = *(_DWORD *)a4 + *((_DWORD *)a4 + 2);
    yBottom = v9 + *((_DWORD *)a4 + 3);
    rc = 0LL;
    SetRect(&rc, v10, v9, v11, yBottom);
    CCachedVisualImageProxy::Snapshot(a2, &rc);
    CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v12 = *(_OWORD *)a4;
    v13 = (CBaseObject *)*((_QWORD *)this + 48);
    v14 = 0LL;
    *(_OWORD *)((char *)this + 392) = v12;
    if ( v13 )
      CBaseObject::Release(v13);
    *((_QWORD *)this + 48) = a3;
    if ( a3 )
      CMILRefCountBase::AddRef(a3);
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 161) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v17 = *((_QWORD *)this + 4);
      if ( v17 )
        v14 = *(_QWORD *)(v17 + 16);
      McTemplateU0z_EtwEventWriteTransfer(v16, v15, v14);
    }
  }
}
