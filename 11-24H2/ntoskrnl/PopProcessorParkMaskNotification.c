/*
 * XREFs of PopProcessorParkMaskNotification @ 0x1405D26E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorParkMaskNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // r9

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 72);
  if ( !v4 || !*(_QWORD *)(v4 + 104) )
    return 3221225474LL;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      v7 = v5++;
      a4 = 2 * v7;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * a4) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * a4) + 72LL);
    }
    while ( v5 < *(_DWORD *)a2 );
  }
  return (unsigned __int8)guard_dispatch_icall_no_overrides(v6, 32LL, a2, a4) == 0 ? 0xC00000BB : 0;
}
