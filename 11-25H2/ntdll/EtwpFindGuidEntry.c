/*
 * XREFs of EtwpFindGuidEntry @ 0x180045DA0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180045BB0 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x1801100D4 (EtwpReferenceUmGuidEntry.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1)
{
  unsigned __int64 Root; // rbx
  _QWORD *i; // r14
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( !EtwpGuidEntryTable.Root )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
  }
  i = 0LL;
  v4 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v5 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
      if ( v5 < 0 )
        break;
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
LABEL_6:
        if ( v4 && v6 )
          goto LABEL_13;
        goto LABEL_7;
      }
      v6 = *(_QWORD *)Root;
      i = (_QWORD *)Root;
      if ( v4 && v6 )
      {
LABEL_13:
        Root ^= v6;
        goto LABEL_8;
      }
LABEL_7:
      Root = v6;
LABEL_8:
      if ( !Root )
        goto LABEL_9;
    }
    v6 = *(_QWORD *)Root;
    goto LABEL_6;
  }
LABEL_9:
  if ( !i )
    goto LABEL_10;
  while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(i) )
  {
    v9 = (_QWORD **)i[1];
    if ( v9 )
    {
      v11 = *v9;
      for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
        i = v11;
    }
    else
    {
      for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*i == v8 )
          break;
        v8 = i;
      }
    }
    if ( i )
    {
      v10 = *Buf1 - i[3];
      if ( *Buf1 == i[3] )
        v10 = Buf1[1] - i[4];
      if ( !v10 )
        continue;
    }
    goto LABEL_10;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
