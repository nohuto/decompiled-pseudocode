/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x140228FE8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
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
