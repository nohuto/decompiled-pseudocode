/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180025FC4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Do_call @ 0x1800710F0 (std--_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_--_Do_call.c)
 * Callees:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180026200 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x180026414 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(CAudioSession *this)
{
  int v2; // esi
  __int64 v3; // rcx
  const WCHAR *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v8[3]; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  __int64 v10; // [rsp+50h] [rbp-21h] BYREF
  __int64 v11; // [rsp+58h] [rbp-19h]
  unsigned __int16 *v12; // [rsp+68h] [rbp-9h] BYREF
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  void *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  const WCHAR *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]

  CAudioSession::PruneTerminatedOwningProcesses(this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
  Context = 0LL;
  fPending = 0;
  v2 = CAudioSession::StateCheckExpired(this);
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v10 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    LODWORD(v11) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v10);
  }
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = (const WCHAR *)*((_QWORD *)this + 82);
    v8[0] = v2;
    v21 = v8;
    v22 = 4LL;
    if ( v4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = 2 * v5 + 2;
    }
    else
    {
      v4 = &LocaleName;
      v6 = 2;
    }
    v19 = v6;
    v12 = *(unsigned __int16 **)(v3 + 8);
    v18 = v4;
    v11 = 512LL;
    v20 = 0;
    v10 = 0x40B000000LL;
    v13 = *v12;
    v15 = &unk_18019FD86;
    v14 = 2;
    v16 = 62;
    v17 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v3 + 32), &v10, 0LL, 0LL, 4, &v12);
  }
  if ( this != (CAudioSession *)-544LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
}
