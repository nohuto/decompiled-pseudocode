/*
 * XREFs of PspDeleteSiloContext @ 0x140A96830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspDeleteSiloContext(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  v4 = (_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
  {
    a3 = ObpInfoMaskToOffset;
    v4 = (_QWORD *)((char *)v4 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 0x7F]);
    v5 = *v4 + 40LL;
  }
  else
  {
    v5 = 8LL;
  }
  result = *(_QWORD *)v5;
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, v4, a3, a4);
  return result;
}
