/*
 * XREFs of CcScheduleReadAhead @ 0x14057B6D0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma(FileObject, FileOffset, Length, 0LL, 0LL);
}
