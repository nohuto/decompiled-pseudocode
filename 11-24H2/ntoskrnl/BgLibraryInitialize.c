/*
 * XREFs of BgLibraryInitialize @ 0x140BB0760
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140C6FD78 (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
