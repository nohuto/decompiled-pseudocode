/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344
 * Callers:
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 *     SfnINOUTNCCALCSIZE @ 0x14017DAE0 (SfnINOUTNCCALCSIZE.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401897BC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ClientLoadLocalT1Fonts @ 0x14019A154 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x14019A1F4 (ClientDeliverUserApc.c)
 *     xxxClientThreadSetup @ 0x14019A2A0 (xxxClientThreadSetup.c)
 *     ClientNoMemoryPopup @ 0x1402B87DC (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1402BCAD8 (xxxUserModeCallback.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1, __int64 a2)
{
  __int64 CurrentThreadNonPaged; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = W32GetCurrentThreadNonPaged(a1, a2);
  result = 0LL;
  if ( CurrentThreadNonPaged )
    return *(unsigned int *)(CurrentThreadNonPaged + 28);
  return result;
}
