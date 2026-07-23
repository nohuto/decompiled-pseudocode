/*
 * XREFs of PsUpdateNetworkCounters @ 0x140425190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsUpdateNetworkCounters(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rax
  unsigned __int64 v5; // rcx

  v3 = *(volatile signed __int64 **)(a1 + 2032);
  if ( !v3 )
    return 0LL;
  if ( a3 >= 0x10 )
  {
    if ( *a2 )
      _InterlockedAdd64(v3, *a2);
    v5 = a2[1];
    if ( v5 )
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2032) + 8LL), v5);
    return 0LL;
  }
  return 3221225485LL;
}
