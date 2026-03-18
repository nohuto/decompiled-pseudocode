/*
 * XREFs of IopSetLockOperationProcess @ 0x140432070
 * Callers:
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r13
  char v4; // r12
  __int64 *v8; // rdi
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rax
  char v14; // bl
  _QWORD *i; // rcx
  unsigned int v16; // r14d
  __int64 v18; // r14
  int v19; // ebp
  __int64 *Pool2; // rax
  __int64 v21; // r14
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
  {
    v8 = *(__int64 **)(a1 + 208);
    if ( v8 )
    {
      if ( v8 == qword_1400140F0 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v19 = 0;
      Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
      v8 = Pool2;
      if ( !Pool2 )
        v19 = -1073741670;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
      {
        if ( Pool2 && Pool2 != qword_1400140F0 )
          ExFreePoolWithTag(Pool2, 0);
        v8 = *(__int64 **)(a1 + 208);
      }
      if ( v19 < 0 )
        return (unsigned int)v19;
    }
    v9 = (_QWORD *)v8[2];
    if ( v9 )
    {
LABEL_8:
      v3 = (_QWORD *)ExAllocatePool2(0x40uLL);
      goto LABEL_9;
    }
    v10 = (_QWORD *)ExAllocatePool2(0x40uLL);
    v9 = v10;
    if ( v10 )
    {
      if ( _InterlockedCompareExchange64(v8 + 2, (signed __int64)v10, 0LL) )
      {
        ExFreePoolWithTag(v10, 0);
        v21 = *(_QWORD *)(a1 + 208);
        if ( v21 )
          v9 = *(_QWORD **)(v21 + 16);
        else
          v9 = 0LL;
      }
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
  v18 = *(_QWORD *)(a1 + 208);
  if ( !v18 )
    return 3221225473LL;
  v9 = *(_QWORD **)(v18 + 16);
  if ( !v9 )
    return 3221225473LL;
LABEL_9:
  v11 = (volatile signed __int32 *)(a1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v11, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 184));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 184));
  }
  v13 = v9[2];
  v14 = *(_BYTE *)(a1 + 72);
  if ( v13 )
  {
    for ( i = (_QWORD *)v9[2]; i; i = (_QWORD *)*i )
    {
      if ( i[1] == a2 )
      {
        v4 = 1;
        goto LABEL_19;
      }
    }
  }
  if ( !a3 )
  {
    if ( !v3 )
    {
      v16 = -1073741670;
      goto LABEL_20;
    }
    *v3 = v13;
    v9[2] = v3;
    v3[1] = a2;
  }
LABEL_19:
  v16 = 0;
LABEL_20:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 && v3 )
    ExFreePoolWithTag(v3, 0);
  if ( !a3 )
    return v16;
  if ( !v14 || !v4 )
    return 3221225473LL;
  return 0LL;
}
