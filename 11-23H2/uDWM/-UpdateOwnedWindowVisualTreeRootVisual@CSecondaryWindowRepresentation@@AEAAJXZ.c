/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180034554
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000DF40 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E0C (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001C16C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180033F28 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180033F68 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18005093C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CRenderDataVisual *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  int TLWRootVisualType; // eax
  __int64 RootVisualNoAddRef; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v14; // rcx
  int v15; // eax
  CBaseObject *v16; // rdi
  int v17; // eax
  CBaseObject *v18; // rbp
  int v19; // eax
  CBaseObject *v20; // [rsp+58h] [rbp+10h] BYREF
  CBaseObject *v21; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v3 = (CRenderDataVisual *)*((_QWORD *)this + 7);
  if ( !v3 )
    return v1;
  CRenderDataVisual::ClearInstructions(v3);
  if ( *((_QWORD *)this + 48) )
  {
    v15 = ResourceHelper::CreateRectangleGeometry(
            *((_DWORD *)this + 98),
            *((_DWORD *)this + 99),
            *((_DWORD *)this + 100),
            *((_DWORD *)this + 101),
            &v21);
    v1 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xF3u, 0LL);
      v16 = v21;
LABEL_23:
      if ( v16 )
        CBaseObject::Release(v16);
      return v1;
    }
    v16 = v21;
    v17 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 48), v21, &v20);
    v1 = v17;
    if ( v17 >= 0 )
    {
      v18 = v20;
      v19 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v20);
      v1 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xF9u, 0LL);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xF7u, 0LL);
LABEL_31:
    v18 = v20;
LABEL_21:
    if ( v18 )
      CBaseObject::Release(v18);
    goto LABEL_23;
  }
  v4 = 0LL;
  v5 = *((_QWORD *)this + 8);
  v6 = (unsigned int)(*((_DWORD *)this + 18) - 1);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    v6 = (unsigned int)(*((_DWORD *)this + 18) - 2);
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v14 = *(_QWORD *)(v5 + 480);
      if ( v14 )
      {
        v4 = *(_QWORD *)(v14 + 32);
        goto LABEL_5;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_5;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v5 + 488) + 80LL);
        goto LABEL_5;
      }
    }
  }
  v4 = v5;
LABEL_5:
  v7 = *(_QWORD **)(v4 + 440);
  if ( v7 )
  {
    TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType((__int64)this, v6);
    RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v7, TLWRootVisualType);
    v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            24LL);
    v11 = v10;
    if ( !v10 )
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x102u, 0LL);
      return v1;
    }
    *(_DWORD *)(v10 + 8) = 1;
    *(_QWORD *)v10 = &CDrawVisualTreeInstruction::`vftable';
    *(_QWORD *)(v10 + 16) = RootVisualNoAddRef;
    if ( RootVisualNoAddRef )
      _InterlockedAdd((volatile signed __int32 *)(RootVisualNoAddRef + 8), 1u);
    v12 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), (struct CRenderDataInstruction *)v10);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x105u, 0LL);
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      v16 = v21;
      goto LABEL_31;
    }
  }
  return v1;
}
