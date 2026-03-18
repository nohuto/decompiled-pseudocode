/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1403F9BB8
 * Callers:
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1404F53B0 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(
        volatile signed __int32 *SystemArgument1,
        _QWORD *a2,
        signed int *a3,
        __int64 a4,
        char a5,
        char a6)
{
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  int v12; // esi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  char v18; // cl
  bool v19; // zf
  bool v20; // si
  signed int v21; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v24; // [rsp+70h] [rbp+8h]

  v8 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1);
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
    v16 = (__int64)v14;
    v14 = v15;
    v17 = *(_QWORD **)(v16 + 8);
    if ( v15[1] != v16 || *v17 != v16 )
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    v18 = *(_BYTE *)(v16 + 16);
    switch ( v18 )
    {
      case 1:
        v19 = (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), a2) == 0;
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
        *(_BYTE *)(v16 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
        v19 = (*((_DWORD *)v8 + 1))-- == 1;
        if ( v19 )
          goto LABEL_12;
        goto LABEL_24;
      case 4:
        *(_BYTE *)(v16 + 17) = 5;
        *((_DWORD *)v8 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), (PVOID)v8, (PVOID)v16);
        goto LABEL_24;
      default:
        v19 = (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL) == 0;
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
  if ( a2 )
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
  KiExitDispatcher(CurrentPrcb, 0LL, v10, v21, CurrentIrql);
  return v24;
}
