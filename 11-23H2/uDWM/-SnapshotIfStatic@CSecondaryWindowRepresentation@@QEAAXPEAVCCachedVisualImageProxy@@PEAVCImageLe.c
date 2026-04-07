/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000DF40
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000ECF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x18000E2E4 (McTemplateU0z_EtwEventWriteTransfer.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180034554 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180054F64 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CCachedVisualImageProxy *a2,
        struct CImageLegacyMilBrushProxy *a3,
        const struct MilPointAndSizeL *a4)
{
  CWindowData *v4; // rsi
  __int64 v7; // rdi
  CWindowData *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v7 = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v15 = *((_QWORD *)v4 + 60);
      if ( v15 )
      {
        v10 = *(CWindowData **)(v15 + 32);
        goto LABEL_3;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v4) )
      {
        v10 = *(CWindowData **)(*((_QWORD *)v4 + 61) + 80LL);
        goto LABEL_3;
      }
    }
  }
  v10 = v4;
LABEL_3:
  if ( *((_DWORD *)this + 18) != 3 && ((*((_BYTE *)v10 + 676) & 8) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    SetRect(
      &rc,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *(_DWORD *)a4 + *((_DWORD *)a4 + 2),
      *((_DWORD *)a4 + 1) + *((_DWORD *)a4 + 3));
    CCachedVisualImageProxy::Snapshot(a2, &rc);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL)
                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                      + 24LL));
    v11 = (CBaseObject *)*((_QWORD *)this + 48);
    *(_OWORD *)((char *)this + 392) = *(_OWORD *)a4;
    if ( v11 )
      CBaseObject::Release(v11);
    *((_QWORD *)this + 48) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 161) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v14 = *((_QWORD *)this + 4);
      if ( v14 )
        v7 = *(_QWORD *)(v14 + 16);
      McTemplateU0z_EtwEventWriteTransfer(v13, v12, v7);
    }
  }
}
