/*
 * XREFs of ExpCheckForWorker @ 0x140261AEC
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v15; // ecx
  volatile signed __int32 **v16; // rdx
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
          v11 = *v8;
          v12 = *(_QWORD *)(*(_QWORD *)(v6[2] + 8LL) + 8 * v11);
          v13 = *(_QWORD *)(v12 + v9);
          if ( (v13 & 1) == 0 )
            v10 = *(volatile signed __int32 **)(v12 + v9);
          if ( v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v11) = 2;
              LOBYTE(v13) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v13, v11);
            }
            KiAcquireKobjectLockSafe(v10);
            v15 = 0;
            v16 = (volatile signed __int32 **)(v10 + 6);
            while ( v15 < 32 )
            {
              for ( k = *v16; k != &v10[4 * v15 + 6]; k = *(volatile signed __int32 **)k )
              {
                if ( (unsigned __int64)k >= BugCheckParameter3 && (unsigned __int64)k < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)k, BugCheckParameter3, BugCheckParameter4);
              }
              ++v15;
              v16 += 2;
            }
            _InterlockedAnd(v10, 0xFFFFFF7F);
            if ( KiIrqlFlags )
            {
              LOBYTE(v16) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
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
