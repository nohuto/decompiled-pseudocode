/*
 * XREFs of KiInitializePrcbContext @ 0x140B58980
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B3888 (KiCompleteBootProcessorContextInitialization.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline @ 0x1405B5D3C (Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  char v2; // di
  void *v3; // rsi
  __int64 v5; // rcx
  size_t v6; // rbp
  void *IndependentPages; // rax
  __int64 v9; // r8
  int v10; // r10d
  unsigned __int64 v11; // rcx
  int v12; // r10d
  _DWORD *v13; // r8
  unsigned int v14; // eax

  v2 = 0;
  v3 = 0LL;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v2 = 1;
    v5 = (unsigned int)(KiXSaveAreaLengthFull + 63 + KeXStateLength + 830);
    if ( (_BYTE)KiKernelCetEnabled )
      v5 = (unsigned int)(v5 + 32);
    if ( (_DWORD)v5 )
    {
      v6 = (unsigned int)v5;
      IndependentPages = (void *)MmAllocateIndependentPages(v5, a2);
      v3 = IndependentPages;
      if ( !IndependentPages )
        return 3221225626LL;
      memset_0(IndependentPages, 0, v6);
    }
    v9 = (unsigned int)KiXSaveAreaLengthFull;
    v10 = KeXStateLength;
    v11 = ((unsigned __int64)v3 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
    *(_QWORD *)(a1 + 36816) = v11;
    v12 = v10 - 512;
    v13 = (_DWORD *)((v11 + v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v13[310] = -1232;
    v13[311] = 1232;
    v13[313] = v12;
    v13[308] = -1232;
    v13[312] = (((_DWORD)v13 + 1327) & 0xFFFFFFC0) - ((_DWORD)v13 + 1232);
    v13[309] = (((_DWORD)v13 + 1327) & 0xFFFFFFC0) - (_DWORD)v13 + v12;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v13[315] = 24;
      v14 = (((((_DWORD)v13 + 1327) & 0xFFFFFFC0) + v12 + 7) & 0xFFFFFFF8) - ((_DWORD)v13 + 1232);
      v13[314] = v14;
      v13[309] = v14 + 1256;
    }
    *(_QWORD *)(a1 + 36800) = v13;
  }
  *(_DWORD *)(a1 + 36808) = 1048587;
  if ( v2 && !*(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36808) = 1048651;
    if ( (_BYTE)KiKernelCetEnabled )
      *(_DWORD *)(a1 + 36808) = 1048779;
    if ( (unsigned int)Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline() )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)(a1 + 34576) = (KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
  }
  return 0LL;
}
