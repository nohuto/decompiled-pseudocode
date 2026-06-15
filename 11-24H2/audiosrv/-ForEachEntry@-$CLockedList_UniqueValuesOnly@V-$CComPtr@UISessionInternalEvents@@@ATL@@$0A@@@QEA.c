/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18000BA10 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18001DD6C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180021B50 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180025490 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18005EC00 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800608E0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180077AA0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_9219152d4e141db21e4330029f5108f8_::operator() @ 0x1800C0C0C (_lambda_9219152d4e141db21e4330029f5108f8_--operator().c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800C2D20 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU34@@Z @ 0x1800258F0 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x180025924 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISess.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x18009E828 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // r13
  char *v13; // rsi
  __int64 *v14; // rdi
  __int64 *i; // rsi
  void (__fastcall *v16)(_QWORD, __int64 *); // r14
  _QWORD *v17; // rcx
  __int64 *j; // rbx
  const struct std::nothrow_t *v19; // r12
  char *v20; // rax
  __int64 result; // rax
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  LPCRITICAL_SECTION v26; // [rsp+80h] [rbp+18h]

  v22 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v26 = lpCriticalSection;
    v8 = 0LL;
    if ( &v22 == (__int128 *)&lpCriticalSection[1] )
    {
      v14 = (__int64 *)*((_QWORD *)&v22 + 1);
    }
    else
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      v10 = (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (_QWORD)DebugInfo) >> 4;
      if ( v10 )
      {
        if ( v10 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_25;
        v25 = (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
        v8 = std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v6, &v25);
        v12 = (__int64 *)v8;
        *(_QWORD *)&v22 = v8;
        v4 = v8 + 16 * v10;
        v23 = v4;
        v13 = (char *)DebugInfo - v8;
        do
        {
          std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry &>(
            v11,
            v8,
            &v13[v8]);
          v8 += 16LL;
          --v10;
        }
        while ( v10 );
        std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
          v8,
          v8);
        v14 = (__int64 *)v8;
        *((_QWORD *)&v22 + 1) = v8;
        goto LABEL_8;
      }
      v8 = 0LL;
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
        0LL,
        0LL);
      v14 = 0LL;
      *((_QWORD *)&v22 + 1) = 0LL;
    }
    v12 = (__int64 *)v22;
LABEL_8:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = v12; i != (__int64 *)v8; i += 2 )
    {
      v16 = **a2;
      v17 = (_QWORD *)*i;
      v25 = (__int64)v17;
      if ( v17 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v17 + 8LL))(v17, *v17);
      v16(a2, &v25);
    }
    if ( v12 )
    {
      for ( j = v12; j != v14; j += 2 )
      {
        v6 = *j;
        if ( *j )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v19 = (const struct std::nothrow_t *)((v4 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = (char *)v12;
      if ( (unsigned __int64)v19 >= 0x1000 )
      {
        v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
        v12 = (__int64 *)*(v12 - 1);
        if ( (unsigned __int64)(v20 - (char *)v12 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v6, v5);
LABEL_25:
          std::_Xlength_error("vector too long");
        }
      }
      operator delete(v12, v19);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                     v7);
    return (unsigned int)v25;
  }
  return result;
}
