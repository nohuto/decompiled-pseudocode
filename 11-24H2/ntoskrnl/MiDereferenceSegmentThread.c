/*
 * XREFs of MiDereferenceSegmentThread @ 0x1403ED670
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     MiSetDeleteOnCloseTimer @ 0x1403ED804 (MiSetDeleteOnCloseTimer.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  unsigned int v4; // esi
  struct _KEVENT *v5; // rcx
  KIRQL v6; // al
  PVOID Object[8]; // [rsp+40h] [rbp-1F8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1B8h] BYREF

  *(_BYTE *)(a1 + 2073) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 88);
  Object[2] = (PVOID)(a1 + 1904);
  Object[1] = (PVOID)(a1 + 1760);
  Object[4] = (PVOID)(a1 + 2008);
  Object[3] = (PVOID)(a1 + 1784);
  Object[5] = (PVOID)(a1 + 2128);
  Object[7] = (PVOID)(a1 + 2416);
  Object[6] = (PVOID)(a1 + 2352);
  do
  {
    result = KeWaitForMultipleObjects(
               8 - (&MiSystemPartition != (ULONG *)a1),
               Object,
               WaitAny,
               WrVirtualMemory,
               0,
               0,
               0LL,
               &WaitBlockArray);
    v4 = result;
    if ( result >= 8 )
      continue;
    switch ( result )
    {
      case 0:
        v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
        *(_BYTE *)(a1 + 2072) = 1;
        MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v6);
        break;
      case 1:
        v5 = (struct _KEVENT *)(a1 + 1760);
LABEL_11:
        KeResetEvent(v5);
        break;
      case 3:
        v5 = (struct _KEVENT *)(a1 + 1784);
        goto LABEL_11;
      case 7:
        v5 = (struct _KEVENT *)(a1 + 2416);
        goto LABEL_11;
    }
    MiIssueSegmentDereferenceWork(a1, v4);
    result = MiSetDeleteOnCloseTimer(a1);
  }
  while ( v4 );
  return result;
}
