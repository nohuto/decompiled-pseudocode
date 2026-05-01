/*
 * XREFs of ?GetWindowDesktopId@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAU_GUID@@@Z @ 0x18015E460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopsApi::GetWindowDesktopId(VirtualDesktopsApi *this, HWND a2, struct _GUID *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+30h] BYREF

  *a3 = GUID_NULL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v7 = -2147019873;
    v12 = 89LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v12 = 90LL;
    goto LABEL_15;
  }
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, &v14);
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v14 + 200LL))(v14, a3);
    v7 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v10);
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
LABEL_6:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return (unsigned int)v7;
}
