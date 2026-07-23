/*
 * XREFs of CcScheduleReadAhead @ 0x140578B60
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL, 0LL);
}
