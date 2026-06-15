/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180026528
 * Callers:
 *     _lambda_e84261e39c6833060792dde3988d9fd4_::operator() @ 0x180017168 (_lambda_e84261e39c6833060792dde3988d9fd4_--operator().c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x18006F290 (-OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180026820 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18002794C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x180027958 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B3D80 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  __int64 v2; // r13
  signed int v3; // edi
  _WorkTask *v4; // rax
  unsigned int v5; // edx
  _WorkTask *v6; // rsi
  _WorkTask *v7; // rbx
  _QWORD *v8; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // r15
  volatile signed __int32 *v12; // rdi
  __int64 v13; // r15
  _BYTE *v14; // rdx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE *v17; // [rsp+20h] [rbp-69h]
  _QWORD v18[7]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD *v19; // [rsp+60h] [rbp-29h]
  _BYTE v20[56]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE *v21; // [rsp+A0h] [rbp+17h]
  _DWORD *v22; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v2 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v18[0] = off_180177EE8;
  v18[1] = this;
  v19 = v18;
  v3 = 0;
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v2 + 80) )
  {
    v3 = CSerialWorkQueue::Initialize((CSerialWorkQueue *)v2);
    if ( v3 >= 0 )
    {
      v4 = (_WorkTask *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v4;
      if ( v4 )
      {
        *(_QWORD *)v4 = 0LL;
        *((_QWORD *)v4 + 1) = 0LL;
        *((_QWORD *)v4 + 2) = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      v7 = v6;
      if ( v6 )
      {
        v21 = 0LL;
        if ( v19 )
          v21 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v19)(v19, v20);
        v17 = v20;
        *((_QWORD *)v6 + 2) = v2;
        ProcessHeap = GetProcessHeap();
        v10 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
        v11 = v10;
        v22 = v10;
        if ( v10 )
        {
          *(_OWORD *)v10 = 0LL;
          v10[2] = 1;
          v10[3] = 1;
          *(_QWORD *)v10 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
          std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v10 + 4, v20);
        }
        else
        {
          v11 = 0LL;
        }
        *(_QWORD *)v6 = v11 + 4;
        v12 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
        *((_QWORD *)v6 + 1) = v11;
        if ( v12 )
        {
          if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
            if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          }
          v7 = v6;
        }
        v13 = *(_QWORD *)v6;
        v3 = *(_QWORD *)v6 == 0LL ? 0x8007000E : 0;
        if ( v21 )
        {
          v14 = v20;
          LOBYTE(v14) = v21 != v20;
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v14);
          v21 = 0LL;
        }
        if ( !v13 )
          goto LABEL_11;
        ThreadpoolWork = CreateThreadpoolWork(
                           (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                           v6,
                           (PTP_CALLBACK_ENVIRON)(v2 + 8));
        if ( ThreadpoolWork )
        {
          v3 = 0;
        }
        else
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          if ( v3 < 0 )
            goto LABEL_11;
        }
        v7 = 0LL;
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        v3 = -2147024882;
      }
LABEL_11:
      if ( v7 )
        _WorkTask::`scalar deleting destructor'(v7, v5);
    }
  }
  if ( v19 )
  {
    v8 = v18;
    LOBYTE(v8) = v19 != v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 32LL))(v19, v8);
    v19 = 0LL;
  }
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD99,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3,
      (int)v17);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
}
