/*
 * XREFs of KiActivateWaiterKQueue @ 0x1402D5850
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 */

char __fastcall KiActivateWaiterKQueue(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  LODWORD(v1) = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)v1 < *(_DWORD *)(a1 + 44) )
  {
    v3 = *(_QWORD **)(a1 + 24);
    v4 = a1 + 24;
    if ( v3 != (_QWORD *)(a1 + 24) )
    {
      v1 = (_QWORD *)(a1 + 8);
      if ( (_QWORD *)*v1 != v1 )
      {
        v5 = *v3;
        v6 = (_QWORD *)v3[1];
        if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
LABEL_7:
          __fastfail(3u);
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        *v3 = 0LL;
        LOBYTE(v1) = KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)v3);
        if ( (_BYTE)v1 )
        {
          --*(_DWORD *)(a1 + 4);
        }
        else
        {
          v1 = *(_QWORD **)v4;
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            goto LABEL_7;
          *v3 = v1;
          v3[1] = v4;
          v1[1] = v3;
          *(_QWORD *)v4 = v3;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (char)v1;
}
