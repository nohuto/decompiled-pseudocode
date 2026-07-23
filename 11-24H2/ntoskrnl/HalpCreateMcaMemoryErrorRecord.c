/*
 * XREFs of HalpCreateMcaMemoryErrorRecord @ 0x14053C958
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14053C7F0 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140419EA0 (WheaInitializeRecordHeader.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpAddMcaToMemoryErrorSection @ 0x14053BEA4 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14053BF34 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpGetMcaExtendedLogStatusBlock @ 0x14053CFCC (HalpGetMcaExtendedLogStatusBlock.c)
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x140540A58 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140541098 (HalpGetMcaVendorSpecificSections.c)
 *     HalpAddErrorEntryToPacket @ 0x140551F0C (HalpAddErrorEntryToPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpCreateMcaMemoryErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // r13d
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  _QWORD *v16; // r12
  _OWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 McaExtendedLogStatusBlock; // rax
  unsigned int v20; // r13d
  unsigned int v21; // edx
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int64 v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r8
  unsigned int v31; // ecx
  _DWORD *v33; // [rsp+70h] [rbp+8h]
  unsigned int v34; // [rsp+88h] [rbp+20h]

  v8 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  v34 = v9;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_WORD *)(a3 + 10) = HalpGetMcaVendorSpecificSections() + 5;
  v10 = v9 + 80;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v11 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 20) = a4;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  *(_DWORD *)(a3 + 104) = v13;
  v14 = v13 | 0x20;
  v15 = v13 & 0xFFFFFFDF;
  if ( (*(_BYTE *)(a2 + 12) & 0xC0) != 0x40 )
    v15 = v14;
  v16 = (_QWORD *)(a3 + v9);
  *(_DWORD *)(a3 + 104) = v15;
  if ( v10 > a4 )
    return (unsigned int)-1073741789;
  v17 = (_OWORD *)(a2 + 80);
  v18 = a2 + 80;
  if ( HalpMcaExtendedLoggingSupported )
  {
    McaExtendedLogStatusBlock = HalpGetMcaExtendedLogStatusBlock(v18);
    v33 = (_DWORD *)McaExtendedLogStatusBlock;
    if ( McaExtendedLogStatusBlock )
    {
      HalpAddErrorEntryToPacket(McaExtendedLogStatusBlock, a3 + 128, v16);
      *v33 = 0;
      goto LABEL_10;
    }
    v18 = a2 + 80;
  }
  HalpAddMcaToMemoryErrorSection(v18, v16);
LABEL_10:
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v34;
  *(_DWORD *)(a3 + 132) = 80;
  *(_WORD *)(a3 + 136) = 768;
  *(GUID *)(a3 + 144) = MEMORY_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v10 + 192 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 200, a3 + v10);
  HalpAddMcaToProcessorGenericSection(a2 + 80, (__int64 *)(a3 + v10));
  *(_DWORD *)(a3 + 200) = v10;
  v20 = *(_DWORD *)(a3 + 204) + v10;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  v21 = v20 + 1192;
  if ( v20 + 1192 > a4 )
    return (unsigned int)-1073741789;
  v22 = 9LL;
  v23 = (_OWORD *)(a3 + v20);
  do
  {
    *v23 = *v17;
    v23[1] = v17[1];
    v23[2] = v17[2];
    v23[3] = v17[3];
    v23[4] = v17[4];
    v23[5] = v17[5];
    v23[6] = v17[6];
    v23 += 8;
    v24 = v17[7];
    v17 += 8;
    *(v23 - 1) = v24;
    --v22;
  }
  while ( v22 );
  *v23 = *v17;
  v23[1] = v17[1];
  v25 = *((_QWORD *)v17 + 4);
  v26 = v20 + 1231;
  *((_QWORD *)v23 + 4) = v25;
  *(_DWORD *)(a3 + 272) = v20;
  *(_WORD *)(a3 + 280) = 768;
  *(_DWORD *)(a3 + 276) = 1192;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v20 + 1231 > a4 )
    return (unsigned int)-1073741789;
  v27 = a3 + v21;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)(v27 + 16) = 0LL;
  *(_DWORD *)(v27 + 32) = 0;
  *(_WORD *)(v27 + 36) = 0;
  *(_BYTE *)(v27 + 38) = 0;
  *(_QWORD *)(v27 + 1) |= 1uLL;
  *(_BYTE *)(v27 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v21;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v28 = a3 + 416;
  if ( HalpGetCpuVendor() != 2 )
    goto LABEL_27;
  if ( v20 + 1397 > a4 )
    return (unsigned int)-1073741789;
  memset_0((void *)(a3 + v26), 0, 0xA6uLL);
  if ( !HalpDisablePrmAddressTranslation )
  {
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v29 = v16[2];
LABEL_23:
      if ( v29 != -1 && HalpGetCpuVendor() == 2 )
        HalpAddPrmAddressTranslationToMemoryExtIntelSection(v30, a3 + v26);
      goto LABEL_26;
    }
    if ( _bittest64((const signed __int64 *)(a2 + 120), 0x3Au) )
    {
      v29 = *(_QWORD *)(a2 + 128);
      goto LABEL_23;
    }
  }
LABEL_26:
  *(_DWORD *)v28 = v26;
  v26 = v20 + 1397;
  *(_WORD *)(a3 + 424) = 768;
  *(_DWORD *)(a3 + 420) = 166;
  *(_OWORD *)(a3 + 432) = MEMORY_ERROR_EXT_SECTION_INTEL_GUID;
  *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  v28 = a3 + 488;
LABEL_27:
  v31 = *(_DWORD *)(a2 + 8);
  if ( v31 + v26 <= a4 )
  {
    memmove((void *)(a3 + v26), (const void *)a2, v31);
    *(_DWORD *)v28 = v26;
    *(_DWORD *)(v28 + 4) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(v28 + 8) = 768;
    *(GUID *)(v28 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(v28 + 48) = *(_DWORD *)(a2 + 20);
    return v8;
  }
  return (unsigned int)-1073741789;
}
