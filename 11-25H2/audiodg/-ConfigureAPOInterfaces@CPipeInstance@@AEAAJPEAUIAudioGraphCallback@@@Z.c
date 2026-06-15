/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400052C4
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400594C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  const struct _tlgProvider_t *v17; // rax
  _QWORD *v19; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-128h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 16);
      v6 = *(_QWORD *)(v6 + 8);
      if ( *(_DWORD *)(v7 + 40) == 2 && ((unsigned int)(*((_DWORD *)this + 28) - 2) <= 1 || !**(_DWORD **)(v7 + 32)) )
        v4 = (unsigned int)(v4 + 1);
    }
    while ( v6 );
    if ( (_DWORD)v4 )
    {
      v8 = 8LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 8uLL) )
        v8 = -1LL;
      v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
      v5 = v9;
      if ( !v9 )
      {
        v16 = -2147024882;
LABEL_38:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0x1165u, v16);
        return (unsigned int)v16;
      }
      memset_0(v9, 0, 8 * v4);
      v10 = 0LL;
      v11 = *((_QWORD *)this + 3);
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        v11 = *(_QWORD *)(v11 + 8);
        if ( *(_DWORD *)(v12 + 40) == 2 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          if ( ((unsigned int)(*((_DWORD *)this + 28) - 2) <= 1 || !*(_DWORD *)v13)
            && (unsigned int)v10 < (unsigned int)v4 )
          {
            v14 = &v5[v10];
            if ( v14 )
            {
              *v14 = *(_QWORD *)(v13 + 40);
              v15 = *(_QWORD *)(v13 + 40);
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
              v16 = 0;
            }
            else
            {
              v16 = -2147467261;
            }
            if ( v16 < 0 )
              goto LABEL_27;
            v10 = (unsigned int)(v10 + 1);
          }
        }
      }
    }
  }
  v17 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v17, "Pipe_InitializeAPOs", 0LL);
  v16 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CPipeInstance *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 24LL))(
          a2,
          this,
          (unsigned int)v4,
          v5);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  if ( v5 )
  {
LABEL_27:
    if ( (_DWORD)v4 )
    {
      v19 = v5;
      do
      {
        if ( *v19 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 16LL))(*v19);
          *v19 = 0LL;
        }
        ++v19;
        --v4;
      }
      while ( v4 );
    }
    operator delete(v5);
  }
  if ( v16 < 0 )
    goto LABEL_38;
  return (unsigned int)v16;
}
