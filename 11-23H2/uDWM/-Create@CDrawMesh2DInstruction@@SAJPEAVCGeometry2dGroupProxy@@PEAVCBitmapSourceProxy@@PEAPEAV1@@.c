/*
 * XREFs of ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18006CD76
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006DC06 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E3CC4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawMesh2DInstruction::Create(
        struct CGeometry2dGroupProxy *a1,
        struct CBitmapSourceProxy *a2,
        struct CDrawMesh2DInstruction **a3)
{
  __int64 v6; // rax
  struct CDrawMesh2DInstruction *v7; // rbx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  unsigned int v10; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v7 = (struct CDrawMesh2DInstruction *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CDrawMesh2DInstruction::`vftable';
    v8 = *(CBaseObject **)(v6 + 16);
    if ( v8 )
      CBaseObject::Release(v8);
    *((_QWORD *)v7 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v9 = (CBaseObject *)*((_QWORD *)v7 + 3);
    if ( v9 )
      CBaseObject::Release(v9);
    *((_QWORD *)v7 + 3) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    v10 = 0;
    *a3 = v7;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x31u);
  }
  return v10;
}
