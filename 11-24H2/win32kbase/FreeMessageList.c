/*
 * XREFs of FreeMessageList @ 0x1401001D0
 * Callers:
 *     UserDeleteW32Thread @ 0x1400590C0 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FreeMessageList(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1392LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
