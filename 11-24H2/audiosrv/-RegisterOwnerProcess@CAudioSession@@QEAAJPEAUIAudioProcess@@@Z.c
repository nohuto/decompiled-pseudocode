/*
 * XREFs of ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18001D850
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18001BD04 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$_Emplace_back_with_unused_capacity@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAAEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@$$QEAV21@@Z @ 0x18003F82C (--$_Emplace_back_with_unused_capacity@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSession::RegisterOwnerProcess(CAudioSession *this, struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IAudioProcess *v14; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioProcess *v15; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+80h] [rbp+18h] BYREF

  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v16 = v3;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)v15 + 24LL))();
    v5 = v4;
    if ( v4 >= 0 )
    {
      v14 = v15;
      if ( v15 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 8LL))(v15);
      v8 = *((_QWORD *)this + 89);
      v9 = (__int64 *)((char *)this + 704);
      if ( v8 == *((_QWORD *)this + 90) )
        std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
          v9,
          v8,
          (__int64 *)&v14);
      else
        std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_back_with_unused_capacity<std::unique_ptr<CAppSubmixClient>>(
          v9,
          &v14);
      if ( v14 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( *((_BYTE *)this + 728) )
        *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 96LL))(v15) != 0;
      v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v10 > 4u
        && (*(_DWORD *)(v10 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v10 + 24) & 0x200LL) == *(_QWORD *)(v10 + 24) )
      {
        LODWORD(v14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 40LL))(v15);
        v16 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 82);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v10,
          (unsigned int)&unk_1801AA978,
          v11,
          v12,
          (__int64)&v16,
          (__int64)&v14);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x763,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v4);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x77F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
