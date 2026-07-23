/*
 * XREFs of MmMdlPagesAreZero @ 0x140482D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPagesAreZero(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PVOID *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned int i; // edx

  if ( (*(_WORD *)(a1 + 10) & 0x4002) != 0x4002 )
    return 0LL;
  v1 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
  v2 = *(unsigned int *)(a1 + 40) + 4095LL;
  v3 = (PVOID *)(a1 + 48);
  v4 = (unsigned __int64)(v1 + v2) >> 12;
  for ( i = 0; i < v4; ++i )
  {
    if ( *v3 != qword_140E37480[0] )
      return 0LL;
    ++v3;
  }
  return 1LL;
}
