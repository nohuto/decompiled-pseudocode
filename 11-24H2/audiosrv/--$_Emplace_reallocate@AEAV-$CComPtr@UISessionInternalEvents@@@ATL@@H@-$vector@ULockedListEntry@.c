/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x180044A94
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044CC0 (-AddInterface@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU34@@Z @ 0x1800258F0 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x180025924 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISess.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x180044A38 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionIn.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x180044D84 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCal.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x18009E828 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<ISessionInternalEvents> &,int>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rsi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r15
  _QWORD *v19; // r14
  char *v21; // [rsp+28h] [rbp-40h]
  _QWORD *v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v7 = a2 - *a1;
  v8 = (a1[1] - *a1) >> 4;
  v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v10;
  }
  v22 = (_QWORD *)v9;
  v13 = (_QWORD *)std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v11, &v22);
  v14 = (char *)v13 + (v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = v14;
  std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
    v15,
    v14,
    a3,
    a4,
    v9);
  v22 = v14;
  v17 = a1[1];
  v18 = *a1;
  if ( v23 == v17 )
  {
    v19 = v13;
    while ( v18 != v17 )
    {
      std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry &>(
        v16,
        (__int64)v19,
        v18);
      v19 += 2;
      v18 += 16LL;
    }
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
      v19,
      v19);
    v14 = v21;
  }
  else
  {
    std::_Uninitialized_move<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
      *a1,
      v23,
      v13);
    v22 = v13;
    std::_Uninitialized_move<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
      v23,
      a1[1],
      (_QWORD *)v14 + 2);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
      (_QWORD *)*a1,
      (_QWORD *)a1[1]);
    std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *a1 = (__int64)v13;
  a1[1] = (__int64)&v13[2 * v10];
  a1[2] = (__int64)&v13[2 * v9];
  return v14;
}
