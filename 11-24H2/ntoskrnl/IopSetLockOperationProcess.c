/*
 * XREFs of IopSetLockOperationProcess @ 0x14041DE90
 * Callers:
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r13
  char v5; // r12
  char v6; // si
  __int64 *v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rax
  char v15; // di
  _QWORD *i; // rcx
  unsigned int v17; // r14d
  __int64 v19; // r14
  int v20; // ebp
  __int64 *Pool2; // rax
  __int64 v22; // r14
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = 0;
  v6 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !(_BYTE)a3 )
  {
    v9 = *(__int64 **)(a1 + 208);
    if ( v9 )
    {
      if ( v9 == &qword_1400145A0 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v20 = 0;
      Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 0x60uLL, 0x45466F49u);
      v9 = Pool2;
      if ( !Pool2 )
        v20 = -1073741670;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
      {
        if ( Pool2 && Pool2 != &qword_1400145A0 )
          ExFreePoolWithTag(Pool2, 0);
        v9 = *(__int64 **)(a1 + 208);
      }
      if ( v20 < 0 )
        return (unsigned int)v20;
    }
    v10 = (_QWORD *)v9[2];
    if ( v10 )
    {
LABEL_8:
      v4 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x10uLL, 0x20206F49u);
      goto LABEL_9;
    }
    v11 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x45466F49u);
    v10 = v11;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64(v9 + 2, (signed __int64)v11, 0LL) )
      {
        ExFreePoolWithTag(v11, 0);
        v22 = *(_QWORD *)(a1 + 208);
        if ( v22 )
          v10 = *(_QWORD **)(v22 + 16);
        else
          v10 = 0LL;
      }
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
  v19 = *(_QWORD *)(a1 + 208);
  if ( !v19 )
    return 3221225473LL;
  v10 = *(_QWORD **)(v19 + 16);
  if ( !v10 )
    return 3221225473LL;
LABEL_9:
  v12 = (volatile signed __int32 *)(a1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v12, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 184), a2, a3, a4);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 184));
  }
  v14 = v10[2];
  v15 = *(_BYTE *)(a1 + 72);
  if ( v14 )
  {
    for ( i = (_QWORD *)v10[2]; i; i = (_QWORD *)*i )
    {
      if ( i[1] == a2 )
      {
        v5 = 1;
        goto LABEL_19;
      }
    }
  }
  if ( !v6 )
  {
    if ( !v4 )
    {
      v17 = -1073741670;
      goto LABEL_20;
    }
    *v4 = v14;
    v10[2] = v4;
    v4[1] = a2;
  }
LABEL_19:
  v17 = 0;
LABEL_20:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v12, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v5 && v4 )
    ExFreePoolWithTag(v4, 0);
  if ( !v6 )
    return v17;
  if ( !v15 || !v5 )
    return 3221225473LL;
  return 0LL;
}
