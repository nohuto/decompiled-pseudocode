/*
 * XREFs of PspSetJobSiloThreadImpersonationPolicy @ 0x140778358
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

char __fastcall PspSetJobSiloThreadImpersonationPolicy(__int64 a1, int a2)
{
  int v3; // r8d
  signed __int32 v4; // eax
  int v5; // ecx

  v3 = 4;
  if ( a2 != 2 )
    v3 = 2;
  v4 = *(_DWORD *)(a1 + 1556);
  if ( (v4 & a2) != 0 )
    return 1;
  while ( (v3 & v4) == 0 )
  {
    v5 = a2 | v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1556), a2 | v4, v4);
    if ( v4 == v5 )
      return 1;
  }
  return 0;
}
