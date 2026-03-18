/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C8FC
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C67C (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1400099B4 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14000B630 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x140033B48 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x140035EE0 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140051E94 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     Feature_HwndSwapchainSkippedToken__private_IsEnabledDeviceUsageNoInline @ 0x14009A338 (Feature_HwndSwapchainSkippedToken__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  void *hLogicalSurface; // r14
  CCompositionSurface *v4; // r12
  int SessionTokenManager; // eax
  __int64 v7; // r8
  void *v8; // rsi
  int v9; // ebx
  _QWORD *v10; // r15
  char v11; // r13
  CCompositionSurface *v12; // r14
  UINT64 CompositionBindingId; // rdx
  UINT64 v14; // rdx
  UINT v15; // eax
  __int64 v16; // rax
  HWND v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 Win32kImportTable; // rax
  UINT64 CompositionSyncKey; // rdi
  __int64 v24; // rax
  int v26; // eax
  CCompositionSurface *v27; // [rsp+50h] [rbp-18h] BYREF
  void *Handle; // [rsp+B8h] [rbp+50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+58h] BYREF
  HWND v31; // [rsp+C8h] [rbp+60h] BYREF

  Handle = (void *)a2;
  hLogicalSurface = (void *)a3->Token.Flip.hLogicalSurface;
  v4 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&Handle);
  v8 = Handle;
  v9 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v9 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v7, (struct CompositionSurfaceObject **)&Object);
    if ( v9 >= 0 )
    {
      v10 = Object;
      v27 = 0LL;
      v31 = 0LL;
      v11 = 0;
      v9 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v27);
      if ( v9 < 0 )
      {
        v4 = v27;
LABEL_34:
        if ( v4 )
          CCompositionSurface::UnlockAndRelease(v4);
        goto LABEL_36;
      }
      v12 = v27;
      CompositionBindingId = a3->CompositionBindingId;
      LODWORD(Object) = 0;
      if ( CCompositionSurface::CheckBinding(
             v27,
             CompositionBindingId,
             (enum CompositionBufferType *)&Object,
             &v31,
             (bool *)&Handle) )
      {
        if ( (_DWORD)Object == 2 )
        {
          v14 = a3->CompositionBindingId;
          LOBYTE(Handle) = 0;
          LOBYTE(Object) = 0;
          v9 = CCompositionSurface::NotifyPendingFlipPresent(
                 v12,
                 v14,
                 &a3->Token.Flip,
                 (bool *)&Handle,
                 (bool *)&Object);
          if ( v9 >= 0 )
          {
            if ( (_BYTE)Handle )
            {
              v15 = a3->Token.Flip.Flags.Value | 0x200000;
              a3->Token.Flip.Flags.Value = v15;
              if ( (_BYTE)Object )
                a3->Token.Flip.Flags.Value = v15 | 0x400000;
            }
            v11 = *((_BYTE *)v12 + 128);
            a3->Token.Flip.ScatterBlts.Blts[11].DestinationOffset.x = *((_DWORD *)v12 + 28);
          }
        }
        else
        {
          v9 = -1073741811;
        }
      }
      else
      {
        v9 = -1071775728;
      }
      CCompositionSurface::UnlockAndRelease(v12);
      if ( v9 < 0 )
        goto LABEL_36;
      if ( !a1 || !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v8 + 192LL))(v8) )
      {
        v9 = v31 != 0LL ? -1071775733 : -1071775730;
        goto LABEL_36;
      }
      if ( (a3->Token.Flip.Flags.Value & 0x2000000) == 0 )
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v8 + 112LL))(v8, v10);
      if ( v9 < 0 )
        goto LABEL_36;
      if ( v11 )
      {
LABEL_30:
        Handle = 0LL;
        v9 = DxgkCompositionObject::OpenDwmHandle(v10, &Handle);
        if ( v9 >= 0 )
        {
          a3->Token.Flip.hCompSurf = (LONG64)Handle;
          *((_QWORD *)&a3->Token.SurfaceComplete + 7) = v10[3];
          Win32kImportTable = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, _QWORD, UINT64, LONG, LONG, LONG))(Win32kImportTable + 416))(
            a3,
            v10,
            a3->Token.Flip.SwapChainIndex,
            (unsigned int)a3->Token.Flip.ScrollOffset.y,
            *((_QWORD *)&a3->Token.SurfaceComplete + 7),
            a3->CompositionBindingId,
            a3->Token.Blt.DirtyRegions.Rects[0].bottom,
            a3->Token.Flip.SourceRect.right,
            a3->Token.Flip.SourceRect.bottom);
          goto LABEL_34;
        }
LABEL_36:
        ObfDereferenceObject(v10);
        goto LABEL_37;
      }
      LODWORD(Handle) = 0;
      v16 = DxgkGetWin32kImportTable();
      (*(void (**)(void))(v16 + 520))();
      v17 = v31;
      v18 = DxgkGetWin32kImportTable();
      if ( v17 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, void **))(v18 + 560))(v17, &Handle) )
          v9 = -1071775729;
        if ( v9 < 0 )
        {
LABEL_29:
          v21 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v21 + 568))();
          if ( v9 < 0 )
            goto LABEL_36;
          goto LABEL_30;
        }
      }
      else
      {
        LODWORD(Handle) = (*(__int64 (**)(void))(v18 + 536))();
      }
      v19 = DxgkGetWin32kImportTable();
      v20 = (*(__int64 (**)(void))(v19 + 552))();
      if ( !(_DWORD)Handle || v20 )
        v9 = v17 != 0LL ? -1071775733 : -1071775730;
      goto LABEL_29;
    }
  }
LABEL_37:
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( (unsigned int)Feature_HwndSwapchainSkippedToken__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 != -1071775733 && (unsigned int)(v9 + 1071775730) > 1 )
      goto LABEL_42;
  }
  else if ( v9 != -1071775733 && v9 != -1071775730 )
  {
LABEL_42:
    if ( v9 >= 0 )
      goto LABEL_45;
    goto LABEL_43;
  }
  v26 = NotifySurfaceOfSkippedToken(a3);
  if ( v26 >= 0 )
    goto LABEL_42;
  v9 = v26;
LABEL_43:
  CompositionSyncKey = a3->Token.Flip.CompositionSyncKey;
  if ( CompositionSyncKey )
  {
    v24 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(UINT64))(v24 + 64))(CompositionSyncKey);
  }
LABEL_45:
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
