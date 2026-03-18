/*
 * XREFs of _PopInternalError @ 0x1405CD440
 * Callers:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     PopCreateDumpMdl @ 0x140B5C7EC (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
