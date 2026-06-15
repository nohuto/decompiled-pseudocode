/*
 * XREFs of ?LogState@CApplicationManager@@QEAAXXZ @ 0x180011340
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_::_Do_call @ 0x18001A560 (std--_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     atexit @ 0x18002065C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180028744 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::LogState(CApplicationManager *this)
{
  CApplicationManager *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r10
  _WORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  _WORD *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  _DWORD *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  v1 = g_ApplicationManager;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = (_QWORD *)*((_QWORD *)v1 + 9);
  if ( v3 )
  {
    do
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      Context = 0LL;
      fPending = 0;
      if ( InitOnceBeginInitialize(
             &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v18 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_180064990;
        qword_180064998 = 0LL;
        byte_1800649A0 = 0;
        dword_1800649A4 = 0;
        qword_180064990 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
        qword_1800649A8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
        v19 = 0;
        wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v18);
      }
      v5 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 4) != 0 && (*(_QWORD *)(v5 + 24) & 4LL) == *(_QWORD *)(v5 + 24) )
      {
        v10 = -1;
        v11 = -1;
        v12 = -1;
        v13[0] = *(_DWORD *)(v4 + 208) != 0;
        v15 = *(_QWORD *)(v4 + 696);
        v6 = *(_WORD **)(v4 + 24);
        v35 = &v10;
        v36 = 4LL;
        v33 = &v11;
        v34 = 4LL;
        v31 = &v12;
        v32 = 4LL;
        v29 = v13;
        v30 = 4LL;
        v27 = &v15;
        v28 = 8LL;
        if ( v6 )
        {
          v7 = -1LL;
          do
            ++v7;
          while ( v6[v7] );
          v8 = 2 * v7 + 2;
        }
        else
        {
          v6 = &unk_1800537F0;
          v8 = 2;
        }
        v24 = v6;
        v25 = v8;
        v26 = 0;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 4LL;
        UserData.Ptr = *(_QWORD *)(v5 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v21 = &unk_180057BB9;
        v22 = 123;
        v23 = 1;
        v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
      }
    }
    while ( v3 );
    v2 = v16;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
