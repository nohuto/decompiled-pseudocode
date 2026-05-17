/*
 * XREFs of EtwpGetNextRegistration @ 0x1800E63E0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpDisableTraceProviders @ 0x1800E6278 (EtwpDisableTraceProviders.c)
 *     EtwEnumerateProcessRegGuids @ 0x18015D300 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180044A70 (RtlTryAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // bp
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock);
  if ( a1 )
  {
    i = *(_QWORD *)(a1 + 8);
    v6 = a1;
    if ( i )
    {
      v8 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v6 )
          break;
        v6 = i;
      }
    }
  }
  else if ( (qword_1801D42C8 & 1) != 0 )
  {
    if ( qword_1801D42C8 == 1 )
      i = 0LL;
    else
      i = qword_1801D42C8 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    i = qword_1801D42C8;
  }
  while ( i )
  {
    v3 = i;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared((volatile signed __int64 *)(i + 72)) )
    {
      v4 = 1;
      break;
    }
    v9 = *(_QWORD ***)(i + 8);
    v10 = i;
    if ( v9 )
    {
      v11 = *v9;
      for ( i = *(_QWORD *)(i + 8); v11; v11 = (_QWORD *)*v11 )
        i = (unsigned __int64)v11;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v10 )
          break;
        v10 = i;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  if ( v4 )
    return v3;
  return v2;
}
