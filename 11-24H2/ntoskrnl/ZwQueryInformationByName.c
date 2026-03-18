/*
 * XREFs of ZwQueryInformationByName @ 0x1406A8E70
 * Callers:
 *     SdbpGetFileTimestamp @ 0x14080125C (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationByName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
