/*
 * XREFs of StorRefillShadowQueue @ 0x14012796C
 * Callers:
 *     NvmeControllerRefillShadowQueueRoutine @ 0x1400F3A70 (NvmeControllerRefillShadowQueueRoutine.c)
 *     NvmeNamespaceSystemThread @ 0x14011D840 (NvmeNamespaceSystemThread.c)
 *     NvmeNamespaceSystemThread2 @ 0x14011D980 (NvmeNamespaceSystemThread2.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     StorPopRequestFromDeviceQueue @ 0x1401275E0 (StorPopRequestFromDeviceQueue.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 */

__int64 __fastcall StorRefillShadowQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // r15
  ULONG_PTR v6; // rbx
  signed __int64 *v8; // rsi
  KIRQL v9; // r14
  signed __int64 v10; // rbp
  __int64 v11; // r8
  signed __int32 v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // rsi
  _DWORD *i; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // edx
  signed __int64 *v19; // r14
  PSLIST_ENTRY v20; // rax
  struct _SLIST_ENTRY *Next; // rcx
  KIRQL v22; // bp
  signed __int64 v23; // rsi
  __int64 v24; // r8
  signed __int32 v25; // r9d
  __int64 v26; // rdx
  KIRQL v27; // cl
  char v28; // r8
  unsigned int v29; // esi
  unsigned int v30; // edx
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // r8
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rdx
  signed __int32 v38[8]; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v41; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 64);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 68), 1, 0) )
    return 3LL;
  v8 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v6 + 40), 0LL);
  v9 = KfRaiseIrql(2u);
  if ( v8 )
  {
    while ( 2 )
    {
      v10 = *v8;
      do
      {
        v11 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v3 + 64) + 48LL);
        v12 = (unsigned int)(v11 + 1) < *(_DWORD *)(a1 + 4) ? v11 + 1 : 0;
        v13 = *(_QWORD *)(a1 + 8 * v3 + 64);
        if ( v12 == *(_DWORD *)(v13 + 52) )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v13, 2, 1);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v8, 0LL);
          KeLowerIrql(v9);
          goto LABEL_38;
        }
      }
      while ( (_DWORD)v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 48), v12, v11) );
      while ( _InterlockedCompareExchange64(
                (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v3 + 64) + 56LL) + 8 * v11),
                (signed __int64)(v8 - 16),
                0LL) )
        ;
      v8 = (signed __int64 *)v10;
      if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
      {
        _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v10, 0LL);
        v27 = v9;
LABEL_28:
        _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
        KeLowerIrql(v27);
        return 4LL;
      }
      if ( v10 )
        continue;
      break;
    }
  }
  KeLowerIrql(v9);
  v14 = *(_DWORD *)(v6 + 8);
  v15 = 16LL * v14;
  if ( ExQueryDepthSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32))) )
  {
    for ( i = (_DWORD *)(v6 + 12); ; i = v41 )
    {
      v17 = *(_DWORD *)(v6 + 4);
      v41 = i;
      if ( v17 == v14 )
      {
        v18 = (unsigned int)(v17 + 1) < *i ? v17 + 1 : 0;
        if ( v18 == v14 )
          KeBugCheckEx(0x176u, 1uLL, v6, *(_QWORD *)(v6 + 24), 0LL);
        _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4), v18, v17);
      }
      _InterlockedOr(v38, 0);
      while ( *(_DWORD *)(v6 + 64) )
        ;
      _InterlockedOr(v38, 0);
      v19 = 0LL;
      v20 = ExpInterlockedFlushSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32)));
      if ( v20 )
      {
        do
        {
          Next = v20->Next;
          v20->Next = (_SLIST_ENTRY *)v19;
          v19 = (signed __int64 *)v20;
          v20 = Next;
        }
        while ( Next );
      }
      v22 = KfRaiseIrql(2u);
      if ( v19 )
      {
        while ( 2 )
        {
          v23 = *v19;
          do
          {
            v24 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v5 + 64) + 48LL);
            v25 = (unsigned int)(v24 + 1) < *(_DWORD *)(a1 + 4) ? v24 + 1 : 0;
            v26 = *(_QWORD *)(a1 + 8 * v5 + 64);
            if ( v25 == *(_DWORD *)(v26 + 52) )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)v26, 2, 1);
              _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v19, 0LL);
              goto LABEL_31;
            }
          }
          while ( (_DWORD)v24 != _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 48), v25, v24) );
          while ( _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v5 + 64) + 56LL) + 8 * v24),
                    (signed __int64)(v19 - 16),
                    0LL) )
            ;
          v19 = (signed __int64 *)v23;
          if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
          {
            _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v23, 0LL);
            v27 = v22;
            goto LABEL_28;
          }
          if ( v23 )
            continue;
          break;
        }
      }
LABEL_31:
      KeLowerIrql(v22);
      *(_DWORD *)(v6 + 8) = v14 + 1 < *v41 ? v14 + 1 : 0;
      if ( *(_QWORD *)(v6 + 40) )
        break;
      v14 = *(_DWORD *)(v6 + 8);
      v15 = 16LL * v14;
      if ( !ExQueryDepthSList((PSLIST_HEADER)(v15 + *(_QWORD *)(v6 + 32))) )
        goto LABEL_36;
    }
    LODWORD(v3) = a2;
LABEL_38:
    v28 = 0;
  }
  else
  {
LABEL_36:
    LODWORD(v3) = a2;
    v28 = 1;
  }
  _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
  v29 = *(_DWORD *)(v6 + 48);
  v30 = *(_DWORD *)(v6 + 52);
  if ( v29 == v30 )
  {
    v31 = 0;
  }
  else if ( v29 <= v30 )
  {
    v32 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 20LL) )
      v33 = *(_QWORD *)(v32 + 1024);
    else
      v33 = *(_QWORD *)(v32 + 256);
    v31 = *(_DWORD *)(v33 + 4) - v30 + v29;
  }
  else
  {
    v31 = v29 - v30;
  }
  if ( v28 )
  {
    if ( *(_DWORD *)v6 == 2 )
    {
      if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v6 + 4)
        && !ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v6 + 32) + 16LL * *(unsigned int *)(v6 + 8)))
        && v31 <= *(_DWORD *)(*(_QWORD *)(v6 + 16) + 12LL) )
      {
        *(_BYTE *)(v6 + 72) = 1;
        _InterlockedOr(v38, 0);
        _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 2);
      }
      return 2LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( a3 && v31 )
    {
      v34 = *(_BYTE *)(a1 + 20);
      v35 = v34 ? *(_QWORD *)(v6 + 24) : *(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL);
      v36 = (*(_BYTE *)(v35 + 136) & 2) != 0
          ? 192 * v5
          : 192LL * *(unsigned __int16 *)(*(_QWORD *)(v35 + 872) + 2 * v5) - 192;
      v37 = *(_QWORD *)(v35 + 728) + v36;
      if ( *(_WORD *)(v37 + 142) == *(_WORD *)(v37 + 140) )
      {
        if ( v34 )
        {
          NvmeControllerProcessPendingCommand(v35, v3, 0, 0, 0);
        }
        else if ( FeatureFixFUAForReadIoPerf && (*(_BYTE *)(a1 + 21) & 1) != 0 )
        {
          NvmeProcessPendingLowPriorityIo(*(_QWORD **)(v6 + 24), v37, 0);
        }
        else
        {
          NvmeProcessPendingIo(v35, (struct _SLIST_ENTRY *)v37, v3);
        }
      }
    }
    return 1LL;
  }
}
