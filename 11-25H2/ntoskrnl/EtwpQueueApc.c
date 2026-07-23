/*
 * XREFs of EtwpQueueApc @ 0x1404309F0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140309B20 (EtwpStackTraceDispatcher.c)
 *     EtwpApcPoolDpc @ 0x140430850 (EtwpApcPoolDpc.c)
 *     EtwpQueueStackWalkApc @ 0x140430910 (EtwpQueueStackWalkApc.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CEB00 (EtwpContextRegisterTracingDispatcher.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeTryToInsertQueueApc @ 0x1404CD804 (KeTryToInsertQueueApc.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueApc(
        unsigned int **a1,
        struct _KTHREAD *a2,
        unsigned __int8 a3,
        unsigned int *a4,
        _SLIST_ENTRY *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v12; // esi
  int MiscFlags; // eax
  __int64 v14; // rcx
  signed __int64 *v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  PSLIST_ENTRY v19; // r14
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v21; // rdi
  __int64 v22; // rcx
  char inserted; // al
  __int32 v24; // ecx
  __int64 v25; // rcx
  signed __int64 *v26; // r8
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  unsigned int Number; // edx

  v12 = -1073741823;
  if ( a2 != KeGetCurrentThread()
    || a2->Process->FreezeCount + ((*(_DWORD *)&a2->Process->0 >> 3) & 1)
    || a2->SuspendCount )
  {
    return 3221225473LL;
  }
  if ( a2 == KeGetCurrentPrcb()->IdleThread )
    return 3221225485LL;
  MiscFlags = a2->MiscFlags;
  if ( (MiscFlags & 0x400) != 0 )
    return 3221225485LL;
  if ( (MiscFlags & 0x4000) == 0 )
    return 3221225473LL;
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 448LL) + 8LL * **a1);
  v15 = (signed __int64 *)(*(_QWORD *)v14 + *(_DWORD *)(v14 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v14 + 20)));
  _m_prefetchw(v15);
  v16 = *v15;
  if ( (*v15 & 1) != 0 )
    return v12;
  while ( 1 )
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64(v15, v16 + 2, v16);
    if ( v17 == v16 )
      break;
    if ( (v16 & 1) != 0 )
      return 3221225473LL;
  }
  v19 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 2);
  if ( !v19 )
  {
    if ( a3 > 2u )
    {
LABEL_44:
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 448LL) + 8LL * **a1),
        1u);
      return v12;
    }
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)a1 + 41) > *((_DWORD *)a1 + 43)
      || (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x48uLL), (v21 = Pool2) == 0LL) )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 41);
      goto LABEL_44;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 1, Pool2 + 6);
    v21[8].Next = (_SLIST_ENTRY *)a1;
    v19 = v21 + 7;
  }
  if ( !v19 )
    goto LABEL_44;
  if ( !(*a1)[80] )
  {
LABEL_43:
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, v19);
    goto LABEL_44;
  }
  v19[2].Next = a5;
  *((_QWORD *)&v19[1].Next + 1) = a4;
  *((_QWORD *)&v19[-5].Next + 1) = EtwpCancelApcThunk;
  v19[-5].Next = (_SLIST_ENTRY *)EtwpApcPoolThunk;
  v19[-4].Next = (_SLIST_ENTRY *)EtwpApcPoolThunk;
  v22 = (__int64)&v19[-7];
  LOWORD(v19[-7].Next) = 18;
  BYTE2(v19[-7].Next) = 88;
  LOWORD(v19[-2].Next) = 0;
  *((_QWORD *)&v19[-7].Next + 1) = a2;
  *((_QWORD *)&v19[-4].Next + 1) = a6;
  BYTE2(v19[-2].Next) = 0;
  if ( a3 <= 2u )
    inserted = KeInsertQueueApc(v22, (__int64)a7, (__int64)a8, 0);
  else
    inserted = KeTryToInsertQueueApc(v22, a7, a8);
  if ( (*a1)[80] )
  {
    if ( !inserted )
    {
      if ( a3 > 2u )
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)a1 + 40, 1u) )
        {
          v12 = -1073740024;
        }
        else
        {
          v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 448LL) + 8LL * **a1);
          v26 = (signed __int64 *)(*(_QWORD *)v25
                                 + *(_DWORD *)(v25 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v25 + 20)));
          _m_prefetchw(v26);
          v27 = *v26;
          if ( (*v26 & 1) == 0 )
          {
            while ( 1 )
            {
              v28 = v27;
              v27 = _InterlockedCompareExchange64(v26, v27 + 2, v27);
              if ( v28 == v27 )
                break;
              if ( (v27 & 1) != 0 )
                goto LABEL_43;
            }
            a1[9] = a4;
            a1[10] = (unsigned int *)a5;
            a1[6] = a6;
            a1[11] = (unsigned int *)a2;
            a1[7] = a7;
            a1[8] = a8;
            Number = KeGetCurrentPrcb()->Number;
            if ( !a1[19] )
              *((_WORD *)a1 + 49) = Number + 2048;
            if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)(a1 + 12), (__int64)a1, 0LL, 0LL, 0) )
            {
              v12 = 0;
            }
            else
            {
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 448LL) + 8LL * **a1),
                1u);
              v12 = -1073741670;
            }
          }
        }
      }
      goto LABEL_43;
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 44);
    v24 = *((_DWORD *)a1 + 44);
    if ( v24 > *((_DWORD *)a1 + 45) )
      _InterlockedExchange((volatile __int32 *)a1 + 45, v24);
  }
  else if ( !inserted || KeRemoveQueueApc((__int64)&v19[-7]) )
  {
    goto LABEL_43;
  }
  return 0LL;
}
