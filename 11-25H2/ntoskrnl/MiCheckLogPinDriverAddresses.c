/*
 * XREFs of MiCheckLogPinDriverAddresses @ 0x14045F5E8
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void MiCheckLogPinDriverAddresses()
{
  unsigned int *Buffer; // rcx
  unsigned int v1; // r9d
  unsigned int *v2; // r10
  bool i; // zf
  int v4; // edx
  bool v5; // zf
  bool v6; // al
  unsigned int j; // r8d
  unsigned int k; // r9d
  unsigned int m; // r10d
  __int64 v10; // rcx

  if ( !*(_QWORD *)&qword_140E372D8 )
    return;
  if ( !stru_140EF47A0.SizeOfBitMap )
    goto LABEL_25;
  if ( stru_140EF47A0.SizeOfBitMap <= 1 )
  {
    if ( stru_140EF47A0.SizeOfBitMap == 1 )
    {
      v6 = !_bittest((const signed __int32 *)stru_140EF47A0.Buffer, 0);
      goto LABEL_11;
    }
LABEL_25:
    if ( !_InterlockedCompareExchange16(&word_140EF4910, 1, 0) )
    {
      stru_140EF48F0.Parameter = 0LL;
      stru_140EF48F0.WorkerRoutine = (void (__fastcall *)(void *))MiLogPinDriverAddressesWorker;
      stru_140EF48F0.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140EF48F0, DelayedWorkQueue);
    }
    return;
  }
  Buffer = stru_140EF47A0.Buffer;
  v1 = *stru_140EF47A0.Buffer;
  v2 = &stru_140EF47A0.Buffer[(unsigned __int64)(stru_140EF47A0.SizeOfBitMap - 1) >> 5];
  if ( stru_140EF47A0.Buffer != v2 )
  {
    for ( i = v1 == 0; i; i = v4 == 0 )
    {
      v4 = *++Buffer;
      if ( Buffer == v2 )
      {
        v5 = (v4 & (0xFFFFFFFF >> ~(LOBYTE(stru_140EF47A0.SizeOfBitMap) - 1))) == 0;
        goto LABEL_10;
      }
    }
    goto LABEL_25;
  }
  v5 = (v1 & (0xFFFFFFFF >> (32 - LOBYTE(stru_140EF47A0.SizeOfBitMap)))) == 0;
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
