/*
 * XREFs of ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140092030
 * Callers:
 *     ndisRegisterMiniportTriageData @ 0x140092A7C (ndisRegisterMiniportTriageData.c)
 * Callees:
 *     ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x1400017B0 (--$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA-AV-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@.c)
 *     ??4?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140091364 (--4-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@Q.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140091DEC (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140092D7C (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140092DB4 (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140092DE0 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E4B78 (-Register@TriageData@@IEAAJXZ.c)
 */

__int64 __fastcall ObjectTriageData<_NDIS_MINIPORT_BLOCK>::Make(
        __int64 a1,
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
  __int64 v16; // r8
  PKTRIAGE_DUMP_DATA_ARRAY v17; // rsi
  unsigned int v18; // ebx
  __int64 Pool2; // rax
  __int64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rax
  TriageData *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  void *v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10h]
  TriageData *v28; // [rsp+70h] [rbp+30h] BYREF
  PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray; // [rsp+78h] [rbp+38h] BYREF

  v28 = a3;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v26 = 0LL;
  LODWORD(v6) = 0;
  v27 = 0LL;
  v7 = a2;
  KtriageDumpDataArray = 0LL;
  v28 = 0LL;
  for ( i = 0LL; i < 0x23; ++i )
  {
    v9 = v6 + *v7;
    if ( v9 < (unsigned int)v6 )
      goto LABEL_18;
    v6 = v9;
    v7 += 4;
  }
  v11 = ObjectTriageData<_NDIS_MINIPORT_BLOCK>::DuplicateCollectorsArray(a2, (size_t)a2, &v26);
  if ( v11 )
  {
    wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
      &v28,
      0LL,
      i);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&KtriageDumpDataArray, 0LL);
    wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v26);
    return v11;
  }
  v13 = 16 * v6;
  if ( (unsigned __int64)(16 * v6) <= 0xFFFFFFFF && v13 + 48 >= v13 )
  {
    v14 = v13 + 48;
    SizedPoolPtr = MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(&v25, v10, v13 + 48);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::operator=(
      (__int64)&KtriageDumpDataArray,
      SizedPoolPtr);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&v25, 0LL);
    v17 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      v18 = KeInitializeTriageDumpDataArray(KtriageDumpDataArray, v14);
      if ( v18 )
      {
LABEL_17:
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          &v28,
          0LL,
          v16);
        wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
          &KtriageDumpDataArray,
          0LL);
        wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v26);
        return v18;
      }
      Pool2 = ExAllocatePool2(64LL, 112LL, 1918133326LL);
      v20 = Pool2;
      if ( Pool2 )
      {
        KtriageDumpDataArray = 0LL;
        *(_QWORD *)(Pool2 + 8) = v17;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)(Pool2 + 64) = v18;
        *(_QWORD *)(Pool2 + 72) = Pool2;
        *(_QWORD *)(Pool2 + 80) = ObjectTriageData<_NDIS_MINIPORT_BLOCK>::Callback;
        *(_QWORD *)Pool2 = &ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
        v21 = v26;
        v26 = 0LL;
        *(_QWORD *)(v20 + 88) = v21;
        v22 = v27;
        v27 = 0LL;
        *(_QWORD *)(v20 + 96) = v22;
        *(_BYTE *)(v20 + 60) = v18;
        *(_QWORD *)(v20 + 104) = a1;
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          &v28,
          v20,
          v16);
        v23 = v28;
        v24 = TriageData::Register(v28);
        if ( !v24 )
        {
          v28 = 0LL;
          *a4 = v23;
          wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
            &v28,
            0LL,
            v16);
          wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
            &KtriageDumpDataArray,
            0LL);
          wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v26);
          return 0LL;
        }
        v18 = v24;
        goto LABEL_17;
      }
    }
    v18 = -1073741670;
    goto LABEL_17;
  }
LABEL_18:
  wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
    &v28,
    0LL,
    i);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&KtriageDumpDataArray, 0LL);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v26);
  return 3221225621LL;
}
