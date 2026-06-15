/*
 * XREFs of ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x18010C5EC
 * Callers:
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x18010F8A0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180004168 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CA334 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::GetAudioEffectsChangedWnfStateName(CVADServer *this, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct AudioSrvTelemetryProvider *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v14; // [rsp+38h] [rbp-38h] BYREF
  int v15[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16 = *((_OWORD *)this + 16);
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  if ( *((_QWORD *)this + 22) )
  {
    if ( *((_DWORD *)this + 40) )
    {
      v6 = AudioSrvTelemetryProvider::Instance();
      v7 = (_DWORD *)*((_QWORD *)v6 + 1);
      if ( *v7 > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 512LL) )
      {
        v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
        *(_QWORD *)v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL) + 80LL))(*((_QWORD *)this + 22) + 8LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          (int)v7,
          (int)&unk_1801ADB6B,
          v8,
          v9,
          (__int64)v15,
          &v14);
      }
      v10 = *((_QWORD *)this + 22);
      if ( *(_BYTE *)(v10 + 356)
        || (v11 = CAudioStream::SetUpAudioEffectsChangedWnfState((CAudioStream *)v10), v4 = v11, v11 >= 0) )
      {
        *a2 = *(_QWORD *)(v10 + 348);
        v4 = 0;
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6BD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v11);
      v5 = 2379LL;
    }
    else
    {
      v4 = -2004287487;
      v5 = 2370LL;
    }
  }
  else
  {
    v4 = -2004287487;
    v5 = 2369LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v4);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  EtwEventActivityIdControl(4LL, &v17);
  return v4;
}
