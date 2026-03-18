/*
 * XREFs of EtwpDisableTraceProviders @ 0x1409E45FC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     EtwpDisablePerProcessTracing @ 0x14079B178 (EtwpDisablePerProcessTracing.c)
 *     EtwpGetNextGuidEntry @ 0x14089E1C0 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 */

LONG __fastcall EtwpDisableTraceProviders(__int64 a1, unsigned int a2)
{
  _WORD *v4; // rbx
  _QWORD *i; // rax
  _DWORD *v6; // rsi
  _DWORD *j; // rdx
  _QWORD *NextGuidEntry; // rax
  __int64 v9; // r8
  _DWORD *v10; // rsi
  unsigned int k; // edi

  if ( a1 == EtwpHostSiloState )
    v4 = (_WORD *)(MmWriteableSharedUserData + 896);
  else
    v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL);
  for ( i = EtwpGetNextGuidEntry(a1, 0LL, 0); ; i = EtwpGetNextGuidEntry(a1, v6, 0) )
  {
    v6 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, i, 0LL);
  }
  for ( j = 0LL; ; j = v10 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2u);
    v10 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    LOBYTE(v9) = 2;
    EtwpClearSessionAndUnreferenceEntry(a2, NextGuidEntry, v9);
  }
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  for ( k = 0; k < 9; ++k )
  {
    if ( *(_BYTE *)v4 == (_BYTE)a2 )
    {
      if ( k <= 1 )
        EtwpDisablePerProcessTracing(k);
      *v4 = 0;
    }
    ++v4;
  }
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
