/*
 * XREFs of CcScheduleReadAheadEx @ 0x1404992A0
 * Callers:
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
