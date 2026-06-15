/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x1800042D0
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180010D60 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAPEBG@Z @ 0x180003524 (--$_Construct_in_place@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std.c)
 *     ?GetUserPreferenceFromdB@CDuckingManager@@SA?AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M@Z @ 0x180004574 (-GetUserPreferenceFromdB@CDuckingManager@@SA-AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  struct TSSession *v13; // rsi
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rax
  volatile signed __int32 *v16; // rbx
  int v17; // eax
  const char *v18; // r9
  unsigned int v19; // esi
  __int64 result; // rax
  struct TSSession *v21; // [rsp+20h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v22[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+40h] [rbp-68h] BYREF
  DWORD v24; // [rsp+48h] [rbp-60h]
  volatile signed __int32 *v25; // [rsp+50h] [rbp-58h]
  volatile signed __int32 *v26; // [rsp+58h] [rbp-50h]
  float v27; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall ***v28)(); // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  DWORD v30; // [rsp+B8h] [rbp+10h]
  const unsigned __int16 *v31; // [rsp+C0h] [rbp+18h] BYREF

  v31 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v22[1] = v5;
  v30 = a2;
  v21 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v22[0] = &stru_180064A78;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)&v30 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  try
  {
    v9 = 2 * (qword_180064AD0 & v6);
    v10 = *(_QWORD *)(qword_180064AB8 + 8 * v9 + 8);
    if ( v10 == qword_180064AA8 )
    {
LABEL_7:
      v10 = 0LL;
    }
    else
    {
      while ( a2 != *(_DWORD *)(v10 + 16) )
      {
        if ( v10 == *(_QWORD *)(qword_180064AB8 + 8 * v9) )
          goto LABEL_7;
        v10 = *(_QWORD *)(v10 + 8);
      }
    }
    v11 = qword_180064AA8;
    if ( v10 )
      v11 = v10;
    if ( v11 == qword_180064AA8 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v22);
      v12 = TsSessionCreate(a2, &v21);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43A,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v12,
          (int)v21);
LABEL_17:
        if ( v5 )
          LeaveCriticalSection(v5);
        ProcessHeap = GetProcessHeap();
        v15 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
        v16 = (volatile signed __int32 *)v15;
        v22[2] = v15;
        if ( v15 )
        {
          *(_OWORD *)&v15->DebugInfo = 0LL;
          v15->LockCount = 1;
          v15->RecursionCount = 1;
          v15->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&std::_Ref_count_obj2<std::wstring>::`vftable';
          std::_Construct_in_place<std::wstring,unsigned short const * &>((__int64)&v15->OwningThread, &v31);
        }
        else
        {
          v16 = 0LL;
        }
        if ( v16 )
          _InterlockedIncrement(v16 + 2);
        v23 = off_18004F600;
        v24 = a2;
        v25 = v16 + 4;
        v26 = v16;
        v27 = a4;
        v28 = &v23;
        v17 = QueueGenericWorkItem(&v23);
        v19 = v17;
        if ( v17 >= 0 )
        {
          if ( v16 )
          {
            if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
              if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            }
          }
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x224,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
            (const char *)(unsigned int)v17,
            (int)v21);
          if ( v16 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
          return v19;
        }
      }
      v13 = v21;
    }
    else
    {
      v13 = *(struct TSSession **)(v11 + 24);
      v21 = v13;
      if ( &stru_180064A78 )
        LeaveCriticalSection(&stru_180064A78);
    }
    *((_DWORD *)v13 + 272) = CDuckingManager::GetUserPreferenceFromdB();
    goto LABEL_17;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x228,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\wind"
                                         "owspolicymanager.cpp",
                           v18);
  }
  return result;
}
