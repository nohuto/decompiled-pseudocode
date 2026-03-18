/*
 * XREFs of BgDisplayProgressIndicator @ 0x140BA0628
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 1) != 0 )
  {
    LOBYTE(v3) = a1;
    v4 = AnFwDisplayProgressIndicator(v3);
  }
  else
  {
    v4 = -1073741823;
  }
  BgpFwReleaseLock(v3, v2);
  return v4;
}
