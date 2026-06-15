/*
 * XREFs of ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180108548
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180064650 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?EnsureStreamStopped@CVADServer@@QEAAJXZ @ 0x180105F44 (-EnsureStreamStopped@CVADServer@@QEAAJXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18005F088 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     _lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator() @ 0x180105814 (_lambda_9779933831ecf7631e1f1e31bfa66ff4_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::StopStream_Internal(struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD *OwningThread; // rdi
  int (__fastcall *v5)(_QWORD *, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  int v15; // [rsp+90h] [rbp+28h] BYREF
  int v16; // [rsp+98h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+38h] BYREF
  const WCHAR *v18; // [rsp+A8h] [rbp+40h] BYREF

  v12 = this;
  v13 = 1;
  if ( this[4].LockCount != 1 )
  {
LABEL_11:
    v3 = 0;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(HANDLE, HANDLE))(*(_QWORD *)this[3].LockSemaphore + 232LL))(
         this[3].LockSemaphore,
         this[4].OwningThread);
  v3 = v2;
  if ( v2 >= 0 )
  {
    this[4].LockCount = 0;
    v17 = 0LL;
    OwningThread = this[4].OwningThread;
    if ( OwningThread )
    {
      if ( this[3].LockSemaphore )
      {
        v5 = *(int (__fastcall **)(_QWORD *, __int64 *))(OwningThread[1] + 24LL);
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v17);
        if ( v5(OwningThread + 1, &v17) >= 0 )
        {
          v6 = AudioSrvTelemetryProvider::Instance();
          v7 = (_DWORD *)*((_QWORD *)v6 + 1);
          if ( *v7 > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 512LL) )
          {
            v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
            v18 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this[3].LockSemaphore + 1) + 64LL))((__int64)this[3].LockSemaphore + 8);
            v11 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this[4].OwningThread + 1) + 80LL))((__int64)this[4].OwningThread + 8);
            v16 = *((unsigned __int8 *)this[4].OwningThread + 136);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (__int64)v7,
              byte_1801A2EE3,
              v8,
              v9,
              (__int64)&v16,
              (__int64)&v11,
              &v18,
              (__int64)&v15);
          }
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x797,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  v13 = 0;
  lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator()(&v12);
  return v3;
}
