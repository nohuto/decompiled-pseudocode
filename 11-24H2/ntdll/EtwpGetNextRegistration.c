/*
 * XREFs of EtwpGetNextRegistration @ 0x18008BFF0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpDisableTraceProviders @ 0x18008BE84 (EtwpDisableTraceProviders.c)
 *     EtwEnumerateProcessRegGuids @ 0x18015BD50 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18001E810 (RtlTryAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

unsigned __int64 __fastcall EtwpGetNextRegistration(
        unsigned __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  char v6; // bp
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v10; // rcx
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock, a2, a3);
  if ( a1 )
  {
    i = *(_QWORD *)(a1 + 8);
    v8 = a1;
    if ( i )
    {
      v10 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v8 )
          break;
        v8 = i;
      }
    }
  }
  else if ( (qword_1801D2268 & 1) != 0 )
  {
    if ( qword_1801D2268 == 1 )
      i = 0LL;
    else
      i = qword_1801D2268 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    i = qword_1801D2268;
  }
  while ( i )
  {
    v5 = i;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared((volatile signed __int64 *)(i + 72)) )
    {
      v6 = 1;
      break;
    }
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    if ( v11 )
    {
      v13 = *v11;
      for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
        i = (unsigned __int64)v13;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v12 )
          break;
        v12 = i;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  if ( v6 )
    return v5;
  return v4;
}
