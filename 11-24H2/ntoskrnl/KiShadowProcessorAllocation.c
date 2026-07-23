/*
 * XREFs of KiShadowProcessorAllocation @ 0x140B5CA8C
 * Callers:
 *     KeWriteProtectProcessorState @ 0x140B587C0 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 * Callees:
 *     KiShadowKernelSectionByAddress @ 0x1405C1070 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C10E4 (KiUnshadowKernelSectionByAddress.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int ShadowMapping; // edi
  char v7; // bl
  char v8; // bp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  char v11; // bl
  unsigned int v12; // ebp
  __int64 v13; // rcx
  unsigned int i; // ebp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v19; // [rsp+6Ch] [rbp+24h]

  v19 = 0;
  if ( !KiKvaShadow )
    goto LABEL_23;
  ShadowMapping = MmCreateShadowMapping(a2, 20480LL);
  if ( !ShadowMapping )
  {
LABEL_24:
    v7 = 0;
    goto LABEL_25;
  }
  v7 = 1;
  ShadowMapping = MmCreateShadowMapping(a1 + 44672, 4096LL);
  if ( !ShadowMapping )
    goto LABEL_25;
  v7 = 3;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    ShadowMapping = KiShadowKernelSectionByAddress();
    if ( !ShadowMapping )
      goto LABEL_25;
    v7 = 7;
  }
  v8 = v7;
  if ( !(_BYTE)KiKernelCetEnabled )
  {
LABEL_22:
    v19 = 0;
LABEL_23:
    ShadowMapping = 1;
    goto LABEL_24;
  }
  if ( a3 )
    v9 = *(_QWORD *)(a3 + 136);
  else
    v9 = (*(_QWORD *)(a1 + 39840) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  ShadowMapping = MmCreateShadowMapping(v9 - 0x2000, 4096LL);
  if ( ShadowMapping )
  {
    v7 |= 8u;
    v10 = a3 ? *(_QWORD *)(a3 + 224) : *(_QWORD *)(a1 + 39856);
    ShadowMapping = MmCreateShadowMapping(v10, 4096LL);
    if ( ShadowMapping )
    {
      v11 = v8;
      v12 = 1;
      v7 = v11 | 0x18;
      while ( 1 )
      {
        v13 = a3
            ? *(_QWORD *)(a3 + 8LL * v12 + 184)
            : (*(_QWORD *)(*(_QWORD *)(a1 + 39856) + 8LL * v12) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
        ShadowMapping = MmCreateShadowMapping(v13 - 0x2000, 4096LL);
        if ( !ShadowMapping )
          break;
        v19 = v12++;
        if ( v12 > 4 )
          goto LABEL_22;
      }
    }
  }
LABEL_25:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    for ( i = 1; i <= v19; ++i )
    {
      if ( a3 )
        v15 = *(_QWORD *)(a3 + 8LL * i + 184);
      else
        v15 = (*(_QWORD *)(*(_QWORD *)(a1 + 39856) + 8LL * i) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
      MmDeleteShadowMapping(v15 - 0x2000, 0x1000uLL);
    }
    if ( (v7 & 0x10) != 0 )
    {
      if ( a3 )
        v16 = *(_QWORD *)(a3 + 224);
      else
        v16 = *(_QWORD *)(a1 + 39856);
      MmDeleteShadowMapping(v16, 0x1000uLL);
    }
    if ( (v7 & 8) != 0 )
    {
      if ( a3 )
        v17 = *(_QWORD *)(a3 + 136);
      else
        v17 = (*(_QWORD *)(a1 + 39840) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
      MmDeleteShadowMapping(v17 - 0x2000, 0x1000uLL);
    }
  }
  if ( (v7 & 4) != 0 )
    KiUnshadowKernelSectionByAddress();
  if ( (v7 & 2) != 0 )
    MmDeleteShadowMapping(a1 + 44672, 0x1000uLL);
  if ( (v7 & 1) != 0 )
    MmDeleteShadowMapping(a2, 0x5000uLL);
  return ShadowMapping;
}
