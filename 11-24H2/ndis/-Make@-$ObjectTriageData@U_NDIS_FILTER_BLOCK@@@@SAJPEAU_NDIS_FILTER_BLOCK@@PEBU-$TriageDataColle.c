/*
 * XREFs of ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140097F34
 * Callers:
 *     ndisRegisterFilterTriageData @ 0x140098178 (ndisRegisterFilterTriageData.c)
 * Callees:
 *     ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x1400017B0 (--$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA-AV-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@.c)
 *     ??4?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140091364 (--4-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@Q.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140092D7C (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140092DB4 (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140092DE0 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140097E4C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU-$TriageDataCollector.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E4B78 (-Register@TriageData@@IEAAJXZ.c)
 */

__int64 __fastcall ObjectTriageData<_NDIS_FILTER_BLOCK>::Make(
        _LIST_ENTRY *a1,
        _DWORD *a2,
        TriageData *a3,
        TriageData **a4)
{
  __int64 v6; // rbx
  _DWORD *v7; // rcx
  unsigned __int64 i; // r8
  unsigned int v9; // r9d
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v13; // eax
  ULONG v14; // ebx
  __int64 *SizedPoolPtr; // rax
  PKTRIAGE_DUMP_DATA_ARRAY v16; // rsi
  unsigned int v17; // ebx
  __int64 Pool2; // rax
  TriageData *v19; // rdx
  TriageData_vtbl *v20; // rax
  _KTRIAGE_DUMP_DATA_ARRAY *v21; // rax
  TriageData *v22; // rbx
  unsigned int v23; // eax
  void *v24; // [rsp+20h] [rbp-20h] BYREF
  TriageData_vtbl *v25; // [rsp+28h] [rbp-18h] BYREF
  _KTRIAGE_DUMP_DATA_ARRAY *v26; // [rsp+30h] [rbp-10h]
  TriageData *v27; // [rsp+70h] [rbp+30h] BYREF
  PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray; // [rsp+78h] [rbp+38h] BYREF

  v27 = a3;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v25 = 0LL;
  LODWORD(v6) = 0;
  v26 = 0LL;
  v7 = a2;
  KtriageDumpDataArray = 0LL;
  v27 = 0LL;
  for ( i = 0LL; i < 8; ++i )
  {
    v9 = v6 + *v7;
    if ( v9 < (unsigned int)v6 )
      goto LABEL_18;
    v6 = v9;
    v7 += 4;
  }
  v11 = ObjectTriageData<_NDIS_FILTER_BLOCK>::DuplicateCollectorsArray(a2, (size_t)a2, (void **)&v25);
  if ( v11 )
  {
    wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
      &v27,
      0LL);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
      (void **)&KtriageDumpDataArray,
      0LL);
    wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v25);
    return v11;
  }
  v13 = 16 * v6;
  if ( (unsigned __int64)(16 * v6) <= 0xFFFFFFFF && v13 + 48 >= v13 )
  {
    v14 = v13 + 48;
    SizedPoolPtr = MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(&v24, v10, v13 + 48);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::operator=(
      (__int64)&KtriageDumpDataArray,
      SizedPoolPtr);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&v24, 0LL);
    v16 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      v17 = KeInitializeTriageDumpDataArray(KtriageDumpDataArray, v14);
      if ( v17 )
      {
LABEL_17:
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          &v27,
          0LL);
        wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
          (void **)&KtriageDumpDataArray,
          0LL);
        wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v25);
        return v17;
      }
      Pool2 = ExAllocatePool2(64LL, 112LL, 1918133326LL);
      v19 = (TriageData *)Pool2;
      if ( Pool2 )
      {
        KtriageDumpDataArray = 0LL;
        *(_QWORD *)(Pool2 + 8) = v16;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)(Pool2 + 64) = 0;
        *(_QWORD *)(Pool2 + 72) = Pool2;
        *(_QWORD *)(Pool2 + 80) = ObjectTriageData<_NDIS_FILTER_BLOCK>::Callback;
        *(_QWORD *)Pool2 = &ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
        v20 = v25;
        v25 = 0LL;
        v19[1].__vftable = v20;
        v21 = v26;
        v26 = 0LL;
        v19[1].m_triageDumpDataArray.__ptr_.__value_ = v21;
        v19->m_callbackRecord.State = 0;
        v19[1].m_callbackRecord.Entry.Flink = a1;
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          &v27,
          v19);
        v22 = v27;
        v23 = TriageData::Register(v27);
        if ( !v23 )
        {
          v27 = 0LL;
          *a4 = v22;
          wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
            &v27,
            0LL);
          wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
            (void **)&KtriageDumpDataArray,
            0LL);
          wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v25);
          return 0LL;
        }
        v17 = v23;
        goto LABEL_17;
      }
    }
    v17 = -1073741670;
    goto LABEL_17;
  }
LABEL_18:
  wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
    &v27,
    0LL);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
    (void **)&KtriageDumpDataArray,
    0LL);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v25);
  return 3221225621LL;
}
