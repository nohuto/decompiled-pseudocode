/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140B54810
 * Callers:
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     MmGetHighestPhysicalPage @ 0x14046F044 (MmGetHighestPhysicalPage.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline @ 0x1405CE8F0 (Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline @ 0x1405CE9B4 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140B3B22C (PopBootLoaderTraceCopyPfnList.c)
 *     PopAllocatePages @ 0x140B5F2A0 (PopAllocatePages.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140B5F508 (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  int v5; // r8d
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // r13
  unsigned __int64 v15; // rsi
  void *Pages; // rax
  void *v17; // rbp
  unsigned __int8 v18; // cl

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
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_140F0AD88 + 1);
    *(_DWORD *)(v3 + 60) = 10;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *(_BYTE *)MemoryMap;
    v4 = *(_DWORD *)(v3 + 1124);
    *(_BYTE *)(v3 + 57) = -54;
    *(_DWORD *)(v3 + 1124) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)byte_140F0ADA0) & 1;
    *(_QWORD *)(v3 + 1176) = MmGetHighestPhysicalPage(0);
    v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * PopSecureLaunched)) & 2;
    *(_DWORD *)(v3 + 1124) = v6;
    *(_DWORD *)(v3 + 1124) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * *((_BYTE *)MemoryMap + 485))) & 4 ^ ((unsigned __int8)(v6 ^ (v6 ^ (4 * *((_BYTE *)MemoryMap + 485))) & 4) ^ (unsigned __int8)(8 * PopFasr)) & 8;
    if ( (unsigned int)Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline()
      && PopSuppressResumePromptSize == -1 )
    {
      v7 = *(_DWORD *)(v3 + 1124) ^ ((unsigned __int16)*(_DWORD *)(v3 + 1124) ^ (unsigned __int16)(*((unsigned __int8 *)MemoryMap + 484) << 8)) & 0x100;
    }
    else
    {
      v7 = (PopSuppressResumePrompt != 0 ? 0x100 : 0) | *(_DWORD *)(v3 + 1124) & 0xFFFFFEFF;
    }
    *(_DWORD *)(v3 + 1124) = v7;
    v8 = MemoryMap[43];
    if ( v8 )
    {
      v9 = (__int64 *)(v3 + 1184);
      v10 = 3LL;
      *(_QWORD *)(v3 + 1184) = v8;
      v11 = (_QWORD *)(v3 + 1192);
      do
      {
        v12 = *v9++;
        *v11++ = v12 + 1;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(v3 + 1168) = 0LL;
    PopBootLoaderTraceCopyPfnList(MemoryMap, v3);
    PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
    v13 = (_QWORD *)MemoryMap[10];
    while ( v13 != MemoryMap + 10 )
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      v15 = (unsigned __int64)(unsigned int)((*((_DWORD *)v14 + 8) - *((_DWORD *)v14 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v15);
      v17 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v15 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 51) = -1073741670;
      v14[5] = v17;
      if ( !v17 )
        return 3221225626LL;
    }
    v18 = PopHiberSkipMemoryMapValidation << 7;
    *(_DWORD *)(v3 + 1216) = *((_DWORD *)MemoryMap + 120);
    *(_DWORD *)(v3 + 1124) ^= ((unsigned __int8)*(_DWORD *)(v3 + 1124) ^ v18) & 0x80;
    if ( (unsigned int)Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline() )
      *(_BYTE *)(v3 + 1239) = 1;
  }
  return *((unsigned int *)MemoryMap + 51);
}
