/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopApplicationViewEventListener@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801AA7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopApplicationViewEventListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v5; // r8d
  int v6; // eax
  int v7; // ebx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v26; // [rsp+70h] [rbp+30h] BYREF

  if ( !a3 )
  {
    v26 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v26);
    if ( v7 >= 0 )
    {
      if ( !v26 )
        return 0LL;
      goto LABEL_19;
    }
    v14 = 47LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 232LL))(*(_QWORD *)(a1 + 48), a2);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v6);
    goto LABEL_5;
  }
  v9 = v5 - 4;
  if ( !v9 )
  {
    v20 = *(_QWORD *)(a1 + 80);
    if ( !v20 )
      return 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 88LL))(v20);
    if ( v7 >= 0 )
      return 0LL;
    v14 = 90LL;
    goto LABEL_17;
  }
  v10 = v9 - 2;
  if ( !v10 || (v11 = v10 - 1) == 0 )
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
           *(_QWORD *)(a1 + 64),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           a2);
LABEL_5:
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    return (unsigned int)v7;
  }
  v12 = v11 - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 6 )
        return 0LL;
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 456LL))(*(_QWORD *)(a1 + 48), a2);
      v7 = v21;
      if ( v21 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v21);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 224LL))(*(_QWORD *)(a1 + 48), a2);
      v7 = v22;
      if ( v22 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v22);
    }
    goto LABEL_35;
  }
LABEL_19:
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
  v15 = *(_QWORD *)(a1 + 80);
  if ( v15 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 80LL))(v15, a2);
    v7 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v23);
LABEL_35:
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(SRWLock);
      return (unsigned int)v7;
    }
  }
  v16 = *(_QWORD *)(a1 + 72);
  v17 = *(int (__fastcall **)(__int64, __int64, ULONGLONG))(*(_QWORD *)v16 + 40LL);
  TickCount64 = GetTickCount64();
  if ( v17(v16, a2, TickCount64) < 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 208LL))(*(_QWORD *)(a1 + 48), a2);
    v7 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v19);
    goto LABEL_5;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(SRWLock);
  return 0LL;
}
