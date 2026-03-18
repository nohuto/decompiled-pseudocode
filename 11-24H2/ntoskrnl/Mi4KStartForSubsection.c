/*
 * XREFs of Mi4KStartForSubsection @ 0x140463BDC
 * Callers:
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateDataFileMap @ 0x140943D3C (MiCreateDataFileMap.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
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
