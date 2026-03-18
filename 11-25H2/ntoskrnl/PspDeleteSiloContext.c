/*
 * XREFs of PspDeleteSiloContext @ 0x140A925E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspDeleteSiloContext(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
    v1 = *(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 0x7F]) + 40LL;
  else
    v1 = 8LL;
  result = *(_QWORD *)v1;
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
