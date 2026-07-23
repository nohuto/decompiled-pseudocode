/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1405EE1EC
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x1402313B4 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x140447DA0 (RtlPcToFileHeader.c)
 *     RtlFailFast2 @ 0x1404FA9B0 (RtlFailFast2.c)
 *     bsearch_s @ 0x1404FC130 (bsearch_s.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  __int64 Config; // rax
  rsize_t v5; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  BaseOfImage = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v5 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v5,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0;
}
