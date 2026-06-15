/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E3AC
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800333C4 (--1CProcess@@MEAA@XZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800342C8 (-Cleanup@CProcess@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800174C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
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
    if ( a2 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 19,
        0LL);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
