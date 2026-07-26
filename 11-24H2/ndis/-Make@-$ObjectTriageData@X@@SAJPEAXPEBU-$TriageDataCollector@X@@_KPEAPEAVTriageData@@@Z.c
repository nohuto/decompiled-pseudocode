/*
 * XREFs of ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x1400988D0
 * Callers:
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x140098B08 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 * Callees:
 *     ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x1400017B0 (--$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA-AV-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@.c)
 *     ??4?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140091364 (--4-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@Q.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140092D7C (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140092DB4 (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140092DE0 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@X@@CAJPEBU?$TriageDataCollector@X@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@X@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@X@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400987E8 (-DuplicateCollectorsArray@-$ObjectTriageData@X@@CAJPEBU-$TriageDataCollector@X@@_KAEAV-$unique_a.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E4B78 (-Register@TriageData@@IEAAJXZ.c)
 */

__int64 ObjectTriageData<void>::Make(void *a1, _DWORD *a2, ...)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rcx
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v9; // eax
  ULONG v10; // ebx
  __int64 *SizedPoolPtr; // rax
  PKTRIAGE_DUMP_DATA_ARRAY v12; // rdi
  unsigned int v13; // ebx
  __int64 Pool2; // rax
  struct TriageData *v15; // rbx
  unsigned int v16; // eax
  void *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  void *v19; // [rsp+50h] [rbp+20h] BYREF
  PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray; // [rsp+60h] [rbp+30h] BYREF
  va_list KtriageDumpDataArraya; // [rsp+60h] [rbp+30h]
  TriageData *v22; // [rsp+68h] [rbp+38h] BYREF
  va_list va1; // [rsp+68h] [rbp+38h]
  va_list va2; // [rsp+70h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(KtriageDumpDataArraya, a2);
  KtriageDumpDataArray = va_arg(va1, PKTRIAGE_DUMP_DATA_ARRAY);
  va_copy(va2, va1);
  v22 = va_arg(va2, TriageData *);
  v19 = a1;
  ndisGlobalTriageData = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v17 = 0LL;
  LODWORD(v2) = 0;
  v18 = 0LL;
  v3 = 0LL;
  KtriageDumpDataArray = 0LL;
  v4 = a2;
  v22 = 0LL;
  do
  {
    v5 = v2 + *v4;
    if ( v5 < (unsigned int)v2 )
      goto LABEL_17;
    ++v3;
    v2 = v5;
    v4 += 4;
  }
  while ( v3 < 9 );
  v7 = ObjectTriageData<void>::DuplicateCollectorsArray(a2, (size_t)a2, &v17);
  if ( v7 )
  {
    wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
      (TriageData **)va1,
      0LL);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
      (void **)KtriageDumpDataArraya,
      0LL);
    wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v17);
    return v7;
  }
  v9 = 16 * v2;
  if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF && v9 + 48 >= v9 )
  {
    v10 = v9 + 48;
    SizedPoolPtr = MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(&v19, v6, v9 + 48);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::operator=(
      (__int64)KtriageDumpDataArraya,
      SizedPoolPtr);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&v19, 0LL);
    v12 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      v13 = KeInitializeTriageDumpDataArray(KtriageDumpDataArray, v10);
      if ( v13 )
      {
LABEL_16:
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          (TriageData **)va1,
          0LL);
        wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
          (void **)KtriageDumpDataArraya,
          0LL);
        wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v17);
        return v13;
      }
      Pool2 = ExAllocatePool2(64LL, 112LL, 1918133326LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = v12;
        KtriageDumpDataArray = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)(Pool2 + 64) = 0;
        *(_QWORD *)(Pool2 + 72) = Pool2;
        *(_QWORD *)(Pool2 + 80) = ObjectTriageData<void>::Callback;
        *(_QWORD *)Pool2 = &ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
        *(_QWORD *)(Pool2 + 88) = v17;
        *(_QWORD *)(Pool2 + 96) = v18;
        *(_BYTE *)(Pool2 + 60) = 0;
        v17 = 0LL;
        v18 = 0LL;
        *(_QWORD *)(Pool2 + 104) = 0LL;
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          (TriageData **)va1,
          (TriageData *)Pool2);
        v15 = v22;
        v16 = TriageData::Register(v22);
        if ( !v16 )
        {
          v22 = 0LL;
          ndisGlobalTriageData = v15;
          wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
            (TriageData **)va1,
            0LL);
          wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
            (void **)KtriageDumpDataArraya,
            0LL);
          wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v17);
          return 0LL;
        }
        v13 = v16;
        goto LABEL_16;
      }
    }
    v13 = -1073741670;
    goto LABEL_16;
  }
LABEL_17:
  wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
    (TriageData **)va1,
    0LL);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
    (void **)KtriageDumpDataArraya,
    0LL);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v17);
  return 3221225621LL;
}
