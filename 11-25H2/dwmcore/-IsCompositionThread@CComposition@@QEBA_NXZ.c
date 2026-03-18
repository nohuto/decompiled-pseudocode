/*
 * XREFs of ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18003E290
 * Callers:
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18003E0D4 (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x18003E260 (-IsCompositionThread@@YA_NXZ.c)
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x18003EA38 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180069728 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18013C280 (-IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsCompositionThread(CComposition *this)
{
  return GetCurrentThreadId() == CComposition::s_compositionThreadId;
}
