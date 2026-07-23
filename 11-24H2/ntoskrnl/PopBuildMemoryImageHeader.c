/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140B66A30
 * Callers:
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x1404684E4 (MmGetHighestPhysicalPage.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x1405D0ABC (Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140B4D26C (PopBootLoaderTraceCopyPfnList.c)
 *     PopAllocatePages @ 0x140B6FDEC (PopAllocatePages.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140B70468 (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 HighestPhysicalPage; // rax
  char v6; // dl
  int v7; // r8d
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int16 v15; // cx
  int v16; // eax
  _QWORD *v17; // r14
  _QWORD *v18; // r15
  unsigned __int64 v19; // rsi
  void *Pages; // rax
  void *v21; // rbp
  int v22; // ecx

  if ( !a2 )
  {
    v3 = MemoryMap[27];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x4D8uLL, 0x676D694Du);
    memset_0((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 1240;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_140F0BBA8 + 1);
    *(_DWORD *)(v3 + 60) = 10;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *(_BYTE *)MemoryMap;
    v4 = *(_DWORD *)(v3 + 1124);
    *(_BYTE *)(v3 + 57) = -54;
    *(_DWORD *)(v3 + 1124) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)byte_140F0BBC0) & 1;
    HighestPhysicalPage = MmGetHighestPhysicalPage(0);
    v6 = PopFasr;
    *(_QWORD *)(v3 + 1176) = HighestPhysicalPage;
    LODWORD(HighestPhysicalPage) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * PopSecureLaunched)) & 2;
    *(_DWORD *)(v3 + 1124) = HighestPhysicalPage;
    v8 = HighestPhysicalPage ^ ((unsigned __int8)HighestPhysicalPage ^ (unsigned __int8)(4 * *((_BYTE *)MemoryMap + 489))) & 4 ^ ((unsigned __int8)(HighestPhysicalPage ^ (HighestPhysicalPage ^ (4 * *((_BYTE *)MemoryMap + 489))) & 4) ^ (unsigned __int8)(8 * v6)) & 8;
    *(_DWORD *)(v3 + 1124) = v8;
    if ( PopSuppressResumePromptSize == -1 )
      v9 = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(*((unsigned __int8 *)MemoryMap + 488) << 8)) & 0x100;
    else
      v9 = (PopSuppressResumePrompt != 0 ? 0x100 : 0) | v8 & 0xFFFFFEFF;
    *(_DWORD *)(v3 + 1124) = v9;
    v10 = MemoryMap[43];
    if ( v10 )
    {
      v11 = (__int64 *)(v3 + 1184);
      v12 = 3LL;
      *(_QWORD *)(v3 + 1184) = v10;
      v13 = (_QWORD *)(v3 + 1192);
      do
      {
        v14 = *v11++;
        *v13++ = v14 + 1;
        --v12;
      }
      while ( v12 );
    }
    v15 = HvlpFlags;
    v16 = *(_DWORD *)(v3 + 1124);
    *(_QWORD *)(v3 + 1168) = 0LL;
    *(_DWORD *)(v3 + 1124) = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v15 << 9)) & 0x400;
    PopBootLoaderTraceCopyPfnList(MemoryMap, v3);
    PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
    v17 = (_QWORD *)MemoryMap[10];
    while ( v17 != MemoryMap + 10 )
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
      v19 = (unsigned __int64)(unsigned int)((*((_DWORD *)v18 + 8) - *((_DWORD *)v18 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v19);
      v21 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v19 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 51) = -1073741670;
      v18[5] = v21;
      if ( !v21 )
        return 3221225626LL;
    }
    v22 = *(_DWORD *)(v3 + 1124) ^ ((unsigned __int16)*(_DWORD *)(v3 + 1124) ^ (unsigned __int16)(*((unsigned __int8 *)MemoryMap
                                                                                                  + 480) << 9)) & 0x200;
    *(_DWORD *)(v3 + 1124) = v22;
    *(_DWORD *)(v3 + 1216) = *((_DWORD *)MemoryMap + 121);
    *(_DWORD *)(v3 + 1124) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(PopHiberSkipMemoryMapValidation << 7)) & 0x80;
    if ( (unsigned int)Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v3 + 1124) |= 0x800u;
  }
  return *((unsigned int *)MemoryMap + 51);
}
