/*
 * XREFs of ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180154F30
 * Callers:
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180132E48 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x180154AE8 (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x180154EF8 (-IsCompositionThread@@YA_NXZ.c)
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180155848 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 *     ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x1801567B0 (-IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsCompositionThread(CComposition *this)
{
  return GetCurrentThreadId() == CComposition::s_compositionThreadId;
}
