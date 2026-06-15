/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008AAE8
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A820 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndp.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005E0D0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140088F64 (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // esi
  void *v7; // rdx
  int v8; // r8d
  CSpatialCrossProcessServerInputEndpoint *v9; // rax
  volatile int *v10; // rdi
  int v11; // eax
  int v12; // ecx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = (void *)AERTGetDLLRTHeap();
  v9 = (CSpatialCrossProcessServerInputEndpoint *)AERTAllocate(0x5F8uLL, v7, v8);
  if ( v9 )
    v10 = (volatile int *)ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    ATL::SafeIncrementReferenceMultiThread(v10 + 362);
    v11 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v10 + 364));
    v12 = 0;
    if ( v11 < 0 )
      v12 = v11;
    v6 = 0;
    if ( v12 < 0 )
      v6 = v12;
    ATL::SafeDecrementReferenceMultiThread(v10 + 362);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(volatile int *, __int64, _QWORD *))v10)(v10, a2, a3)) != 0 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 1LL);
  }
  return v6;
}
