/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x1402CB070
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePagefilePeakUsage(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)a1 - ((*(_BYTE *)(a1 + 172) & 0x40) != 0 ? 5 : 2) - *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)result )
    *(_DWORD *)(a1 + 16) = result;
  return result;
}
