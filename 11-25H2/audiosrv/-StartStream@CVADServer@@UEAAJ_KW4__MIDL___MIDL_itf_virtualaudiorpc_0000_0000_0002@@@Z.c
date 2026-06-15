/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180063540
 * Callers:
 *     AudioServerStartStream @ 0x180063370 (AudioServerStartStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x1801083CC (-StartStream_Internal@CVADServer@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, unsigned __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // r9
  int v13; // eax
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v17 = v3;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 1730LL;
    goto LABEL_10;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = -2004287487;
    v9 = 1731LL;
    goto LABEL_10;
  }
  v10 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 264LL))(
              *(_QWORD *)(a1 + 144),
              *(_QWORD *)(a1 + 176),
              0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a1 + 164) = 1;
        if ( _InterlockedCompareExchange(&g_PoBlockAudioPlayback, 1, 1)
          || (started = CVADServer::StartStream_Internal((CVADServer *)a1), v8 = started, started >= 0) )
        {
          v8 = 0;
          goto LABEL_18;
        }
        v12 = (unsigned int)started;
        v9 = 1746LL;
      }
      else
      {
        v12 = (unsigned int)v13;
        v9 = 1738LL;
      }
      goto LABEL_11;
    }
    v8 = -2147418113;
    v9 = 1735LL;
LABEL_10:
    v12 = v8;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12);
    goto LABEL_18;
  }
  v8 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v8 = v11;
  }
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v8;
}
