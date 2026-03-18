/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C001B458
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C001A550 (xxxLW_LoadFonts.c)
 *     ClientLoadLocalT1Fonts @ 0x1C001B340 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1C001B3CC (ClientDeliverUserApc.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C004340C (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ClientNoMemoryPopup @ 0x1C0205490 (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1C0213134 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 AtomicExecutionCheck::GetCount(void)
{
  __int64 CurrentThreadWin32Thread; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    return *(unsigned int *)(CurrentThreadWin32Thread + 48);
  return result;
}
