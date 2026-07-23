/*
 * XREFs of IommupHvInterruptRoutine @ 0x140563CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char IommupHvInterruptRoutine()
{
  char v0; // di
  unsigned int i; // ebx
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx

  v0 = 0;
  for ( i = 0; i < IommupHvPageRequestQueueCount; ++i )
  {
    v2 = IommupHvPageRequestQueues + ((unsigned __int64)i << 6);
    v3 = *(unsigned int *)(*(_QWORD *)(v2 + 8) + 8LL);
    if ( (_WORD)v3 )
    {
      if ( (_BYTE)v3 )
        *(_BYTE *)(*(_QWORD *)(v2 + 8) + 8LL) = 0;
      v0 = 1;
      guard_dispatch_icall_no_overrides(i, v3);
    }
  }
  return v0;
}
