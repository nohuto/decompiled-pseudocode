/*
 * XREFs of KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414
 * Callers:
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x14042B3A0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     KiGetNumberOfActiveSubNodes @ 0x14042C3A8 (KiGetNumberOfActiveSubNodes.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B3B28 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

void *__fastcall KiInitializeSystemSubNodeEnumerationContext(__int64 a1, __int16 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // r9d

  *(_QWORD *)(a1 + 8) = 0LL;
  LOWORD(v2) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)a1 = v2;
  if ( *(_WORD *)(a1 + 2) )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    *(_DWORD *)(a1 + 4) = 1;
    if ( v5 == 1 )
      goto LABEL_8;
    v2 = *(unsigned int *)(qword_140E2DC10 + 4LL * (v5 * (unsigned int)(unsigned __int16)v2 + 1));
  }
  else
  {
    v2 = (unsigned __int16)v2;
    *(_WORD *)(a1 + 2) = 1;
  }
  if ( (_DWORD)v2 == -1 )
  {
LABEL_8:
    *(_WORD *)a1 = -1;
    goto LABEL_5;
  }
  v3 = KeNodeBlock[v2];
LABEL_5:
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  return RtlCopyVolatileMemory((void *)(a1 + 16), (const void *)(v3 + 16), 0x10uLL);
}
