/*
 * XREFs of HalpCreateMcaMemoryErrorRecord @ 0x14053F058
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14053EEF0 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140425FF0 (WheaInitializeRecordHeader.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpAddMcaToMemoryErrorSection @ 0x14053E5A4 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14053E634 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpGetMcaExtendedLogStatusBlock @ 0x14053F6CC (HalpGetMcaExtendedLogStatusBlock.c)
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x140543108 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140543748 (HalpGetMcaVendorSpecificSections.c)
 *     HalpAddErrorEntryToPacket @ 0x1405545CC (HalpAddErrorEntryToPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  _DWORD *v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r13d
  unsigned int v23; // edx
  __int64 v24; // rax
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int64 v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r8
  unsigned int v33; // ecx
  _DWORD *v35; // [rsp+70h] [rbp+8h]
  unsigned int v36; // [rsp+88h] [rbp+20h]

  v8 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  v36 = v9;
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
    v35 = (_DWORD *)McaExtendedLogStatusBlock;
    if ( McaExtendedLogStatusBlock )
    {
      HalpAddErrorEntryToPacket(McaExtendedLogStatusBlock, a3 + 128, v16);
      v20 = v35;
      *v35 = 0;
      goto LABEL_10;
    }
    v18 = a2 + 80;
  }
  HalpAddMcaToMemoryErrorSection(v18, v16);
LABEL_10:
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v36;
  *(_DWORD *)(a3 + 132) = 80;
  *(_WORD *)(a3 + 136) = 768;
  *(GUID *)(a3 + 144) = MEMORY_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v10 + 192 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 200, a3 + v10, v20, v21);
  HalpAddMcaToProcessorGenericSection(a2 + 80, (__int64 *)(a3 + v10));
  *(_DWORD *)(a3 + 200) = v10;
  v22 = *(_DWORD *)(a3 + 204) + v10;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  v23 = v22 + 1192;
  if ( v22 + 1192 > a4 )
    return (unsigned int)-1073741789;
  v24 = 9LL;
  v25 = (_OWORD *)(a3 + v22);
  do
  {
    *v25 = *v17;
    v25[1] = v17[1];
    v25[2] = v17[2];
    v25[3] = v17[3];
    v25[4] = v17[4];
    v25[5] = v17[5];
    v25[6] = v17[6];
    v25 += 8;
    v26 = v17[7];
    v17 += 8;
    *(v25 - 1) = v26;
    --v24;
  }
  while ( v24 );
  *v25 = *v17;
  v25[1] = v17[1];
  v27 = *((_QWORD *)v17 + 4);
  v28 = v22 + 1231;
  *((_QWORD *)v25 + 4) = v27;
  *(_DWORD *)(a3 + 272) = v22;
  *(_WORD *)(a3 + 280) = 768;
  *(_DWORD *)(a3 + 276) = 1192;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v22 + 1231 > a4 )
    return (unsigned int)-1073741789;
  v29 = a3 + v23;
  *(_OWORD *)v29 = 0LL;
  *(_OWORD *)(v29 + 16) = 0LL;
  *(_DWORD *)(v29 + 32) = 0;
  *(_WORD *)(v29 + 36) = 0;
  *(_BYTE *)(v29 + 38) = 0;
  *(_QWORD *)(v29 + 1) |= 1uLL;
  *(_BYTE *)(v29 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v23;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v30 = a3 + 416;
  if ( HalpGetCpuVendor() != 2 )
    goto LABEL_27;
  if ( v22 + 1397 > a4 )
    return (unsigned int)-1073741789;
  memset_0((void *)(a3 + v28), 0, 0xA6uLL);
  if ( !HalpDisablePrmAddressTranslation )
  {
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v31 = v16[2];
LABEL_23:
      if ( v31 != -1 && HalpGetCpuVendor() == 2 )
        HalpAddPrmAddressTranslationToMemoryExtIntelSection(v32, a3 + v28);
      goto LABEL_26;
    }
    if ( _bittest64((const signed __int64 *)(a2 + 120), 0x3Au) )
    {
      v31 = *(_QWORD *)(a2 + 128);
      goto LABEL_23;
    }
  }
LABEL_26:
  *(_DWORD *)v30 = v28;
  v28 = v22 + 1397;
  *(_WORD *)(a3 + 424) = 768;
  *(_DWORD *)(a3 + 420) = 166;
  *(_OWORD *)(a3 + 432) = MEMORY_ERROR_EXT_SECTION_INTEL_GUID;
  *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  v30 = a3 + 488;
LABEL_27:
  v33 = *(_DWORD *)(a2 + 8);
  if ( v33 + v28 <= a4 )
  {
    memmove((void *)(a3 + v28), (const void *)a2, v33);
    *(_DWORD *)v30 = v28;
    *(_DWORD *)(v30 + 4) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(v30 + 8) = 768;
    *(GUID *)(v30 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(v30 + 48) = *(_DWORD *)(a2 + 20);
    return v8;
  }
  return (unsigned int)-1073741789;
}
