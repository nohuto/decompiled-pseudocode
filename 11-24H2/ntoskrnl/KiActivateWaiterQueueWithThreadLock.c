/*
 * XREFs of KiActivateWaiterQueueWithThreadLock @ 0x1402D5900
 * Callers:
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     KiActivateWaiterKQueue @ 0x1402D5850 (KiActivateWaiterKQueue.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402D6CB0 (KiAttemptFastRemovePriQueue.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall KiActivateWaiterQueueWithThreadLock(__int64 a1, ULONG_PTR a2)
{
  volatile signed __int32 *v4; // rax
  _DWORD *v5; // rcx
  char v6; // al
  _QWORD *v7; // rsi
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  volatile LONG *v16; // rbx
  ULONG_PTR v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rbx
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax

  _m_prefetchw((const void *)a2);
  if ( (*(_BYTE *)a2 & 0x7F) == 0x15 )
  {
    v15 = (unsigned __int8)*(_DWORD *)(a1 + 540);
    *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
    v5 = (_DWORD *)(a2 + 40);
    v4 = (volatile signed __int32 *)(a2 + 536 + 4 * v15);
  }
  else
  {
    v4 = (volatile signed __int32 *)(a2 + 40);
    v5 = (_DWORD *)(a2 + 40);
  }
  _InterlockedDecrement(v4);
  if ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
    v6 = 0;
  else
    v6 = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v6 )
  {
    if ( (*(_BYTE *)a2 & 0x7F) == 0x15 )
    {
      if ( *(_QWORD *)(a2 + 8) != a2 + 8 )
      {
        if ( *(_DWORD *)(a2 + 4) )
        {
          v9 = KiAttemptFastRemovePriQueue(a2);
          v10 = (_QWORD *)v9;
          if ( v9 )
          {
            if ( !(unsigned __int8)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), a2, v9, 0) )
            {
              ++*(_DWORD *)(a2 + 4);
              v11 = a2 + 24;
              v12 = *(_QWORD *)(a2 + 24);
              if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
                goto LABEL_20;
              *v10 = v12;
              v10[1] = v11;
              *(_QWORD *)(v12 + 8) = v10;
              *(_QWORD *)v11 = v10;
            }
          }
        }
      }
    }
    else if ( *v5 < *(_DWORD *)(a2 + 44) )
    {
      v7 = *(_QWORD **)(a2 + 24);
      v8 = a2 + 24;
      if ( v7 != (_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 8) != a2 + 8 )
      {
        v13 = *v7;
        v14 = (_QWORD *)v7[1];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v14 != v7 )
LABEL_20:
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *v7 = 0LL;
        if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), a2, (__int64)v7) )
        {
          --*(_DWORD *)(a2 + 4);
        }
        else
        {
          v22 = *(_QWORD *)v8;
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
            goto LABEL_20;
          *v7 = v22;
          v7[1] = v8;
          *(_QWORD *)(v22 + 8) = v7;
          *(_QWORD *)v8 = v7;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  }
  else
  {
    v16 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
    ExAcquireSpinLockSharedAtDpcLevel(v16);
    v17 = *(_QWORD *)(a1 + 232);
    if ( !v17 || (KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232)), *(_QWORD *)(a1 + 232)) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v16);
      if ( v17 )
      {
        if ( (*(_BYTE *)v17 & 0x7F) == 0x15 )
        {
          if ( *(_QWORD *)(v17 + 8) != v17 + 8 )
          {
            if ( *(_DWORD *)(v17 + 4) )
            {
              v18 = KiAttemptFastRemovePriQueue(v17);
              v19 = (_QWORD *)v18;
              if ( v18 )
              {
                if ( !(unsigned __int8)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), v17, v18, 0) )
                {
                  ++*(_DWORD *)(v17 + 4);
                  v20 = v17 + 24;
                  v21 = *(_QWORD *)(v17 + 24);
                  if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
                    goto LABEL_20;
                  *v19 = v21;
                  v19[1] = v20;
                  *(_QWORD *)(v21 + 8) = v19;
                  *(_QWORD *)v20 = v19;
                }
              }
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        }
        else
        {
          KiActivateWaiterKQueue(v17);
        }
      }
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      ExReleaseSpinLockSharedFromDpcLevel(v16);
    }
  }
}
