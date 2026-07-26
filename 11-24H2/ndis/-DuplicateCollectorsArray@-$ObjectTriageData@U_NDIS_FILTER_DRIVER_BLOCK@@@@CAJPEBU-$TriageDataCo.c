/*
 * XREFs of ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140099C9C
 * Callers:
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140099D84 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140092D7C (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ObjectTriageData<_NDIS_FILTER_DRIVER_BLOCK>::DuplicateCollectorsArray(
        void *Src,
        size_t a2,
        void **a3)
{
  unsigned int v5; // edi
  void *Pool2; // rdi
  __int64 v7; // rax
  void *v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h]
  size_t Size; // [rsp+58h] [rbp+28h] BYREF

  Size = a2;
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)a3);
  v9 = 0LL;
  v10 = 0LL;
  Size = 0LL;
  v5 = RtlULongLongMult(3uLL, 0x10uLL, &Size);
  if ( !v5 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, Size, 1094935630LL);
    if ( Pool2 )
    {
      wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v9);
      v9 = Pool2;
      v10 = 3LL;
      memmove(Pool2, Src, Size);
      if ( a3 != &v9 )
      {
        wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)a3);
        v7 = (__int64)a3[1];
        v9 = *a3;
        v10 = v7;
        *a3 = Pool2;
        a3[1] = (void *)3;
      }
      v5 = 0;
    }
    else
    {
      v5 = -1073741670;
    }
  }
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v9);
  return v5;
}
