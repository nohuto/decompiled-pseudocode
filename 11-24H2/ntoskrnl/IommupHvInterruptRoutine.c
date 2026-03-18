/*
 * XREFs of IommupHvInterruptRoutine @ 0x140565FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommupHvInterruptRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int i; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx

  v4 = 0;
  for ( i = 0; i < IommupHvPageRequestQueueCount; ++i )
  {
    v6 = IommupHvPageRequestQueues + ((unsigned __int64)i << 6);
    v7 = *(unsigned int *)(*(_QWORD *)(v6 + 8) + 8LL);
    if ( (_WORD)v7 )
    {
      if ( (_BYTE)v7 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8) + 8LL) = 0;
      v4 = 1;
      guard_dispatch_icall_no_overrides(i, v7, a3, a4);
    }
  }
  return v4;
}
