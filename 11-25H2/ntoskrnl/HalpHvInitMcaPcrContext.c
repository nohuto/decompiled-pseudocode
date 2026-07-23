/*
 * XREFs of HalpHvInitMcaPcrContext @ 0x1404CE418
 * Callers:
 *     HalpMceInit @ 0x140B58864 (HalpMceInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403B30A0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1403F8DD0 (KeGetCurrentProcessorNumberEx.c)
 *     HalpGetMcaPcrContext @ 0x14047C738 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpHvQueryAssociatedProcessors @ 0x140548EA8 (HalpHvQueryAssociatedProcessors.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 McaPcrContext; // r14
  unsigned int i; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ebp
  int v20; // r15d
  __int64 v21; // rax
  __int64 j; // rbx
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h]

  v23 = 0;
  Pcr = KeGetPcr();
  v25 = 0LL;
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
      v6 = HalpHvQueryAssociatedProcessors(v1, &v23, 0LL);
      if ( v6 == -1073741789 )
      {
        v8 = 8 * v23;
        Pool2 = ExAllocatePool2(0x40uLL);
        v5 = (_DWORD *)Pool2;
        if ( !Pool2 )
          KeBugCheckEx(0xACu, v8, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4E5uLL);
        v6 = HalpHvQueryAssociatedProcessors(v10, &v23, Pool2);
      }
      if ( v6 < 0 || !v23 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x4F1uLL);
      v11 = 0;
      v25 = *v5 & 0x7FFFFFFF;
      v12 = v25;
      McaPcrContext = HalpGetMcaPcrContext(v25, v7);
      *(_QWORD *)(McaPcrContext + 172) = v12;
      *(_QWORD *)(McaPcrContext + 184) = 0LL;
      *(_QWORD *)&Pcr->HalReserved[6] = McaPcrContext;
      for ( i = 1; i < v23; McaPcrContext = v18 )
      {
        v11 &= ~1u;
        v16 = (unsigned int)v5[i];
        LODWORD(v16) = v16 & 0x7FFFFFFF;
        v25 = __PAIR64__(v11, v16);
        v17 = __PAIR64__(v11, v16);
        v18 = HalpGetMcaPcrContext(__SPAIR64__(v11, v16), v16);
        ++i;
        *(_QWORD *)(v18 + 184) = 0LL;
        *(_QWORD *)(v18 + 172) = v17;
        *(_QWORD *)(McaPcrContext + 184) = v18;
      }
      v19 = v11 | 1;
      v20 = CurrentProcessorNumber & 0x7FFFFFFF;
      v25 = __PAIR64__(v19, v20);
      v21 = HalpGetMcaPcrContext(__SPAIR64__(v19, v20), v13);
      *(_QWORD *)(v21 + 184) = 0LL;
      *(_QWORD *)(v21 + 172) = __PAIR64__(v19, v20);
      *(_QWORD *)(McaPcrContext + 184) = v21;
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
