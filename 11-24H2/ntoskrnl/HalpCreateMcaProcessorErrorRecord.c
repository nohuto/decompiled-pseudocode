/*
 * XREFs of HalpCreateMcaProcessorErrorRecord @ 0x14053F418
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14053EEF0 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140425FF0 (WheaInitializeRecordHeader.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14053E634 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x14053E7B8 (HalpAddMcaToProcessorSpecificSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpCreateMcaProcessorErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 *v13; // r13
  unsigned int v14; // r15d
  int v15; // ecx
  _OWORD *v16; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v28; // [rsp+60h] [rbp+8h]
  unsigned int v29; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v29 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_WORD *)(a3 + 10) = 5;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v12 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 20) = a4;
  v28 = v9;
  v13 = (__int64 *)(a3 + v9);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v14 = v9 + 192;
  v15 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v15;
  *(_DWORD *)(a3 + 104) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v14 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 128, v13, v10, v11);
  v16 = (_OWORD *)(a2 + 80);
  HalpAddMcaToProcessorGenericSection(a2 + 80, v13);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v28;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v14 + 65 > a4 )
    return (unsigned int)-1073741789;
  HalpAddMcaToProcessorSpecificSection(a2 + 80, (GUID *)(a3 + v14), &v29);
  v17 = v29;
  *(_DWORD *)(a3 + 200) = v14;
  *(_DWORD *)(a3 + 204) = v17;
  v18 = v14 + v17;
  *(_WORD *)(a3 + 208) = 768;
  v19 = v14 + v17 + 1192;
  *(GUID *)(a3 + 216) = XPF_PROCESSOR_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v19 > a4 )
    return (unsigned int)-1073741789;
  v20 = 9LL;
  v21 = (_OWORD *)(a3 + v18);
  do
  {
    *v21 = *v16;
    v21[1] = v16[1];
    v21[2] = v16[2];
    v21[3] = v16[3];
    v21[4] = v16[4];
    v21[5] = v16[5];
    v21[6] = v16[6];
    v21 += 8;
    v22 = v16[7];
    v16 += 8;
    *(v21 - 1) = v22;
    --v20;
  }
  while ( v20 );
  *v21 = *v16;
  v21[1] = v16[1];
  v23 = *((_QWORD *)v16 + 4);
  v24 = v19 + 39;
  *((_QWORD *)v21 + 4) = v23;
  *(_DWORD *)(a3 + 272) = v18;
  *(_DWORD *)(a3 + 276) = 1192;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v19 + 39 > a4 )
    return (unsigned int)-1073741789;
  v25 = a3 + v19;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)(v25 + 16) = 0LL;
  *(_DWORD *)(v25 + 32) = 0;
  *(_WORD *)(v25 + 36) = 0;
  *(_BYTE *)(v25 + 38) = 0;
  *(_QWORD *)(v25 + 1) |= 1uLL;
  *(_BYTE *)(v25 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v19;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v26 = *(_DWORD *)(a2 + 8);
  if ( v26 + v24 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v24), (const void *)a2, v26);
    *(_DWORD *)(a3 + 416) = v24;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(GUID *)(a3 + 432) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
