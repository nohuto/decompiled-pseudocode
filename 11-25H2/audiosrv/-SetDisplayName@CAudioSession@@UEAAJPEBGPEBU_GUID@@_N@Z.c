/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18006CA60
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
__int64 __fastcall CAudioSession::SetDisplayName(CAudioSession *this, char *a2, const struct _GUID *a3, char a4)
{
  const struct _GUID *v4; // r14
  CAudioSession *v6; // rdi
  int v7; // ebx
  char *v8; // rax
  char *v9; // rdx
  unsigned __int16 v10; // cx
  int v11; // eax
  __int64 v13; // r8
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v16[10])(_QWORD, __int64 *); // [rsp+28h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+10h] BYREF
  const struct _GUID *v19; // [rsp+90h] [rbp+18h]
  int v20; // [rsp+98h] [rbp+20h]

  v19 = a3;
  v4 = a3;
  v6 = this;
  v7 = 0;
  if ( a4 )
    *((_BYTE *)this + 229) = 1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v8 = (char *)*((_QWORD *)this + 31);
  v9 = (char *)(a2 - v8);
  while ( 1 )
  {
    v10 = *(_WORD *)v8;
    if ( *(_WORD *)v8 != *(_WORD *)&v9[(_QWORD)v8] )
      break;
    v8 += 2;
    if ( !v10 )
    {
      v11 = 0;
      goto LABEL_8;
    }
  }
  v11 = v10 < *(_WORD *)&v9[(_QWORD)v8] ? -1 : 1;
LABEL_8:
  if ( v11 && (a4 || !*((_BYTE *)v6 + 229)) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)v6 + 7);
    try
    {
      v18 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 280);
      v7 = 0;
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v6 + 31, a2, v13);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v14 = v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v14;
      v6 = this;
      v4 = v19;
      v7 = v20;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    if ( v7 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 181, v7);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v6 + 8LL))(v6);
      v16[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionDisplayNameChanged::`vftable';
      v16[1] = (void (__fastcall **)(_QWORD, __int64 *))v6;
      v16[2] = *((void (__fastcall ***)(_QWORD, __int64 *))v6 + 31);
      v16[3] = (void (__fastcall **)(_QWORD, __int64 *))v4;
      CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)v6 + 432),
        v16);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v7;
}
