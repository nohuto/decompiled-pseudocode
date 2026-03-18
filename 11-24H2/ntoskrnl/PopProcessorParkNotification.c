/*
 * XREFs of PopProcessorParkNotification @ 0x1405D2760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorParkNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 i; // r9
  __int64 v6; // r8
  char v7; // al

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(a2 + 4);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v6) + 72LL) )
  {
    v6 = (unsigned int)i;
    i = (unsigned int)(i + 1);
  }
  if ( PopFxParkingFallback )
    goto LABEL_9;
  v7 = guard_dispatch_icall_no_overrides(v4, 31LL, a2, i);
  if ( !v7 )
    PopFxParkingFallback = 1;
  if ( PopFxParkingFallback )
LABEL_9:
    v7 = guard_dispatch_icall_no_overrides(v4, 14LL, a2, i);
  return v7 == 0 ? 0xC00000BB : 0;
}
