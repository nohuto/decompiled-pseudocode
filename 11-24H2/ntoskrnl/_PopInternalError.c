/*
 * XREFs of _PopInternalError @ 0x1405CABB0
 * Callers:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     PopCreateDumpMdl @ 0x140B5E85C (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
