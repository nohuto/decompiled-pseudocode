/*
 * XREFs of ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804119D8
 * Callers:
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180412E00 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x180412E90 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180410BDC (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180412C40 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804130F8 (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::HandleViewReady(RTL_SRWLOCK *this, int a2, __int64 a3)
{
  HWND v6; // rbx
  int v7; // eax
  _QWORD *v8; // r8
  PVOID Ptr; // rdi
  __int64 (__fastcall *v10)(PVOID, RTL_SRWLOCK **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // r8
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IApplicationView *v17; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+40h] BYREF
  RTL_SRWLOCK *v19; // [rsp+68h] [rbp+48h] BYREF

  wil::AcquireSRWLockExclusive(&v18, this + 16);
  *(_BYTE *)(*(_QWORD *)a3 + 56LL) = 1;
  *(_DWORD *)(*(_QWORD *)a3 + 40LL) = a2;
  v6 = (HWND)~a2;
  *(_QWORD *)(*(_QWORD *)a3 + 48LL) = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)a3 + 72LL));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  if ( (int)PeoplePaneViewManager::FindPendingViewByHwnd(this, v6, &v17) < 0 )
    goto LABEL_14;
  wil::AcquireSRWLockExclusive(&v19, this + 20);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(*(_QWORD *)a3 + 32LL), &v17);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 32LL) + 56LL))(*(_QWORD *)(*(_QWORD *)a3 + 32LL));
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x367,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = *(_QWORD **)a3;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 24LL) > 7uLL )
    v8 = (_QWORD *)*v8;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v8, *(unsigned int *)(*(_QWORD *)a3 + 40LL));
  v18 = 0LL;
  Ptr = this[43].Ptr;
  v10 = *(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK **))(*(_QWORD *)Ptr + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v11 = v10(Ptr, &v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v18 == (RTL_SRWLOCK *)v17 )
    {
      v13 = *(_QWORD **)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 24LL) > 7uLL )
        v13 = (_QWORD *)*v13;
      PeoplePaneViewManager::NotifyListeners(this, 2LL, v13, *(unsigned int *)(*(_QWORD *)a3 + 40LL));
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
    v14 = PeoplePaneViewManager::RemovePendingView((PeoplePaneViewManager *)this, v17);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x376,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_15;
    }
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36F,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return v12;
}
