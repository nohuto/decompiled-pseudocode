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

unsigned __int64 __fastcall EtwpGetNextRegistration(_RTL_SRWLOCK *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // bp
  unsigned __int64 Value; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
  {
    Value = a1[1].Value;
    v6 = (unsigned __int64)a1;
    if ( Value )
    {
      v8 = *(_QWORD **)Value;
      if ( *(_QWORD *)Value )
      {
        do
        {
          Value = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( Value = a1[2].Value & 0xFFFFFFFFFFFFFFFCuLL; Value; Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)Value == v6 )
          break;
        v6 = Value;
      }
    }
  }
  else if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Min == (_RTL_BALANCED_NODE *)1 )
      Value = 0LL;
    else
      Value = (unsigned __int64)EtwpRegistrationTable.Min ^ ((unsigned __int64)&EtwpRegistrationTable.Root + 1);
  }
  else
  {
    Value = (unsigned __int64)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v3 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 72)) )
    {
      v4 = 1;
      break;
    }
    v9 = *(_QWORD ***)(Value + 8);
    v10 = Value;
    if ( v9 )
    {
      v11 = *v9;
      for ( Value = *(_QWORD *)(Value + 8); v11; v11 = (_QWORD *)*v11 )
        Value = (unsigned __int64)v11;
    }
    else
    {
      for ( Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            Value;
            Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)Value == v10 )
          break;
        v10 = Value;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  if ( v4 )
    return v3;
  return v2;
}
