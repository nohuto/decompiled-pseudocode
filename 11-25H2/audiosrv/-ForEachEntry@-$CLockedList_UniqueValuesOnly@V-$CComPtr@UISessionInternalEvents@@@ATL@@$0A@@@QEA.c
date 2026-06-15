/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000CC20
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000CEA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001D668 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002AA90 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002D430 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18002D71C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18006CA60 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18006F6E0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180089300 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::operator() @ 0x1800C25D4 (_lambda_c1484885cbbce228ad1e61609886ff14_--operator().c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800C40C0 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@AEAU34@@Z @ 0x18000CE20 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x18000CE54 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISess.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x1800A22C8 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 v7; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD **v11; // r13
  char *v12; // rsi
  _QWORD *v13; // rdi
  _QWORD **i; // rsi
  void (__fastcall *v15)(_QWORD, __int64 *); // r14
  _QWORD *v16; // rcx
  _QWORD *j; // rbx
  const struct std::nothrow_t *v18; // r12
  char *v19; // rax
  __int64 result; // rax
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  LPCRITICAL_SECTION v25; // [rsp+80h] [rbp+18h]

  v21 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v25 = lpCriticalSection;
    v7 = 0LL;
    if ( &v21 == (__int128 *)&lpCriticalSection[1] )
    {
      v13 = (_QWORD *)*((_QWORD *)&v21 + 1);
    }
    else
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      v9 = (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (_QWORD)DebugInfo) >> 4;
      if ( v9 )
      {
        if ( v9 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_25;
        v24 = (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
        v7 = std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v5, &v24);
        v11 = (_QWORD **)v7;
        *(_QWORD *)&v21 = v7;
        v4 = v7 + 16 * v9;
        v22 = v4;
        v12 = (char *)DebugInfo - v7;
        do
        {
          std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry &>(
            v10,
            v7,
            &v12[v7]);
          v7 += 16LL;
          --v9;
        }
        while ( v9 );
        std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
          v7,
          v7);
        v13 = (_QWORD *)v7;
        *((_QWORD *)&v21 + 1) = v7;
        goto LABEL_8;
      }
      v7 = 0LL;
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
        0LL,
        0LL);
      v13 = 0LL;
      *((_QWORD *)&v21 + 1) = 0LL;
    }
    v11 = (_QWORD **)v21;
LABEL_8:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = v11; i != (_QWORD **)v7; i += 2 )
    {
      v15 = **a2;
      v16 = *i;
      v24 = (__int64)v16;
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v16 + 8LL))(v16, *v16);
      v15(a2, &v24);
    }
    if ( v11 )
    {
      for ( j = v11; j != v13; j += 2 )
      {
        if ( *j )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 16LL))(*j);
      }
      v18 = (const struct std::nothrow_t *)((v4 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL);
      v19 = (char *)v11;
      if ( (unsigned __int64)v18 >= 0x1000 )
      {
        v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
        v11 = (_QWORD **)*(v11 - 1);
        if ( (unsigned __int64)(v19 - (char *)v11 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn();
LABEL_25:
          std::_Xlength_error("vector too long");
        }
      }
      operator delete(v11, v18);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                     v6);
    return (unsigned int)v24;
  }
  return result;
}
