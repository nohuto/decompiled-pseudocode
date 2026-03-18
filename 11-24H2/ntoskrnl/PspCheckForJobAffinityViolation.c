/*
 * XREFs of PspCheckForJobAffinityViolation @ 0x140A61BBC
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PspCheckForJobAffinityViolation(__int64 a1, unsigned __int16 *a2)
{
  if ( (*(_DWORD *)(a1 + 1056) & 0x10) != 0 )
    return (unsigned int)KeIsSubsetAffinityEx(a2, (unsigned __int16 *)(a1 + 728)) == 0 ? 0xC0000001 : 0;
  else
    return 0LL;
}
