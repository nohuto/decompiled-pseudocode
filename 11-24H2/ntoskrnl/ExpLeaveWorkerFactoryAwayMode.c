/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1403BEA00
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x1403BF0B0 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall ExpLeaveWorkerFactoryAwayMode(_QWORD *Object)
{
  LONG_PTR result; // rax
  _DWORD *v2; // rbx
  char *v3; // rdi
  char v4; // r14
  volatile signed __int32 *v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  char **v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (LONG_PTR)&retaddr;
  v2 = Object;
  if ( (Object[51] & 0x400) != 0 )
  {
    v3 = (char *)(Object + 77);
    v4 = 0;
    v5 = *(volatile signed __int32 **)(Object[2] + 8LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Object) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(Object, 2LL);
    }
    KiAcquireKobjectLockSafe(v5);
    if ( v3[17] == 4 )
    {
      v8 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v9 = (char **)*((_QWORD *)v3 + 1), *v9 != v3) )
        __fastfail(3u);
      *v9 = (char *)v8;
      v4 = 1;
      *(_QWORD *)(v8 + 8) = v9;
      v3[17] = 5;
    }
    _InterlockedAnd(v5, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
      v2[102] &= ~0x400u;
    }
  }
  v2[102] &= ~0x200u;
  return result;
}
