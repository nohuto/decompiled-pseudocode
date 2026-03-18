/*
 * XREFs of WheapProcessOfflineList @ 0x14065F830
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1407C9604 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  struct _SINGLE_LIST_ENTRY *v1; // rbx
  struct _SINGLE_LIST_ENTRY *v2; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  int PageBadStatus; // eax
  struct _SINGLE_LIST_ENTRY *v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v9; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140EF7888);
  v1 = (struct _SINGLE_LIST_ENTRY *)WheapOfflineChecker;
  WheapOfflineChecker = 0LL;
  dword_140EF7890 = 0;
  KeReleaseSpinLock(&qword_140EF7888, v0);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    Next = v2[1].Next;
    v6 = Next;
    PageBadStatus = MmGetPageBadStatus(&v6);
    if ( PageBadStatus == -1073740023 )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v8 = 0x800000324C4E524BuLL;
      *((_QWORD *)&v8 + 1) = 0x800000002LL;
      v9 = Next;
      WheaLogInternalEvent(&Src);
      goto LABEL_4;
    }
    if ( PageBadStatus == 259 )
    {
      WheapPushPendingOfflineWrapper(v2);
    }
    else
    {
LABEL_4:
      ExFreePoolWithTag(v2, 0x61656857u);
      _InterlockedDecrement(&dword_140EF78A0);
    }
  }
  return 0LL;
}
