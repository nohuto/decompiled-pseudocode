/*
 * XREFs of MmSetAccessLogging @ 0x140683808
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B5B62C (PfTSetTracingPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 */

BOOLEAN __fastcall MmSetAccessLogging(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // rsi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  unsigned __int8 v8; // r14
  BOOLEAN result; // al
  int v10; // eax
  __int64 v11; // r9

  v3 = *a1;
  v6 = (volatile LONG *)(*a1 + 17536LL);
  v7 = ExAcquireSpinLockExclusive(v6);
  *(_DWORD *)(v3 + 17452) = a2;
  v8 = v7;
  *(_DWORD *)(v3 + 17456) = a3;
  if ( a2 )
  {
    result = MiReleaseSpinLockExclusive(v6, v7);
    if ( !*(_QWORD *)(v3 + 17464) )
      return KeInsertQueueDpc((PRKDPC)(v3 + 17472), 0LL, 0LL);
  }
  else
  {
    v10 = *(_DWORD *)(v3 + 17448);
    if ( v10 )
    {
      if ( v10 == 2 )
        *(_DWORD *)(v3 + 17448) = 3;
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v3 + 184) + 40LL)) <= 1 )
        __fastfail(0xEu);
      v11 = *(_QWORD *)(v3 + 184);
      *(_DWORD *)(v3 + 17448) = 1;
      ExQueueWorkItemToPartition(v3 + 17416, 1, 0xFFFFFFFF, v11);
    }
    return MiReleaseSpinLockExclusive(v6, v8);
  }
  return result;
}
