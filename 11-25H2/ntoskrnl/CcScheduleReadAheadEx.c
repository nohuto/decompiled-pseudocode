/*
 * XREFs of CcScheduleReadAheadEx @ 0x140499130
 * Callers:
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
