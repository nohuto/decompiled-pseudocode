/*
 * XREFs of ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x180079A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CProcessSubmixManager::AllowOffloadStreamsForProcess(
        CProcessSubmixManager *this,
        struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  LPCWCH **v5; // rbx
  const WCHAR *v6; // rax
  bool v7; // zf
  unsigned int v8; // ebp
  LPCWCH *v9; // rbp
  LPCWCH *v11; // rbp
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (LPCWCH **)*((_QWORD *)this + 7);
  v12 = v2;
  while ( v5 != *((LPCWCH ***)this + 8) )
  {
    if ( *((_DWORD *)*v5 + 3) == 1 )
    {
      v11 = *v5;
      if ( *((_DWORD *)v11 + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
        || !*((_DWORD *)v11 + 2) )
      {
        goto LABEL_19;
      }
      v7 = *((_DWORD *)*v5 + 2) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      goto LABEL_18;
    }
    if ( *((_DWORD *)*v5 + 3) != 2 )
    {
      if ( *((_DWORD *)*v5 + 3) == 3 )
      {
        if ( *((_DWORD *)*v5 + 4) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2) )
          goto LABEL_19;
        v8 = *((_DWORD *)*v5 + 2);
        if ( v8 == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
          goto LABEL_19;
        v7 = (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(a2, v8) == 0;
      }
      else
      {
        if ( *((_DWORD *)*v5 + 3) != 4 )
          goto LABEL_19;
        v6 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(**v5, -1, v6, -1, 1) != 2 )
          goto LABEL_19;
        v7 = *((_DWORD *)*v5 + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
      }
LABEL_18:
      if ( v7 )
        goto LABEL_14;
      goto LABEL_19;
    }
    v9 = *v5;
    if ( *((_DWORD *)v9 + 4) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
           a2,
           *((unsigned int *)v9 + 2)) )
    {
LABEL_14:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
      return 0;
    }
LABEL_19:
    ++v5;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 1;
}
