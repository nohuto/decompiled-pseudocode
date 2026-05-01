/*
 * XREFs of ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1804985D0
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804986D0 (-VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x1804986E0 (-VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18003CA58 (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180093468 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::UpdateDesktopIndex(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rbp
  __int64 result; // rax
  PVOID v4; // rdi
  __int64 (__fastcall *v5)(PVOID, HSTRING *); // rbx
  int v6; // eax
  HSTRING v7; // r8
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 35);
  Ptr = this[18].Ptr;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  result = VirtualDesktop::CalculateDesktopIndex((VirtualDesktop *)this);
  if ( (int)result >= 0 )
  {
    string = 0LL;
    v4 = this[14].Ptr;
    v5 = *(__int64 (__fastcall **)(PVOID, HSTRING *))(*(_QWORD *)v4 + 40LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(v4, &string);
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)string,
                            0LL,
                            v7)
        && this[18].Ptr != Ptr )
      {
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
          this + 11,
          (__int64)this,
          1);
      }
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v6);
    }
    WindowsDeleteString(string);
    return v8;
  }
  return result;
}
