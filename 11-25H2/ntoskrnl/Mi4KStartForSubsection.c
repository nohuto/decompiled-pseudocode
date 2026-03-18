/*
 * XREFs of Mi4KStartForSubsection @ 0x1404645D4
 * Callers:
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x14093BE74 (MiCreateDataFileMap.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mi4KStartForSubsection(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 36) = a2;
  result = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = (WORD2(a2) << 6) ^ (result ^ (WORD2(a2) << 6)) & 0xFFFF003F;
  return result;
}
