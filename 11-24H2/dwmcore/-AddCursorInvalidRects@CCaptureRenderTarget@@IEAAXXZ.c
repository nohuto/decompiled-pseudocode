/*
 * XREFs of ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802360E4
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180236660 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18017C4C0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x180282460 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

void __fastcall CCaptureRenderTarget::AddCursorInvalidRects(CVisualTree **this)
{
  struct CVisualTree *v2; // r11
  CVisual *v3; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  CVisualTree *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-60h]
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v10)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-8h]
  char v14; // [rsp+90h] [rbp+10h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+98h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF

  RootVisualTree = CVisualTree::GetRootVisualTree(this[14]);
  v16 = *((_QWORD *)v2 + 9);
  if ( RootVisualTree == v2 && this[370] )
  {
    v3 = this[370];
    do
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v3);
      if ( VisualTreeNoRef )
        RootVisualTree = VisualTreeNoRef;
      v3 = *(CVisual **)(v5 + 88);
    }
    while ( v3 );
    v16 = v6;
  }
  v7 = this[3];
  *((_QWORD *)&v8 + 1) = &RootVisualTree;
  *(_QWORD *)&v8 = this;
  *(_QWORD *)&v9 = &v14;
  *((_QWORD *)&v9 + 1) = &v16;
  v10 = off_180307F20;
  v13 = &v10;
  v14 = 0;
  v11 = v8;
  v12 = v9;
  CComposition::ForEachCursorVisual(v7, &v10);
}
