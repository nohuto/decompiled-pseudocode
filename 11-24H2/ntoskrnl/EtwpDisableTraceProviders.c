/*
 * XREFs of EtwpDisableTraceProviders @ 0x140A166D4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     EtwpDisablePerProcessTracing @ 0x1407AA548 (EtwpDisablePerProcessTracing.c)
 *     EtwpGetNextGuidEntry @ 0x14083D5B0 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14083ECD8 (EtwpClearSessionAndUnreferenceEntry.c)
 */

LONG __fastcall EtwpDisableTraceProviders(__int64 a1, int a2)
{
  _WORD *v4; // rbx
  _QWORD *i; // rax
  _DWORD *v6; // rsi
  _DWORD *j; // rdx
  _QWORD *NextGuidEntry; // rax
  _DWORD *v9; // rsi
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
    EtwpClearSessionAndUnreferenceEntry(a2, (__int64)i, 0);
  }
  for ( j = 0LL; ; j = v9 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2u);
    v9 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, (__int64)NextGuidEntry, 2);
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
