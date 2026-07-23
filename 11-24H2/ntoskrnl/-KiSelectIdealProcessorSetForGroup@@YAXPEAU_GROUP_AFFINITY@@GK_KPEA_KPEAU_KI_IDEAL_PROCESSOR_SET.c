/*
 * XREFs of ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AF90
 * Callers:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AE68 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1403A23C8 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiFindBiasedProcessorIndex @ 0x14032AD94 (KiFindBiasedProcessorIndex.c)
 */

void __fastcall KiSelectIdealProcessorSetForGroup(
        struct _GROUP_AFFINITY *a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *a6)
{
  unsigned int v6; // ebx
  struct _GROUP_AFFINITY *v7; // r14
  unsigned int v8; // esi
  __int64 Prcb; // rax
  unsigned __int64 v10; // r10
  char v11; // r9
  unsigned int v12; // edi
  int v13; // ebp
  int v14; // r8d
  int v15; // r15d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  unsigned __int16 BiasedProcessorIndex; // ax
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  unsigned __int64 v25; // r15
  int v26; // ebp
  unsigned int v27; // r14d
  __int64 v28; // rdi
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  _KI_PROCESS_CONCURRENCY_COUNT *p_High; // rdx
  unsigned int v37; // eax
  char v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+24h] [rbp-84h]
  unsigned int v40; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v41; // [rsp+30h] [rbp-78h]
  int v42; // [rsp+34h] [rbp-74h]
  int v43; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v44; // [rsp+48h] [rbp-60h]

  v6 = 0;
  v7 = a1;
  if ( !a1->Mask )
  {
    *a5 = 0LL;
    p_High = &a6->High;
    *a6 = 0LL;
    v37 = a6->High.AllFields & 0x3FFFF | 0x20040000;
    goto LABEL_27;
  }
  v41 = 0;
  v8 = 0;
  v44 = 0LL;
  Prcb = KeGetPrcb(a2);
  v10 = a4;
  v11 = 0;
  v38 = 0;
  v12 = 0;
  v40 = 0;
  v13 = 2048;
  v14 = *(unsigned __int16 *)(*(_QWORD *)(Prcb + 192) + 138LL);
  v43 = v14;
LABEL_3:
  v15 = 0;
  v42 = 0;
  v16 = v14;
  while ( 1 )
  {
    if ( v16 == -1 )
    {
      if ( v8 )
        goto LABEL_24;
      v11 = 1;
      v38 = 1;
      goto LABEL_3;
    }
    v17 = KeNodeBlock[v16];
    if ( v11 || (*(_BYTE *)(v17 + 10) & 1) == 0 )
    {
      v18 = *(_QWORD *)(v17 + 8LL * v7->Group + 32);
      if ( v18 )
      {
        v19 = v7->Mask & *(_QWORD *)(v18 + 128);
        if ( v19 )
          break;
      }
    }
LABEL_31:
    v42 = ++v15;
    if ( v15 == (unsigned __int16)KeNumberNodes )
      v16 = -1;
    else
      v16 = *(_DWORD *)(qword_140E2DC10 + 4LL * (v15 + v14 * (unsigned int)(unsigned __int16)KeNumberNodes));
  }
  if ( v16 == v14 )
    BiasedProcessorIndex = a2;
  else
    BiasedProcessorIndex = KiFindBiasedProcessorIndex(v7->Group, v10, v7->Mask & *(_QWORD *)(v18 + 128));
  v21 = 0LL;
  v22 = BiasedProcessorIndex;
  v23 = 0;
  v24 = 0;
  if ( a3 != v8 )
  {
    v25 = *(_QWORD *)(v18 + 168);
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v29 = a3 - v8;
    do
    {
      v30 = KeGetPrcb(v22);
      v31 = *(_QWORD *)(v30 + 36464);
      if ( !v31 )
        v31 = *(_QWORD *)(v30 + 200);
      v25 &= ~v31;
      v32 = v27 + 1;
      v33 = v19 & v31;
      if ( !v33 )
        v32 = v26;
      v28 |= v33;
      v26 = v32;
      v27 += __popcnt(v33);
      if ( !v25 )
        break;
      v22 = KiFindBiasedProcessorIndex(*(unsigned __int16 *)(v18 + 136), a4, v25);
    }
    while ( v27 < v29 );
    v8 = v41;
    v15 = v42;
    v10 = a4;
    v21 = v28;
    v12 = v40;
    v23 = v27;
    v7 = a1;
    v39 = v26;
    v13 = 2048;
    v24 = v39;
  }
  v34 = v8 + v24;
  if ( !v21 )
    v34 = v12;
  v8 += v23;
  v12 = v34;
  v40 = v34;
  v35 = v21 | v44;
  v41 = v8;
  v44 |= v21;
  if ( v8 < a3 )
  {
    v14 = v43;
    v11 = v38;
    goto LABEL_31;
  }
  if ( v35 != v7->Mask )
    v13 = v8;
LABEL_24:
  *a5 = v44;
  if ( v12 > 2 )
    v6 = v12;
  *a6 = 0LL;
  p_High = &a6->High;
  a6->Low.AllFields = v6 << 18;
  v37 = ((v13 + 1) << 18) | a6->High.AllFields & 0x3FFFF;
LABEL_27:
  p_High->AllFields = v37 - 1;
}
