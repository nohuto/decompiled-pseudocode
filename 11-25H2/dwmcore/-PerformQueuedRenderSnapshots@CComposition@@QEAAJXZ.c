/*
 * XREFs of ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ @ 0x1801BD7B4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::PerformQueuedRenderSnapshots(CComposition *this)
{
  unsigned int v1; // esi
  int v2; // ebx
  char *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  int v7; // eax
  int v8; // edi

  v1 = *((_DWORD *)this + 1484);
  v2 = 0;
  if ( v1 )
  {
    v4 = (char *)this + 5912;
    v5 = 0LL;
    v6 = *((unsigned int *)this + 1484);
    do
    {
      v7 = CCachedVisualImage::Snapshot(*(CCachedVisualImage **)(v5 + *(_QWORD *)v4));
      v8 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x7BFu, 0LL);
      if ( !v2 || v2 >= 0 && v8 < 0 )
        v2 = v8;
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)v4 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v4, 8u);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &RenderCVISnapshots,
        (unsigned int)v2,
        v1);
  }
  return (unsigned int)v2;
}
