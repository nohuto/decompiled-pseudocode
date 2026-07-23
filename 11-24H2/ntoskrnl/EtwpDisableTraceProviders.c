/*
 * XREFs of EtwpDisableTraceProviders @ 0x140A0F8B4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwpDisablePerProcessTracing @ 0x1407AA688 (EtwpDisablePerProcessTracing.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
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
    EtwpClearSessionAndUnreferenceEntry(a2, (ULONG_PTR)i, 0);
  }
  for ( j = 0LL; ; j = v9 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2u);
    v9 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, (ULONG_PTR)NextGuidEntry, 2);
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
