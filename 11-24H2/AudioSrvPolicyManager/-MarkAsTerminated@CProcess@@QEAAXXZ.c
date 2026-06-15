/*
 * XREFs of ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000DA10 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::MarkAsTerminated(CProcess *this)
{
  volatile signed __int32 *v2; // rsi
  volatile int *v3; // rdx
  volatile int *v4; // rdx
  Microsoft::WRL::Details *v5; // rcx
  int v6; // eax
  __int64 i; // rcx
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  volatile signed __int32 *v14; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+88h] [rbp+28h] BYREF

  v2 = (volatile signed __int32 *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v14 = v2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  v15 = (volatile signed __int32 *)((char *)this + 368);
  if ( *((_QWORD *)this + 51) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        47LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        *((unsigned int *)this + 40));
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      *((_QWORD *)this + 51),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  if ( this != (CProcess *)-368LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  *((_DWORD *)this + 104) = 2;
  v15 = (volatile signed __int32 *)this;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)this + 20), v3);
  Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, v4);
  v12[0] = (__int64)off_18004F688;
  v14 = 0LL;
  v12[1] = (__int64)this;
  v12[7] = (__int64)v12;
  v6 = QueueGenericWorkItem(v12);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE70,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6,
      v12[0]);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v15);
  if ( v2 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v14 = (volatile signed __int32 *)((char *)this + 592);
  if ( *((_QWORD *)this + 80) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 162); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i) )
      {
        _mm_lfence();
        v8 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
        while ( v8 )
        {
          v9 = v8;
          if ( *(_QWORD *)(v8 + 16) )
          {
            v8 = *(_QWORD *)(v8 + 16);
          }
          else
          {
            v10 = *((_DWORD *)this + 162);
            LODWORD(v11) = *(_DWORD *)(v8 + 24) % v10;
            do
            {
              v11 = (unsigned int)(v11 + 1);
              v8 = 0LL;
              if ( (unsigned int)v11 >= v10 )
                break;
              v8 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * v11);
            }
            while ( !v8 );
          }
          (*(void (__fastcall **)(_QWORD, CProcess *, _QWORD))(**(_QWORD **)(v9 + 8) + 24LL))(
            *(_QWORD *)(v9 + 8),
            this,
            *(_QWORD *)v9);
        }
        break;
      }
    }
  }
  if ( this != (CProcess *)-592LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
}
