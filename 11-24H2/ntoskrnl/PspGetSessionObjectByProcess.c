/*
 * XREFs of PspGetSessionObjectByProcess @ 0x1405E4478
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140777990 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetSessionObjectByProcess(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 32);
}
