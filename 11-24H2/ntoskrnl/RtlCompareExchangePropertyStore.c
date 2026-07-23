/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x1405E7220
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x1404FC020 (bsearch.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7774 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x1405E782C (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  PULONG_PTR v11; // rdx
  unsigned __int8 v12; // bp
  char *v13; // rax
  char *Pool2; // rbx
  int v15; // edi
  unsigned int v16; // esi
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  void *v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  NTSTATUS v23; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    v9 = RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    v11 = (PULONG_PTR)RtlpPropStoreEntries;
    v12 = v9;
    if ( RtlpPropStoreEntries )
    {
      v13 = (char *)bsearch(
                      i,
                      RtlpPropStoreEntries,
                      (unsigned int)RtlpPropStoreEntriesActiveCount,
                      0x18uLL,
                      RtlpComparePropertyEntry);
      if ( v13 )
        break;
    }
    if ( v12 > 2u )
    {
      v23 = -1073741670;
      goto LABEL_30;
    }
    Pool2 = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries && (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
      goto LABEL_16;
    v15 = RtlpPropStoreEntriesTotalCount;
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v16 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_28;
    }
    else
    {
      v16 = 16;
    }
    LOBYTE(v11) = v12;
    RtlpReleasePropStoreLockExclusive(&RtlpPropStoreLock, v11, v10);
    Pool2 = (char *)ExAllocatePool2(0x40uLL, 24LL * v16, 0x70725052u);
    if ( !Pool2 )
    {
LABEL_28:
      v23 = -1073741801;
      goto LABEL_30;
    }
    v17 = RtlpAcquirePropStoreLockExclusive(&RtlpPropStoreLock);
    v12 = v17;
    if ( v15 == RtlpPropStoreEntriesTotalCount )
    {
      v19 = RtlpPropStoreEntries;
      if ( RtlpPropStoreEntries )
      {
        memmove(Pool2, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = v19;
      }
      i = (_OWORD *)Key;
      RtlpPropStoreEntries = Pool2;
      RtlpPropStoreEntriesTotalCount = v16;
LABEL_16:
      v4 = 1;
      v20 = 3LL * (unsigned int)RtlpPropStoreEntriesActiveCount;
      v11 = (PULONG_PTR)(unsigned int)(RtlpPropStoreEntriesActiveCount + 1);
      LODWORD(RtlpPropStoreEntriesActiveCount) = RtlpPropStoreEntriesActiveCount + 1;
      v13 = &Pool2[8 * v20];
      if ( Exchange )
        v21 = *Exchange;
      else
        v21 = 0LL;
      *((_QWORD *)v13 + 2) = v21;
      *(_OWORD *)v13 = *i;
      break;
    }
    LOBYTE(v18) = v17;
    RtlpReleasePropStoreLockExclusive(&RtlpPropStoreLock, v18, v10);
    ExFreePoolWithTag(Pool2, 0);
  }
  v22 = *((_QWORD *)v13 + 2);
  if ( !Exchange || v22 == *Exchange )
  {
    v11 = Comperand;
    *((_QWORD *)v13 + 2) = Comperand;
  }
  if ( Context )
    *Context = v22;
  if ( v4 )
  {
    qsort(RtlpPropStoreEntries, (unsigned int)RtlpPropStoreEntriesActiveCount, 0x18uLL, RtlpComparePropertyEntry);
    v23 = 0;
  }
  else
  {
    v23 = 0x40000000;
  }
LABEL_30:
  LOBYTE(v11) = v12;
  RtlpReleasePropStoreLockExclusive(&RtlpPropStoreLock, v11, v10);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v23;
}
