/*
 * XREFs of EtwpFindRegistration @ 0x18001E680
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlTryAcquireSRWLockShared @ 0x18001E810 (RtlTryAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x1800E11C0 (EtwpRegistrationCompare.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindRegistration(void *Buf1, unsigned __int16 a2)
{
  unsigned __int64 v4; // rbx
  _QWORD *i; // r14
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = Buf1;
  v13[1] = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v4 = EtwpRegistrationTable;
  if ( (qword_1801D2268 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable )
    {
LABEL_31:
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    v4 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  }
  i = 0LL;
  v6 = qword_1801D2268 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = memcmp(Buf1, (const void *)(v4 + 32), 0x10uLL);
      if ( v7 )
        break;
      if ( a2 > *(_WORD *)(v4 + 84) )
        goto LABEL_12;
      if ( a2 < *(_WORD *)(v4 + 84) )
        goto LABEL_5;
      v8 = *(_QWORD *)v4;
      i = (_QWORD *)v4;
      if ( v6 && v8 )
      {
        v4 ^= v8;
        goto LABEL_8;
      }
LABEL_7:
      v4 = v8;
LABEL_8:
      if ( !v4 )
        goto LABEL_9;
    }
    if ( v7 < 0 )
LABEL_12:
      v8 = *(_QWORD *)v4;
    else
LABEL_5:
      v8 = *(_QWORD *)(v4 + 8);
    if ( v6 && v8 )
    {
      v4 ^= v8;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_9:
  if ( !i )
    goto LABEL_31;
  while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(i + 9) )
  {
    v10 = (_QWORD **)i[1];
    v11 = i;
    if ( v10 )
    {
      v12 = *v10;
      for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
        i = v12;
    }
    else
    {
      for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*i == v11 )
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
