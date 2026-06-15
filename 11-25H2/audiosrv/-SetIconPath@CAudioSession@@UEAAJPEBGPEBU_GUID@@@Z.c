/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18006F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000CC20 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180029220 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(struct _RTL_CRITICAL_SECTION *this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx
  __int64 *p_OwningThread; // rsi
  __int64 v8; // rax
  char *v9; // rdx
  unsigned __int16 v10; // cx
  int v11; // eax
  __int64 v13; // r8
  int *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+20h] [rbp-58h] BYREF
  ATL::CAtlException *v16; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v17[9])(_QWORD, __int64 *); // [rsp+30h] [rbp-48h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  p_OwningThread = (__int64 *)&this[6].OwningThread;
  v20 = (__int64 *)&this[6].OwningThread;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v8 = *p_OwningThread;
  v9 = &a2[-*p_OwningThread];
  while ( 1 )
  {
    v10 = *(_WORD *)v8;
    if ( *(_WORD *)v8 != *(_WORD *)&v9[v8] )
      break;
    v8 += 2LL;
    if ( !v10 )
    {
      v11 = 0;
      goto LABEL_6;
    }
  }
  v11 = v10 < *(_WORD *)&v9[v8] ? -1 : 1;
LABEL_6:
  if ( v11 )
  {
    EnterCriticalSection(v5 + 7);
    try
    {
      v15 = v5 + 7;
      v6 = 0;
      ATL::CSimpleStringT<unsigned short,0>::SetString(p_OwningThread, a2, v13);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = (int *)v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v14;
      p_OwningThread = v20;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 305, v6);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      v17[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionIconPathChanged::`vftable';
      v17[1] = (void (__fastcall **)(_QWORD, __int64 *))v5;
      v17[2] = (void (__fastcall **)(_QWORD, __int64 *))*p_OwningThread;
      v17[3] = (void (__fastcall **)(_QWORD, __int64 *))v3;
      CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 432),
        v17);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
    }
  }
  return (unsigned int)v6;
}
