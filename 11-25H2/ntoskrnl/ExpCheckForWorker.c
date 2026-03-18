/*
 * XREFs of ExpCheckForWorker @ 0x1403BD890
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  unsigned __int16 j; // si
  unsigned __int16 *v8; // r13
  __int64 v9; // rbp
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v14; // ecx
  volatile signed __int32 **v15; // rdx
  volatile signed __int32 *k; // r8

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( i = 0LL; ; i = v6 )
  {
    result = (_QWORD *)PsGetNextPartition(i);
    v6 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
      {
        v8 = 0LL;
        v9 = 0LL;
        if ( (_UNKNOWN *)KeNodeBlock[j] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * j) )
          v8 = (unsigned __int16 *)KeNodeBlock[j];
        while ( v9 < 64 )
        {
          v10 = 0LL;
          v11 = *(_QWORD *)(*(_QWORD *)(v6[2] + 8LL) + 8LL * *v8);
          v12 = *(_QWORD *)(v11 + v9);
          if ( (v12 & 1) == 0 )
            v10 = *(volatile signed __int32 **)(v11 + v9);
          if ( v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v12) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v12);
            }
            KiAcquireKobjectLockSafe(v10);
            v14 = 0;
            v15 = (volatile signed __int32 **)(v10 + 6);
            while ( v14 < 32 )
            {
              for ( k = *v15; k != &v10[4 * v14 + 6]; k = *(volatile signed __int32 **)k )
              {
                if ( (unsigned __int64)k >= BugCheckParameter3 && (unsigned __int64)k < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)k, BugCheckParameter3, BugCheckParameter4);
              }
              ++v14;
              v15 += 2;
            }
            _InterlockedAnd(v10, 0xFFFFFF7F);
            if ( KiIrqlFlags )
            {
              LOBYTE(v15) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
            }
            __writecr8(CurrentIrql);
          }
          v9 += 8LL;
        }
      }
    }
  }
  return result;
}
