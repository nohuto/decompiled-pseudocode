/*
 * XREFs of GreLockVisRgnPublish @ 0x1400C21C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x1400C2230 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 */

__int64 __fastcall GreLockVisRgnPublish(__int64 a1)
{
  struct _ERESOURCE *v1; // rbx

  v1 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"VisRgnPublish", (_DWORD)v1 + 1248, 0);
  GreAcquireSemaphoreInternal(v1 + 12);
  return GrepAcquireLockValidate<11>();
}
