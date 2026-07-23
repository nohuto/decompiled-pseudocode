/*
 * XREFs of EmpParseInfDatabase @ 0x140C187C4
 * Callers:
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpParseCallbacks @ 0x140C1840C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C18644 (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140C192EC (EmpParseRules.c)
 *     EmpParseStrings @ 0x140C19670 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140C19B08 (EmpParseTargetRules.c)
 *     CmpFreeLineList @ 0x140C1A180 (CmpFreeLineList.c)
 *     CmpParseInfBuffer @ 0x140C1A5C4 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
  __int64 v7; // rax
  void **v8; // rdi
  int v9; // ebx
  void *v10; // rsi
  void *v11; // rbp
  void *v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = (char *)KeAbPreAcquire((__int64)&EmpParseLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock, v4, (__int64)&EmpParseLock);
  if ( v6 )
    v6[10] = 1;
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
