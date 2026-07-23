/*
 * XREFs of WheapProcessOfflineList @ 0x14065E000
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1407C9AF4 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  _SINGLE_LIST_ENTRY *v1; // rbx
  _SINGLE_LIST_ENTRY *v2; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  int PageBadStatus; // eax
  __int64 v5; // rdx
  struct _SINGLE_LIST_ENTRY *v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v10; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140EF7B48);
  v1 = (_SINGLE_LIST_ENTRY *)WheapOfflineChecker;
  WheapOfflineChecker = 0LL;
  dword_140EF7B50 = 0;
  KeReleaseSpinLock(&qword_140EF7B48, v0);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    Next = v2[1].Next;
    v7 = Next;
    PageBadStatus = MmGetPageBadStatus(&v7);
    if ( PageBadStatus == -1073740023 )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v9 = 0x800000324C4E524BuLL;
      *((_QWORD *)&v9 + 1) = 0x800000002LL;
      v10 = Next;
      WheaLogInternalEvent(&Src, v5);
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
      _InterlockedDecrement(&dword_140EF7B60);
    }
  }
  return 0LL;
}
