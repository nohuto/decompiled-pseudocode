/*
 * XREFs of CmUnregisterMachineHiveLoadedNotification @ 0x1407D21F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpWorkItemRundown @ 0x1406F578C (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmUnregisterMachineHiveLoadedNotification(unsigned int *P)
{
  ULONG_PTR v1; // r8
  __int64 v3; // rcx
  unsigned __int64 *v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  struct _KTHREAD *v7; // rcx
  PVOID *v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rtt

  if ( P )
  {
    v1 = P[26];
    v3 = 184 * v1;
    if ( *((struct _KTHREAD **)P + 12) == KeGetCurrentThread() )
      KeBugCheckEx(0x51u, 0x28uLL, v1, 0LL, 0LL);
    v4 = (unsigned __int64 *)((char *)&unk_140E09930 + v3);
    v5 = (char *)KeAbPreAcquire((__int64)&unk_140E09930 + v3, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
    if ( v6 )
      v6[10] = 1;
    if ( *((_BYTE *)P + 109) )
    {
      v7 = *(struct _KTHREAD **)P;
      if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
        __fastfail(3u);
      *v8 = v7;
      v7->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v8;
      *((_BYTE *)P + 109) = 0;
    }
    _m_prefetchw(v4);
    v9 = *v4;
    v10 = *v4 - 16;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (v9 & 2) != 0 || (v11 = *v4, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v10, v9)) )
      ExfReleasePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    CmpWorkItemRundown((struct _EX_RUNDOWN_REF *)P + 2);
    ExFreePoolWithTag(P, 0);
  }
}
