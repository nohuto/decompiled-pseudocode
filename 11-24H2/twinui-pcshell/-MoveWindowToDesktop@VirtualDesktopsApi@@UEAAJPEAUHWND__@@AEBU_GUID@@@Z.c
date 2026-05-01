/*
 * XREFs of ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x180231020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801DA278 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopsApi::MoveWindowToDesktop(VirtualDesktopsApi *this, HWND a2, const struct _GUID *a3)
{
  int CallingProcessHandle; // ebx
  __int64 v7; // rdx
  DWORD ProcessId; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HWND, __int128 *, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  int v13; // eax
  RTL_SRWLOCK *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD dwProcessId; // [rsp+78h] [rbp+10h] BYREF
  HANDLE Process; // [rsp+88h] [rbp+20h] BYREF

  if ( !a2 )
  {
    CallingProcessHandle = -2147024809;
    v7 = 99LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  dwProcessId = 0;
  GetWindowThreadProcessId(a2, &dwProcessId);
  ProcessId = 0;
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v9, 0, &Process);
  if ( CallingProcessHandle >= 0 )
    ProcessId = GetProcessId(Process);
  CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
  if ( CallingProcessHandle < 0 )
  {
    v7 = 105LL;
    goto LABEL_3;
  }
  if ( dwProcessId != ProcessId )
  {
    CallingProcessHandle = -2147024891;
    v7 = 108LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11), v15);
  v10 = *((_QWORD *)this + 10);
  v11 = *(__int64 (__fastcall **)(__int64, HWND, __int128 *, ULONGLONG))(*(_QWORD *)v10 + 32LL);
  TickCount64 = GetTickCount64();
  v16 = (__int128)*a3;
  v13 = v11(v10, a2, &v16, TickCount64);
  CallingProcessHandle = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v15);
  return (unsigned int)CallingProcessHandle;
}
