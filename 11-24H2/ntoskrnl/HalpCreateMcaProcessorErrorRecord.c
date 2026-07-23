/*
 * XREFs of HalpCreateMcaProcessorErrorRecord @ 0x14053CD18
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14053C7F0 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140419EA0 (WheaInitializeRecordHeader.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14053BF34 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x14053C0B8 (HalpAddMcaToProcessorSpecificSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpCreateMcaProcessorErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  int v10; // eax
  __int64 *v11; // r13
  unsigned int v12; // r15d
  int v13; // ecx
  _OWORD *v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v26; // [rsp+60h] [rbp+8h]
  unsigned int v27; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v27 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_WORD *)(a3 + 10) = 5;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v10 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 20) = a4;
  v26 = v9;
  v11 = (__int64 *)(a3 + v9);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v12 = v9 + 192;
  v13 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v13;
  *(_DWORD *)(a3 + 104) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v12 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 128, v11);
  v14 = (_OWORD *)(a2 + 80);
  HalpAddMcaToProcessorGenericSection(a2 + 80, v11);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v26;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v12 + 65 > a4 )
    return (unsigned int)-1073741789;
  HalpAddMcaToProcessorSpecificSection(a2 + 80, (GUID *)(a3 + v12), &v27);
  v15 = v27;
  *(_DWORD *)(a3 + 200) = v12;
  *(_DWORD *)(a3 + 204) = v15;
  v16 = v12 + v15;
  *(_WORD *)(a3 + 208) = 768;
  v17 = v12 + v15 + 1192;
  *(GUID *)(a3 + 216) = XPF_PROCESSOR_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v17 > a4 )
    return (unsigned int)-1073741789;
  v18 = 9LL;
  v19 = (_OWORD *)(a3 + v16);
  do
  {
    *v19 = *v14;
    v19[1] = v14[1];
    v19[2] = v14[2];
    v19[3] = v14[3];
    v19[4] = v14[4];
    v19[5] = v14[5];
    v19[6] = v14[6];
    v19 += 8;
    v20 = v14[7];
    v14 += 8;
    *(v19 - 1) = v20;
    --v18;
  }
  while ( v18 );
  *v19 = *v14;
  v19[1] = v14[1];
  v21 = *((_QWORD *)v14 + 4);
  v22 = v17 + 39;
  *((_QWORD *)v19 + 4) = v21;
  *(_DWORD *)(a3 + 272) = v16;
  *(_DWORD *)(a3 + 276) = 1192;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v17 + 39 > a4 )
    return (unsigned int)-1073741789;
  v23 = a3 + v17;
  *(_OWORD *)v23 = 0LL;
  *(_OWORD *)(v23 + 16) = 0LL;
  *(_DWORD *)(v23 + 32) = 0;
  *(_WORD *)(v23 + 36) = 0;
  *(_BYTE *)(v23 + 38) = 0;
  *(_QWORD *)(v23 + 1) |= 1uLL;
  *(_BYTE *)(v23 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v17;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v24 = *(_DWORD *)(a2 + 8);
  if ( v24 + v22 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v22), (const void *)a2, v24);
    *(_DWORD *)(a3 + 416) = v22;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(GUID *)(a3 + 432) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
