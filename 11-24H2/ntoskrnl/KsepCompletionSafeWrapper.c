/*
 * XREFs of KsepCompletionSafeWrapper @ 0x1404A0E10
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x1404A0EC0 (KsepPoolFreeNonPaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KsepCompletionSafeWrapper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = 0;
  if ( a3 && *(_QWORD *)(a3 + 8) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)a3, a2, *(_QWORD *)(a3 + 16), a4);
  v8 = *(_DWORD *)(a3 + 40);
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( (v8 & 0x80u) != 0 )
      goto LABEL_6;
  }
  else if ( (v8 & 0x40) != 0 )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 68) && (v8 & 0x20) != 0 )
  {
LABEL_6:
    if ( *(_QWORD *)(a3 + 24) )
      v4 = guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(a3 + 32), a4);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    v4 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
LABEL_8:
  KsepPoolFreeNonPaged(a3);
  return v4;
}
