/*
 * XREFs of ?HasRetryDeviceBitmaps@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1801F6010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::HasRetryDeviceBitmaps(CGlobalSurfaceManager *this)
{
  return *((_QWORD *)this + 48) != *((_QWORD *)this + 49);
}
