/*
 * XREFs of HalpMcaInitializePcrContext @ 0x140B4BDB0
 * Callers:
 *     HalpWheaInitSystem @ 0x140B4D4E0 (HalpWheaInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404015D0 (KeGetCurrentProcessorNumberEx.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

int HalpMcaInitializePcrContext()
{
  KPCR *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  void *v3; // rax
  KPCR *Pcr; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  LODWORD(v0) = KeGetCurrentProcessorNumberEx(&ProcNumber);
  v1 = (unsigned int)v0;
  if ( !(_DWORD)v0 && !HalpMcaPcrContextData )
  {
    v2 = 192 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    v3 = (void *)HalpMmAllocCtxAlloc(v2, v2);
    HalpMcaPcrContextData = (__int64)v3;
    if ( !v3 )
      KeBugCheckEx(0xACu, (unsigned int)v2, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x228uLL);
    LODWORD(v0) = (unsigned int)memset_0(v3, 0, v2);
  }
  Pcr = KeGetPcr();
  if ( !HalpHvWheaEnlightenedCpuManager )
  {
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      v5 = HalpMcaPcrContextData + 192 * v1;
      *(_QWORD *)&Pcr->HalReserved[6] = v5;
      *(_QWORD *)(v5 + 184) = 0LL;
      *(_DWORD *)(v5 + 172) = v1;
    }
    v0 = KeGetPcr();
    v6 = *(_QWORD *)&v0->HalReserved[6];
    if ( !*(_BYTE *)(v6 + 160) )
    {
      KeInitializeDpc((PRKDPC)(v6 + 48), (PKDEFERRED_ROUTINE)HalpCmciDeferredRoutine, *(PVOID *)&v0->HalReserved[6]);
      LODWORD(v0) = KeSetTargetProcessorDpcEx((PKDPC)(v6 + 48), &ProcNumber);
      *(_BYTE *)(v6 + 160) = 1;
    }
  }
  return (int)v0;
}
