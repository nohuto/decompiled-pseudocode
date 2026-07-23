/*
 * XREFs of KsepCompletionSafeWrapper @ 0x14049B490
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x14049B540 (KsepPoolFreeNonPaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KsepCompletionSafeWrapper(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( a3 && *(_QWORD *)(a3 + 8) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)a3, a2);
  v7 = *(_DWORD *)(a3 + 40);
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( (v7 & 0x80u) != 0 )
      goto LABEL_6;
  }
  else if ( (v7 & 0x40) != 0 )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 68) && (v7 & 0x20) != 0 )
  {
LABEL_6:
    if ( *(_QWORD *)(a3 + 24) )
      v3 = guard_dispatch_icall_no_overrides(a1, a2);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
LABEL_8:
  KsepPoolFreeNonPaged(a3);
  return v3;
}
