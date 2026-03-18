/*
 * XREFs of ?SignalStartNowEvent@CGlobalSurfaceManager@@UEBA_NXZ @ 0x18021ED00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::SignalStartNowEvent(HANDLE *this)
{
  return SetEvent(this[62]);
}
