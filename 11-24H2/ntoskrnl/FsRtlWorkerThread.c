/*
 * XREFs of FsRtlWorkerThread @ 0x140582110
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PLIST_ENTRY EntryArray; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    EntryArray = 0LL;
    KeRemoveQueueEx(v2, 0, 0, 0LL, &EntryArray, 1u);
    v3 = EntryArray;
    guard_dispatch_icall_no_overrides(EntryArray[1].Blink, v4, v5, v6);
  }
  while ( !KeGetCurrentIrql() );
  KeBugCheckEx(
    0xC8u,
    ((unsigned __int64)KeGetCurrentIrql() << 16) | 2,
    (ULONG_PTR)v3[1].Flink,
    (ULONG_PTR)v3[1].Blink,
    (ULONG_PTR)v3);
}
