/*
 * XREFs of MiMakeProtectionMask @ 0x1402C2BF0
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiInitializePoolCommitPacket @ 0x1402C2538 (MiInitializePoolCommitPacket.c)
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     MiConvertContiguousMemoryParameters @ 0x140414CB8 (MiConvertContiguousMemoryParameters.c)
 *     MmSetPageProtection @ 0x1404F43C0 (MmSetPageProtection.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x1408FC770 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408FD950 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14093CB10 (MiInitializeCreateSectionPacket.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
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
