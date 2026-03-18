/*
 * XREFs of ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ @ 0x180030FAC
 * Callers:
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180030870 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySurfaceManager::IsCaptureBitsResponsePending(CLegacySurfaceManager *this)
{
  return *((_QWORD *)this + 26) != 0LL;
}
