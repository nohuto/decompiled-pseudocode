/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18002794C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x180027958 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B3D80 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x1800C36CC (WPP_SF_qdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  bool v3; // di
  __int64 v4; // r15
  signed int v5; // edi
  PTP_POOL Threadpool; // rax
  signed int v7; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v9; // eax
  __int64 *v10; // rax
  __int64 *v11; // r14
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rax
  unsigned int v14; // edx
  _DWORD *v15; // rbp
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rsi
  _BYTE *v18; // rdx
  struct _TP_WORK *ThreadpoolWork; // rsi
  _QWORD *v20; // rdx
  signed int v22; // eax
  signed int LastError; // eax
  int v24; // [rsp+20h] [rbp-B8h]
  _QWORD v25[7]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-70h]
  _BYTE v27[56]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE *v28; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedAdd((volatile signed __int32 *)this + 83, 0xFFFFFFFF) == 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 82, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 256LL))(this);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids);
    }
LABEL_7:
    if ( this )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v4 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    if ( this )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v25[0] = off_180177EE8;
    v25[1] = this;
    v26 = v25;
    v5 = 0;
    if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(v4 + 80) )
      goto LABEL_40;
    if ( !*(_QWORD *)v4 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v4 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        if ( v5 < 0 )
          goto LABEL_40;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v4, 1u) )
      {
        v7 = GetLastError();
        v5 = v7;
        if ( v7 > 0 )
          v5 = (unsigned __int16)v7 | 0x80070000;
        if ( v5 < 0 )
          goto LABEL_40;
      }
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(v4 + 120) = ThreadpoolCleanupGroup;
      if ( !ThreadpoolCleanupGroup )
      {
        v9 = GetLastError();
        v5 = v9;
        if ( v9 > 0 )
          v5 = (unsigned __int16)v9 | 0x80070000;
        if ( v5 < 0 )
          goto LABEL_40;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v4, 1u);
      *(_QWORD *)(v4 + 16) = *(_QWORD *)v4;
      *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 120);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    v10 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( !v10 )
    {
      v5 = -2147024882;
      goto LABEL_40;
    }
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v28 = 0LL;
    if ( v26 )
      v28 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v26)(v26, v27);
    v11[2] = v4;
    ProcessHeap = GetProcessHeap();
    v13 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v15 = v13;
    if ( v13 )
    {
      v13[2] = 1;
      v13[3] = 1;
      *(_QWORD *)v13 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
      std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v13 + 4, v27);
    }
    else
    {
      v15 = 0LL;
    }
    *v11 = (__int64)(v15 + 4);
    v16 = (volatile signed __int32 *)v11[1];
    v11[1] = (__int64)v15;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = *v11;
    v5 = -2147024882;
    if ( *v11 )
      v5 = 0;
    if ( v28 )
    {
      v18 = v27;
      LOBYTE(v18) = v28 != v27;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v18);
      v28 = 0LL;
    }
    if ( v17 )
    {
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v11,
                         (PTP_CALLBACK_ENVIRON)(v4 + 8));
      if ( ThreadpoolWork )
      {
        v5 = 0;
LABEL_39:
        SubmitThreadpoolWork(ThreadpoolWork);
LABEL_40:
        if ( v26 )
        {
          v20 = v25;
          LOBYTE(v20) = v26 != v25;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v20);
          v26 = 0LL;
        }
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xD99,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v5,
            v24);
        if ( this )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
        return 0LL;
      }
      v22 = GetLastError();
      v5 = v22;
      if ( v22 > 0 )
        v5 = (unsigned __int16)v22 | 0x80070000;
      if ( v5 >= 0 )
        goto LABEL_39;
    }
    _WorkTask::`scalar deleting destructor'((_WorkTask *)v11, v14);
    goto LABEL_40;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      this,
      *((_DWORD *)this + 82),
      *((_DWORD *)this + 83));
  }
  if ( v3 )
    goto LABEL_7;
  return 0LL;
}
