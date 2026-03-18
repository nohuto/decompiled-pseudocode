/*
 * XREFs of ?HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ @ 0x180030FC0
 * Callers:
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySurfaceManager::HasRetryDeviceBitmaps(CLegacySurfaceManager *this)
{
  return *((_QWORD *)this + 29) != *((_QWORD *)this + 30);
}
