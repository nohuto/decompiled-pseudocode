/*
 * XREFs of PopProcessorParkNotification @ 0x1405CFE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorParkNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int i; // r9d
  __int64 v5; // r8
  char v6; // al

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  for ( i = 0;
        i < *(_DWORD *)(a2 + 4);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v5) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v5) + 72LL) )
  {
    v5 = i++;
  }
  if ( PopFxParkingFallback )
    goto LABEL_9;
  v6 = guard_dispatch_icall_no_overrides(v3, 31LL);
  if ( !v6 )
    PopFxParkingFallback = 1;
  if ( PopFxParkingFallback )
LABEL_9:
    v6 = guard_dispatch_icall_no_overrides(v3, 14LL);
  return v6 == 0 ? 0xC00000BB : 0;
}
