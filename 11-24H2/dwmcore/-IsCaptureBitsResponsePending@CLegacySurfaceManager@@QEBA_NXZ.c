/*
 * XREFs of ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ @ 0x1800F2B20
 * Callers:
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800F2540 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800F26C0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySurfaceManager::IsCaptureBitsResponsePending(CLegacySurfaceManager *this)
{
  return *((_QWORD *)this + 26) != 0LL;
}
