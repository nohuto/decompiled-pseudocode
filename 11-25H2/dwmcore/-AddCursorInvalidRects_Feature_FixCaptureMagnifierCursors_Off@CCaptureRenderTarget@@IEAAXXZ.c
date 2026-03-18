/*
 * XREFs of ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D2AC
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x18023F8D8 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18018CDD0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

void __fastcall CCaptureRenderTarget::AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off(CVisualTree **this)
{
  const struct CVisualTree *v2; // rdi
  CVisual **v3; // r11
  CVisual *v4; // rcx
  CVisual *v5; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v7; // r10
  CVisual *v8; // r11
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  CVisualTree *v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-59h]
  __int64 (__fastcall **v13)(); // [rsp+48h] [rbp-41h] BYREF
  __int128 v14; // [rsp+50h] [rbp-39h]
  _BYTE *v15; // [rsp+60h] [rbp-29h]
  __int64 (__fastcall ***v16)(); // [rsp+80h] [rbp-9h]
  _BYTE v17[64]; // [rsp+90h] [rbp+7h] BYREF
  int v18; // [rsp+D0h] [rbp+47h]
  struct CVisualTree *RootVisualTree; // [rsp+F0h] [rbp+67h] BYREF

  RootVisualTree = CVisualTree::GetRootVisualTree(this[14]);
  v2 = RootVisualTree;
  v4 = v3[9];
  if ( RootVisualTree == (struct CVisualTree *)v3 && this[370] )
  {
    v5 = this[370];
    do
    {
      VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v5);
      if ( VisualTreeNoRef )
      {
        v2 = VisualTreeNoRef;
        RootVisualTree = VisualTreeNoRef;
      }
      v5 = *(CVisual **)(v7 + 88);
    }
    while ( v5 );
    v4 = v8;
  }
  v18 = 0;
  if ( (int)CVisual::GetWorldTransform(v4, v2, 0, (__int64)v17, 0LL, 0LL) >= 0
    && CMILMatrix::Invert((CMILMatrix *)v17, v9, v10) )
  {
    v11 = this[3];
    *((_QWORD *)&v12 + 1) = &RootVisualTree;
    *(_QWORD *)&v12 = this;
    v13 = off_180312D70;
    v16 = &v13;
    v14 = v12;
    v15 = v17;
    CComposition::ForEachCursorVisual(v11, &v13);
  }
  else
  {
    CTargetDirtyBase<8>::SetFullDirty((__int64)(this + 40));
  }
}
