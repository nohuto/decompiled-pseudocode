/*
 * XREFs of EmpParseInfDatabase @ 0x140C05724
 * Callers:
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     EmpParseCallbacks @ 0x140C0536C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140C0624C (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C065D0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140C06A68 (EmpParseTargetRules.c)
 *     CmpFreeLineList @ 0x140C070E0 (CmpFreeLineList.c)
 *     CmpParseInfBuffer @ 0x140C07524 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rbx
  __int64 v7; // rax
  void **v8; // rdi
  int v9; // ebx
  void *v10; // rsi
  void *v11; // rbp
  void *v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = KeAbPreAcquire((__int64)&EmpParseLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock, v4, (__int64)&EmpParseLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v14 = 0;
  v7 = CmpParseInfBuffer(a1, a2, &v14);
  v8 = (void **)v7;
  if ( v7 )
  {
    v9 = EmpParseEntryTypes(v7);
    if ( v9 >= 0 )
    {
      v9 = EmpParseCallbacks((__int64)v8);
      if ( v9 >= 0 )
      {
        v9 = EmpParseRules(v8);
        if ( v9 >= 0 )
        {
          v9 = EmpParseStrings(v8);
          if ( v9 >= 0 )
            v9 = EmpParseTargetRules(v8);
        }
      }
    }
    v10 = *v8;
    if ( *v8 )
    {
      do
      {
        v11 = *(void **)v10;
        if ( *((_BYTE *)v10 + 24) )
        {
          v12 = (void *)*((_QWORD *)v10 + 1);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
        }
        CmpFreeLineList(*((PVOID *)v10 + 2));
        ExFreePoolWithTag(v10, 0);
        v10 = v11;
      }
      while ( v11 );
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741816;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v9;
}
