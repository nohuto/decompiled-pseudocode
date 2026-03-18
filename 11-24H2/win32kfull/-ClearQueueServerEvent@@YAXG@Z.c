/*
 * XREFs of ?ClearQueueServerEvent@@YAXG@Z @ 0x140066D74
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall ClearQueueServerEvent(__int64 a1, __int64 a2)
{
  __int32 v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx

  v2 = (unsigned __int16)a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 488) + 16LL), v2);
  KeClearEvent(*(PRKEVENT *)(v4 + 768));
}
