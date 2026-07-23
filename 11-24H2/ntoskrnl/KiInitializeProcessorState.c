/*
 * XREFs of KiInitializeProcessorState @ 0x14073A9E0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KiAssignProcessorNumberToPrcb @ 0x1405B8790 (KiAssignProcessorNumberToPrcb.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KiInitializeProcessorState(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  KPCR *Pcr; // rbx
  unsigned int v7; // edi
  __int64 v8; // r12
  unsigned __int16 Limit; // ax
  unsigned __int64 v10; // r15
  const void *v11; // rdx
  void *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  _OWORD *v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v25; // edx
  int v26; // eax
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx

  Pcr = KeGetPcr();
  v7 = (((*(_DWORD *)(a3 + 28) - 1) << 6) + 53439) & 0xFFFFFFC0;
  memset_0(*(void **)(a3 + 8), 0, *(unsigned int *)(a3 + 16));
  v8 = *(_QWORD *)(a3 + 8);
  memset_0(a1, 0, 0x5C0uLL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v10 = v8 + *(unsigned int *)(a3 + 36);
  a1[11] = v10;
  *((_WORD *)a1 + 43) = Limit;
  memmove(
    (void *)v10,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  v11 = KiBootProcessorIdt;
  *((_WORD *)a1 + 51) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v12 = (void *)(v8 + *(unsigned int *)(a3 + 40));
  a1[13] = (unsigned __int64)v12;
  memmove(v12, v11, (unsigned int)KiBootProcessorIdtSize);
  *(_BYTE *)(v8 + 82) = *(_BYTE *)(a3 + 24);
  v13 = v8;
  *(_DWORD *)(v8 + 420) = *(_DWORD *)(a3 + 24);
  v14 = 4LL;
  *(_DWORD *)(v8 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(v8 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v15 = (_QWORD *)(v10 - 8112 + 36);
  *(_QWORD *)(v10 - 8000) = v8;
  v16 = v7 + v8;
  *(_WORD *)(v10 + 66) = v10 - 8112;
  *(_BYTE *)(v10 + 68) = (unsigned int)(v10 - 8112) >> 16;
  *(_BYTE *)(v10 + 71) = (unsigned int)(v10 - 8112) >> 24;
  *(_DWORD *)(v10 + 72) = (v10 - 8112) >> 32;
  do
  {
    *v15 = *(_QWORD *)((char *)v15 + a3 - (v10 - 8112) + 60);
    ++v15;
    --v14;
  }
  while ( v14 );
  v17 = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(v17 - 40) = &KiExceptionDispatchOnExceptionStackContinue;
  *(_QWORD *)(v13 + 37208) = *(_QWORD *)(a3 + 72);
  *(_QWORD *)(v13 + 35048) = v17 - 80;
  *(_QWORD *)(v10 - 8112 + 4) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL);
  v18 = *(unsigned int *)(a3 + 20);
  v19 = (_OWORD *)(0x140000000LL + 824 * v18 + 16625296);
  if ( (_OWORD *)KeNodeBlock[v18] == v19 )
  {
    v20 = 6LL;
    v21 = (_OWORD *)v16;
    do
    {
      *v21 = *v19;
      v21[1] = v19[1];
      v21[2] = v19[2];
      v21[3] = v19[3];
      v21[4] = v19[4];
      v21[5] = v19[5];
      v21[6] = v19[6];
      v21 += 8;
      v22 = v19[7];
      v19 += 8;
      *(v21 - 1) = v22;
      --v20;
    }
    while ( v20 );
    v23 = *v19;
    KeNodeBlock[v18] = v16;
    *v21 = v23;
    v21[1] = v19[1];
    v21[2] = v19[2];
    *((_QWORD *)v21 + 6) = *((_QWORD *)v19 + 6);
  }
  if ( !(unsigned int)KiEnableKvaShadowing(v13 + 384, v10 - 12208, a3) )
    return 0LL;
  KiAssignProcessorNumberToPrcb(v13 + 384, (char *)(a3 + 32), *(_DWORD *)a3);
  v25 = *(unsigned __int8 *)(v13 + 592) | (*(unsigned __int8 *)(v13 + 593) << 14) | 0x3C00;
  v26 = *(_DWORD *)(v10 + 84);
  *(_WORD *)(v10 + 80) = *(unsigned __int8 *)(v13 + 592) | (*(unsigned __int8 *)(v13 + 593) << 14) | 0x3C00;
  *(_DWORD *)(v10 + 84) = v26 ^ (v25 ^ v26) & 0xF0000;
  v27 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL) - 8LL);
  *v27 = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)KiSystemStartup;
  a1[49] = (unsigned __int64)v27;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  if ( KeSmapEnabled )
    *((_DWORD *)a1 + 77) = 0x40000;
  v28 = __readcr0();
  *a1 = v28;
  v29 = __readcr3();
  *((_WORD *)a1 + 56) = 64;
  a1[2] = v29 & 0xFFFFFFFFFFFFF000uLL;
  *(_BYTE *)(v10 + 69) = -119;
  if ( VslVsmEnabled )
    *(_BYTE *)(v10 + 69) = -117;
  v30 = __readcr4();
  a1[3] = v30 & 0xFFFFFFFFFF7FFFFFuLL;
  v31 = *(_QWORD *)(a3 + 48);
  a2[16] = *(_QWORD *)(a3 + 64);
  a2[19] = v31;
  a2[18] = &KiInitialProcess;
  a2[17] = v13 + 384;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    *(_QWORD *)(a2[30] + 3712LL) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 1032LL);
    *(_QWORD *)(a2[30] + 3720LL) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a2[30] + 3728LL) = *(_QWORD *)(a3 + 224);
  }
  return v13 + 384;
}
