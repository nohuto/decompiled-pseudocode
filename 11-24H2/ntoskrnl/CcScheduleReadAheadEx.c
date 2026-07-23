/*
 * XREFs of CcScheduleReadAheadEx @ 0x140493C30
 * Callers:
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
