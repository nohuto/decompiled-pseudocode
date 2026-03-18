/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C01AC6D8
 * Callers:
 *     xxxSendInput @ 0x1C000A4E4 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C026D710 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v3; // rbx

  result = ReferenceDwmApiPort(a1, a2);
  v3 = (void *)result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v3);
    return EnterCrit(1LL, 0LL);
  }
  return result;
}
