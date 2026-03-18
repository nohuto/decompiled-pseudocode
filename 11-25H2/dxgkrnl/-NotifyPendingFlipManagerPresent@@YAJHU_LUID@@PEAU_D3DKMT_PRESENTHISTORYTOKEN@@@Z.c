/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14005CA4C
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C67C (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14000B274 (-IsTokenManagerReady@@YAHXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x14002F690 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x140038938 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z @ 0x14009A2D0 (-GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  void *FenceValue; // r14
  unsigned __int64 v4; // rbp
  int v7; // edi
  __int64 Win32kImportTable; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  bool v14; // r8
  FlipManagerTokenObject *v15; // rbx
  __int64 v16; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  Object = (PVOID)a2;
  FenceValue = (void *)a3->Token.Flip.FenceValue;
  v4 = 0LL;
  v19 = 0LL;
  v7 = 0;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (**)(void))(Win32kImportTable + 520))();
  v9 = DxgkGetWin32kImportTable();
  v10 = (*(__int64 (**)(void))(v9 + 552))();
  if ( a1
    && !v10
    && (unsigned int)IsTokenManagerReady()
    && (v11 = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(v11 + 536))()) )
  {
    if ( (a3->Token.Gdi.ScrollRect.left & 4) != 0 )
      v7 = -1073741811;
  }
  else
  {
    v7 = -1071775730;
  }
  v12 = DxgkGetWin32kImportTable();
  (*(void (**)(void))(v12 + 568))();
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1071775730 )
    goto LABEL_21;
  Object = 0LL;
  v13 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 5, &Object);
  if ( v13 < 0 )
  {
    if ( v7 < 0 )
      return (unsigned int)v7;
    v7 = v13;
    goto LABEL_21;
  }
  v15 = (FlipManagerTokenObject *)Object;
  if ( v7 < 0 || (v7 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object), v7 < 0) )
  {
    FlipManagerTokenObject::GetSyncId(v15, &v19, v14);
    v4 = v19;
  }
  else
  {
    a3->Token.Gdi.ScrollRect.left |= 4u;
    a3->Token.Flip.FenceValue = (UINT64)v15;
  }
  if ( (a3->Token.Gdi.ScrollRect.left & 4) == 0 )
    ObfDereferenceObject(v15);
  if ( v7 < 0 )
  {
LABEL_21:
    if ( v4 )
    {
      v16 = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(unsigned __int64))(v16 + 64))(v4);
    }
  }
  return (unsigned int)v7;
}
