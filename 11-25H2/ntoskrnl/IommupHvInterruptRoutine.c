/*
 * XREFs of IommupHvInterruptRoutine @ 0x1405637C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char IommupHvInterruptRoutine()
{
  char v0; // di
  unsigned int i; // ebx
  unsigned __int64 v2; // rcx
  int v3; // edx

  v0 = 0;
  for ( i = 0; i < IommupHvPageRequestQueueCount; ++i )
  {
    v2 = IommupHvPageRequestQueues + ((unsigned __int64)i << 6);
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
    if ( (_WORD)v3 )
    {
      if ( (_BYTE)v3 )
        *(_BYTE *)(*(_QWORD *)(v2 + 8) + 8LL) = 0;
      v0 = 1;
      guard_dispatch_icall_no_overrides(i);
    }
  }
  return v0;
}
