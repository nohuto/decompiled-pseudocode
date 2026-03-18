/*
 * XREFs of ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D3B4
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x18023F8D8 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18018CDD0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

void __fastcall CCaptureRenderTarget::AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On(CVisualTree **this)
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
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+A0h] [rbp+20h] BYREF

  RootVisualTree = CVisualTree::GetRootVisualTree(this[14]);
  v15 = *((_QWORD *)v2 + 9);
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
    v15 = v6;
  }
  v7 = this[3];
  *(_QWORD *)&v8 = &v14;
  *((_QWORD *)&v8 + 1) = this;
  *(_QWORD *)&v9 = &v15;
  *((_QWORD *)&v9 + 1) = &RootVisualTree;
  v10 = off_180312DA0;
  v13 = &v10;
  v14 = 0;
  v11 = v8;
  v12 = v9;
  CComposition::ForEachCursorVisual(v7, &v10);
}
