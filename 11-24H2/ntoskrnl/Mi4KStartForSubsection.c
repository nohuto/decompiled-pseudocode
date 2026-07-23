/*
 * XREFs of Mi4KStartForSubsection @ 0x14045A31C
 * Callers:
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
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
