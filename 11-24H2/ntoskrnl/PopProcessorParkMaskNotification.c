/*
 * XREFs of PopProcessorParkMaskNotification @ 0x1405CFE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorParkMaskNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // r9

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      v5 = v3++;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v5) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v5) + 72LL);
    }
    while ( v3 < *(_DWORD *)a2 );
  }
  return (unsigned __int8)guard_dispatch_icall_no_overrides(v4, 32LL) == 0 ? 0xC00000BB : 0;
}
