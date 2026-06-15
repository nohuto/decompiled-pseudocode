/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001C6D8
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180029340 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002AA90 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@U_RecurringTask@@@std@@$0A@@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001D17C (--$-4U-$default_delete@U_RecurringTask@@@std@@$0A@@-$unique_ptr@U_RecurringTask@@U-$default_dele.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D25C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x1800530FC (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::StartInactiveTimer(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r12
  _QWORD *v5; // r14
  signed int v6; // ebx
  PTP_POOL Threadpool; // rax
  signed int v8; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v10; // eax
  PTP_TIMER *v11; // rax
  PTP_TIMER *v12; // rdi
  _QWORD *v13; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  volatile signed __int32 *v17; // r14
  _BYTE *v18; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v20; // rsi
  signed int LastError; // eax
  signed int v22; // eax
  _QWORD v23[7]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-21h]
  _BYTE v25[56]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE *v26; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct _FILETIME pftDueTime; // [rsp+E8h] [rbp+6Fh] BYREF
  PTP_TIMER *v29; // [rsp+F0h] [rbp+77h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v3 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v23[0] = off_18016E308;
  v23[1] = this;
  v24 = v23;
  v4 = *((unsigned int *)this + 60);
  v5 = 0LL;
  v6 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(v3 + 80) )
    goto LABEL_19;
  if ( *(_QWORD *)v3 )
  {
LABEL_13:
    v11 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v29 = v12;
    if ( v12 )
    {
      v26 = 0LL;
      if ( v24 )
        v26 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v24)(v24, v25);
      v12[3] = (PTP_TIMER)v3;
      ProcessHeap = GetProcessHeap();
      v15 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v16 = v15;
      if ( v15 )
      {
        v15[2] = 1;
        v15[3] = 1;
        *(_QWORD *)v15 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v15 + 4, v25);
      }
      else
      {
        v16 = 0LL;
      }
      v12[1] = (PTP_TIMER)(v16 + 4);
      v17 = (volatile signed __int32 *)v12[2];
      v12[2] = (PTP_TIMER)v16;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
      v5 = v12[1];
      v6 = v5 == 0LL ? 0x8007000E : 0;
      if ( v26 )
      {
        v18 = v25;
        LOBYTE(v18) = v26 != v25;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v26 + 32LL))(v26, v18);
        v26 = 0LL;
      }
      if ( !v5 )
        goto LABEL_17;
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                          v12,
                          (PTP_CALLBACK_ENVIRON)(v3 + 8));
      v20 = ThreadpoolTimer;
      v5 = 0LL;
      if ( ThreadpoolTimer )
      {
        v6 = 0;
        *v12 = ThreadpoolTimer;
      }
      else
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        *v12 = 0LL;
        if ( v6 < 0 )
          goto LABEL_17;
      }
      pftDueTime = (struct _FILETIME)(-10000 * v4);
      SetThreadpoolTimer(v20, &pftDueTime, 0, 0);
      std::unique_ptr<_RecurringTask>::operator=<std::default_delete<_RecurringTask>,0>((char *)this + 536, &v29);
    }
    else
    {
      v6 = -2147024882;
    }
LABEL_17:
    if ( v29 )
      std::default_delete<_RecurringTask>::operator()();
    goto LABEL_19;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)v3 = Threadpool;
  if ( Threadpool )
    goto LABEL_11;
  v22 = GetLastError();
  v6 = v22;
  if ( v22 > 0 )
    v6 = (unsigned __int16)v22 | 0x80070000;
  if ( v6 >= 0 )
  {
LABEL_11:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)v3, 1u) )
      goto LABEL_51;
    v8 = GetLastError();
    v6 = v8;
    if ( v8 > 0 )
      v6 = (unsigned __int16)v8 | 0x80070000;
    if ( v6 >= 0 )
    {
LABEL_51:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(v3 + 120) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
        goto LABEL_12;
      v10 = GetLastError();
      v6 = v10;
      if ( v10 > 0 )
        v6 = (unsigned __int16)v10 | 0x80070000;
      if ( v6 >= 0 )
      {
LABEL_12:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)v3, 1u);
        *(_QWORD *)(v3 + 16) = *(_QWORD *)v3;
        *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 120);
        *(_QWORD *)(v3 + 32) = 0LL;
        goto LABEL_13;
      }
    }
  }
LABEL_19:
  if ( v24 )
  {
    v13 = v23;
    LOBYTE(v13) = v24 != v23;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v13);
    v24 = v5;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDB9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6,
      v23[0]);
  if ( v2 )
    LeaveCriticalSection(v2);
}
