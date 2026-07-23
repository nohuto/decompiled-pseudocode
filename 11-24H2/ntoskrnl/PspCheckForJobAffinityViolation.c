/*
 * XREFs of PspCheckForJobAffinityViolation @ 0x140A5A4B0
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PspCheckForJobAffinityViolation(__int64 a1, unsigned __int16 *a2)
{
  if ( (*(_DWORD *)(a1 + 1056) & 0x10) != 0 )
    return (unsigned int)KeIsSubsetAffinityEx(a2, (unsigned __int16 *)(a1 + 728)) == 0 ? 0xC0000001 : 0;
  else
    return 0LL;
}
