/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1402E0738
 * Callers:
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1404F5070 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     NtSetEventEx @ 0x140973E70 (NtSetEventEx.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        signed int *a3,
        __int64 a4,
        char a5,
        char a6)
{
  __int64 v7; // r12
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  int v12; // esi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  char v18; // cl
  bool v19; // zf
  bool v20; // si
  signed int v21; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v24; // [rsp+70h] [rbp+8h]

  v7 = a2;
  v8 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v8);
  v12 = 0;
  v24 = *((_DWORD *)v8 + 1);
  v13 = v8 + 2;
  v14 = (_QWORD *)*((_QWORD *)v8 + 1);
  *((_DWORD *)v8 + 1) = 1;
  while ( v14 != v13 )
  {
    v15 = (_QWORD *)*v14;
    v16 = v14;
    v14 = v15;
    v17 = (_QWORD *)v16[1];
    if ( (_QWORD *)v15[1] != v16 || (_QWORD *)*v17 != v16 )
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    v18 = *((_BYTE *)v16 + 16);
    switch ( v18 )
    {
      case 1:
        v19 = (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, *((unsigned __int16 *)v16 + 9), v7) == 0;
        v13 = v8 + 2;
        if ( !v19 )
        {
          v19 = (*((_DWORD *)v8 + 1))-- == 1;
          if ( v19 )
          {
            ++v12;
            goto LABEL_12;
          }
LABEL_24:
          v13 = v8 + 2;
        }
        break;
      case 2:
        *((_BYTE *)v16 + 17) = 5;
        KiInsertQueueInternal(v16[3], v16);
        v19 = (*((_DWORD *)v8 + 1))-- == 1;
        if ( v19 )
          goto LABEL_12;
        goto LABEL_24;
      case 4:
        *((_BYTE *)v16 + 17) = 5;
        *((_DWORD *)v8 + 1) = 0;
        KeInsertQueueDpc((PRKDPC)v16[3], (PVOID)v8, v16);
        goto LABEL_24;
      default:
        v19 = (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL) == 0;
        v13 = v8 + 2;
        if ( !v19 )
        {
          --v12;
          goto LABEL_24;
        }
        break;
    }
  }
LABEL_12:
  if ( v7 )
    v20 = v12 > 0;
  else
    v20 = 0;
  _InterlockedAnd(v8, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    if ( *a3 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread((ULONG_PTR)&Next[-27], a4);
    }
    goto LABEL_16;
  }
  v21 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
  if ( a3 )
  {
    if ( !*a3 )
      goto LABEL_16;
    if ( *a3 > v21 )
      v21 = *a3;
  }
  if ( !v20 )
  {
LABEL_16:
    v21 = a5;
    v10 = 1;
  }
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, v10, v21, CurrentIrql);
  return v24;
}
