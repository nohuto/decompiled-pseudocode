/*
 * XREFs of EtwpFindRegistration @ 0x1800448E0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180044A70 (RtlTryAcquireSRWLockShared.c)
 *     EtwpRegistrationCompare @ 0x1800DE560 (EtwpRegistrationCompare.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(void *Buf1, unsigned __int16 a2)
{
  unsigned __int64 Root; // rbx
  _RTL_SRWLOCK *i; // r14
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  _RTL_SRWLOCK **Value; // rax
  _RTL_SRWLOCK *v11; // rcx
  _RTL_SRWLOCK *v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = Buf1;
  v13[1] = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable.Root )
    {
LABEL_31:
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
  }
  i = 0LL;
  v6 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v7 = memcmp(Buf1, (const void *)(Root + 32), 0x10uLL);
      if ( v7 )
        break;
      if ( a2 > *(_WORD *)(Root + 84) )
        goto LABEL_12;
      if ( a2 < *(_WORD *)(Root + 84) )
        goto LABEL_5;
      v8 = *(_QWORD *)Root;
      i = (_RTL_SRWLOCK *)Root;
      if ( v6 && v8 )
      {
        Root ^= v8;
        goto LABEL_8;
      }
LABEL_7:
      Root = v8;
LABEL_8:
      if ( !Root )
        goto LABEL_9;
    }
    if ( v7 < 0 )
LABEL_12:
      v8 = *(_QWORD *)Root;
    else
LABEL_5:
      v8 = *(_QWORD *)(Root + 8);
    if ( v6 && v8 )
    {
      Root ^= v8;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_9:
  if ( !i )
    goto LABEL_31;
  while ( !RtlTryAcquireSRWLockShared(i + 9) )
  {
    Value = (_RTL_SRWLOCK **)i[1].Value;
    v11 = i;
    if ( Value )
    {
      v12 = *Value;
      for ( i = (_RTL_SRWLOCK *)i[1].Value; v12; v12 = (_RTL_SRWLOCK *)v12->Value )
        i = v12;
    }
    else
    {
      for ( i = (_RTL_SRWLOCK *)(i[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
            i;
            i = (_RTL_SRWLOCK *)(i[2].Value & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_RTL_SRWLOCK *)i->Value == v11 )
          break;
        v11 = i;
      }
    }
    if ( !i || (unsigned int)EtwpRegistrationCompare(v13, i) )
      goto LABEL_31;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
