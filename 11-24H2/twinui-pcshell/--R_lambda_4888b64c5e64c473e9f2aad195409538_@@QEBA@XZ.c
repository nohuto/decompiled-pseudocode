/*
 * XREFs of ??R_lambda_4888b64c5e64c473e9f2aad195409538_@@QEBA@XZ @ 0x180559C28
 * Callers:
 *     ?Run@?$CTaskWrapper@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180559F90 (-Run@-$CTaskWrapper@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_4888b64c5e64c473e9f2aad195409538_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  PVOID Ptr; // rdi
  __int64 (__fastcall *v7)(PVOID, _QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v14, *a1 + 4);
  v2 = *a1;
  if ( !LOBYTE((*a1)[5].Ptr) )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  v12 = 0;
  v3 = (*(__int64 (__fastcall **)(PVOID, unsigned int *))(*(_QWORD *)v2[3].Ptr + 24LL))(v2[3].Ptr, &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    for ( i = 0; i < v12; ++i )
    {
      v13 = 0LL;
      Ptr = (*a1)[3].Ptr;
      v7 = *(__int64 (__fastcall **)(PVOID, _QWORD, GUID *, __int64 *))(*(_QWORD *)Ptr + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      v8 = v7(Ptr, i, &GUID_6cafd3f1_05d1_4d26_a32a_9907a72c920b, &v13);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v13 + 24LL))(v13, (*a1)[1].Ptr, (*a1)[2].Ptr);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x53,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    }
    v9 = DwmpEndTransitionRequest(90LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
    (const char *)(unsigned int)v3);
LABEL_12:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  return v4;
}
