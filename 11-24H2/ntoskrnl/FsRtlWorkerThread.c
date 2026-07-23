/*
 * XREFs of FsRtlWorkerThread @ 0x14057F490
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY v3; // rbx
  __int64 v4; // rdx
  PLIST_ENTRY EntryArray; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    EntryArray = 0LL;
    KeRemoveQueueEx(v2, 0, 0, 0LL, &EntryArray, 1u);
    v3 = EntryArray;
    guard_dispatch_icall_no_overrides(EntryArray[1].Blink, v4);
  }
  while ( !KeGetCurrentIrql() );
  KeBugCheckEx(
    0xC8u,
    ((unsigned __int64)KeGetCurrentIrql() << 16) | 2,
    (ULONG_PTR)v3[1].Flink,
    (ULONG_PTR)v3[1].Blink,
    (ULONG_PTR)v3);
}
