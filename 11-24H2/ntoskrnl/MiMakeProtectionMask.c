/*
 * XREFs of MiMakeProtectionMask @ 0x1402EAF70
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     MiInitializePoolCommitPacket @ 0x1402EA864 (MiInitializePoolCommitPacket.c)
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiConvertContiguousMemoryParameters @ 0x140411748 (MiConvertContiguousMemoryParameters.c)
 *     MmSetPageProtection @ 0x1404D6CF0 (MmSetPageProtection.c)
 *     MmMapMdl @ 0x140676C90 (MmMapMdl.c)
 *     MiMapViewOfSectionCommon @ 0x140899F20 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     NtProtectVirtualMemory @ 0x1408DC680 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408DEC10 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask1 + (a1 & 0xF));
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask2 + ((unsigned __int8)a1 >> 4));
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result == 24 || (a1 & 0x600) != 0 )
      return 0xFFFFFFFFLL;
    result = (unsigned int)result | 0x10;
  }
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
