/*
 * XREFs of MiCheckLogPinDriverAddresses @ 0x1402D2718
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void MiCheckLogPinDriverAddresses()
{
  _DWORD *v0; // rcx
  int v1; // r9d
  unsigned __int64 v2; // r10
  bool i; // zf
  int v4; // edx
  bool v5; // zf
  bool v6; // al
  unsigned int j; // r8d
  unsigned int k; // r9d
  unsigned int m; // r10d
  __int64 v10; // rcx

  if ( !*(_QWORD *)&qword_140E37518 )
    return;
  if ( !dword_140EF4A80 )
    goto LABEL_25;
  if ( (unsigned int)dword_140EF4A80 <= 1 )
  {
    if ( dword_140EF4A80 == 1 )
    {
      v6 = !_bittest((const signed __int32 *)qword_140EF4A88, 0);
      goto LABEL_11;
    }
LABEL_25:
    if ( !_InterlockedCompareExchange16(&word_140EF4BF0, 1, 0) )
    {
      WorkItem.Parameter = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiLogPinDriverAddressesWorker;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
    return;
  }
  v0 = (_DWORD *)qword_140EF4A88;
  v1 = *(_DWORD *)qword_140EF4A88;
  v2 = qword_140EF4A88 + 4 * ((unsigned __int64)(unsigned int)(dword_140EF4A80 - 1) >> 5);
  if ( qword_140EF4A88 != v2 )
  {
    for ( i = v1 == 0; i; i = v4 == 0 )
    {
      v4 = *++v0;
      if ( v0 == (_DWORD *)v2 )
      {
        v5 = (v4 & (0xFFFFFFFF >> ~(dword_140EF4A80 - 1))) == 0;
        goto LABEL_10;
      }
    }
    goto LABEL_25;
  }
  v5 = (v1 & (0xFFFFFFFF >> (32 - dword_140EF4A80))) == 0;
LABEL_10:
  v6 = v5;
LABEL_11:
  if ( !v6 )
    goto LABEL_25;
  for ( j = 0; j < 2; ++j )
  {
    for ( k = 0; k < 2; ++k )
    {
      for ( m = 0; m < 2; ++m )
      {
        v10 = m + 2 * (k + 2LL * j);
        if ( LODWORD(MiPinDriverAddressLog[v10 + 2082]) != HIDWORD(MiPinDriverAddressLog[v10 + 2082]) )
          goto LABEL_25;
      }
    }
  }
}
