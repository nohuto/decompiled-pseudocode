/*
 * XREFs of HalpHvInitMcaPcrContext @ 0x1404CE1F8
 * Callers:
 *     HalpMceInit @ 0x140B68694 (HalpMceInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404015D0 (KeGetCurrentProcessorNumberEx.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpHvQueryAssociatedProcessors @ 0x14054B798 (HalpHvQueryAssociatedProcessors.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void HalpHvInitMcaPcrContext()
{
  KPCR *Pcr; // rdi
  __int64 v1; // rcx
  ULONG CurrentProcessorNumber; // r15d
  size_t v3; // rbx
  void *v4; // rax
  _DWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 McaPcrContext; // r14
  unsigned int i; // edi
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // ebp
  int v24; // r15d
  __int64 v25; // rax
  __int64 j; // rbx
  unsigned int v27; // [rsp+70h] [rbp+8h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h]

  v27 = 0;
  Pcr = KeGetPcr();
  v29 = 0LL;
  ProcNumber = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(&ProcNumber);
    if ( !CurrentProcessorNumber && !HalpHvVpMcaPcrContextData )
    {
      v3 = 192 * KeQueryMaximumProcessorCountEx(0xFFFFu);
      v4 = (void *)HalpMmAllocCtxAlloc(v3, v3);
      HalpHvVpMcaPcrContextData = (__int64)v4;
      if ( !v4 )
        KeBugCheckEx(0xACu, (unsigned int)v3, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4CAuLL);
      memset_0(v4, 0, v3);
    }
    if ( !*(_QWORD *)&Pcr->HalReserved[6] )
    {
      v5 = 0LL;
      v6 = HalpHvQueryAssociatedProcessors(v1, &v27, 0LL);
      if ( v6 == -1073741789 )
      {
        v10 = 8 * v27;
        Pool2 = ExAllocatePool2(0x40uLL);
        v5 = (_DWORD *)Pool2;
        if ( !Pool2 )
          KeBugCheckEx(0xACu, v10, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4E5uLL);
        v6 = HalpHvQueryAssociatedProcessors(v12, &v27, Pool2);
      }
      if ( v6 < 0 || !v27 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4F1uLL);
      v13 = 0;
      v29 = *v5 & 0x7FFFFFFF;
      v14 = v29;
      McaPcrContext = HalpGetMcaPcrContext(v29, v7, v8, v9);
      *(_QWORD *)(McaPcrContext + 172) = v14;
      *(_QWORD *)(McaPcrContext + 184) = 0LL;
      *(_QWORD *)&Pcr->HalReserved[6] = McaPcrContext;
      for ( i = 1; i < v27; McaPcrContext = v22 )
      {
        v13 &= ~1u;
        v20 = (unsigned int)v5[i];
        LODWORD(v20) = v20 & 0x7FFFFFFF;
        v29 = __PAIR64__(v13, v20);
        v21 = __PAIR64__(v13, v20);
        v22 = HalpGetMcaPcrContext(__SPAIR64__(v13, v20), v20, v16, v17);
        ++i;
        *(_QWORD *)(v22 + 184) = 0LL;
        *(_QWORD *)(v22 + 172) = v21;
        *(_QWORD *)(McaPcrContext + 184) = v22;
      }
      v23 = v13 | 1;
      v24 = CurrentProcessorNumber & 0x7FFFFFFF;
      v29 = __PAIR64__(v23, v24);
      v25 = HalpGetMcaPcrContext(__SPAIR64__(v23, v24), v15, v16, v17);
      *(_QWORD *)(v25 + 184) = 0LL;
      *(_QWORD *)(v25 + 172) = __PAIR64__(v23, v24);
      *(_QWORD *)(McaPcrContext + 184) = v25;
      ExFreePoolWithTag(v5, 0x486C6148u);
    }
    for ( j = *(_QWORD *)&KeGetPcr()->HalReserved[6]; j; j = *(_QWORD *)(j + 184) )
    {
      if ( !*(_BYTE *)(j + 160) )
      {
        *(_DWORD *)(j + 48) = 275;
        *(_QWORD *)(j + 72) = HalpCmciDeferredRoutine;
        *(_QWORD *)(j + 80) = j;
        *(_QWORD *)(j + 104) = 0LL;
        *(_QWORD *)(j + 64) = 0LL;
        KeSetTargetProcessorDpcEx((PKDPC)(j + 48), &ProcNumber);
        *(_BYTE *)(j + 160) = 1;
      }
    }
  }
}
