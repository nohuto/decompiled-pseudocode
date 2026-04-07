/*
 * XREFs of ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180038A08
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180047FD0 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004EF14 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800392C0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CVisual::CreateFromSharedHandle(void *a1, struct CVisual **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rax
  struct CVisual *v6; // rbx
  unsigned int v7; // edi
  unsigned int v9; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x30u, 0LL);
    return v7;
  }
  *a2 = 0LL;
  v4 = (CVisual *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v4 )
  {
    v6 = 0LL;
    goto LABEL_9;
  }
  v5 = CVisual::CVisual(v4);
  v6 = v5;
  if ( !v5 )
  {
LABEL_9:
    v7 = -2147024882;
    v9 = 54;
    goto LABEL_10;
  }
  v7 = CVisual::InitializeFromSharedHandle(v5, a1);
  if ( (v7 & 0x80000000) == 0 )
  {
    *a2 = v6;
    return v7;
  }
  v9 = 56;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v9, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
