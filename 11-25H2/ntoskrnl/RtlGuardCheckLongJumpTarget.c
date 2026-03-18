/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1405E4858
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x14025D570 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x14025DBF0 (RtlPcToFileHeader.c)
 *     RtlFailFast2 @ 0x1404FA970 (RtlFailFast2.c)
 *     bsearch_s @ 0x1404FC0F0 (bsearch_s.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A63300 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1)
{
  __int64 Config; // rax
  rsize_t v3; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  v6 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(a1, &v6);
    if ( !v6
      || (Config = LdrImageDirectoryEntryToLoadConfig(v6)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - v6, (v3 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v3,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0LL;
}
