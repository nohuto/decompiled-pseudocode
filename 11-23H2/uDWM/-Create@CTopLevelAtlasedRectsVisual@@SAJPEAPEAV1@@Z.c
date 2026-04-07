/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180035BF4
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180038EF0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A126C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180039B40 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct CTopLevelAtlasedRectsVisual **a1)
{
  CVisual *v2; // rax
  struct CTopLevelAtlasedRectsVisual *v3; // rbx
  __int64 v4; // rcx
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x20u, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    288LL);
  v3 = v2;
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_9;
  }
  CVisual::CVisual(v2);
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_QWORD *)(v4 + 256) = 0LL;
  *(_DWORD *)(v4 + 264) = 0;
  *(_DWORD *)(v4 + 268) = 0;
  *(_DWORD *)(v4 + 272) = 0;
  *(_QWORD *)(v4 + 280) = 0LL;
  *(_QWORD *)v4 = &CTopLevelAtlasedRectsVisual::`vftable';
  if ( !v4 )
  {
LABEL_9:
    v5 = -2147024882;
    goto LABEL_7;
  }
  v5 = ((__int64 (*)(void))*(&CTopLevelAtlasedRectsVisual::`vftable' + 1))();
  if ( v5 >= 0 )
  {
    *a1 = v3;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x20u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
