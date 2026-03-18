/*
 * XREFs of MiZeroBootMappings @ 0x140C503D0
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MxZeroBootMappings @ 0x140C505C4 (MxZeroBootMappings.c)
 */

__int64 MiZeroBootMappings()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r8

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6C000000000uLL;
  v2 = 3LL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  MxZeroBootMappings(v0, v1);
  return MiIssueFlushTbEntire(1LL, 0xFFFFFFFFLL, v3);
}
