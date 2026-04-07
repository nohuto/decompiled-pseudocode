/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18004FD64
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18003D238 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7974 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CBaseImageProxy *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  CBaseObject *v10; // rcx
  __int128 v11; // xmm0
  unsigned int v12; // edi

  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         56LL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = &CDrawTileImageInstruction::`vftable';
    v10 = *(CBaseObject **)(v8 + 48);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    if ( a1 )
    {
      *(_QWORD *)(v9 + 48) = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    v11 = (__int128)*a2;
    v12 = 0;
    *(float *)(v9 + 40) = a4;
    *(_OWORD *)(v9 + 16) = v11;
    *(struct tagPOINT *)(v9 + 32) = *a3;
    *a5 = (struct CDrawTileImageInstruction *)v9;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x31u, 0LL);
  }
  return v12;
}
