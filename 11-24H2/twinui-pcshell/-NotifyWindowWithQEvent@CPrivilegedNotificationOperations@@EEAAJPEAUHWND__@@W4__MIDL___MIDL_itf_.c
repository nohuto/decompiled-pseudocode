/*
 * XREFs of ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18005E830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18005DC10 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x18005DED8 (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

__int64 __fastcall CPrivilegedNotificationOperations::NotifyWindowWithQEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  RTL_SRWLOCK *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // ebx
  signed int Error; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp+8h] BYREF

  v8 = a3;
  v9 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(v9 + 16) )
  {
    Init_thread_header(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE = RegisterWindowMessageW(
                                                                                                L"{9993b795-bae5-4752-a837-faa5985c808d}");
      Init_thread_footer(&__TSS0__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  if ( __TSS1__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA > *(_DWORD *)(v9 + 16) )
  {
    Init_thread_header(&__TSS1__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    if ( __TSS1__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA == -1 )
    {
      dword_1808C7404 = `CPrivilegedNotificationOperations::NotifyWindowWithQEvent'::`2'::WM_SHELLAPPACTIVATE;
      Init_thread_footer(&__TSS1__1__NotifyWindowWithQEvent_CPrivilegedNotificationOperations__EEAAJPEAUHWND____W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001___K_J_Z_4HA);
    }
  }
  v16 = *(RTL_SRWLOCK **)(a1 + 48);
  v10 = v16;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v16);
  AcquireSRWLockExclusive(v10 + 6);
  EnableIAMAccess(v10[5].Ptr, 1LL);
  v11 = a5 | 0x10;
  if ( (_DWORD)v8 )
    v11 = a5;
  if ( (unsigned int)SendEventMessage(a2, dword_1808C73EC[2 * v8], a4, v11) )
  {
    v12 = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v12 = Error;
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x148,
        (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)Error);
  }
  IamAccess::SyncIamAccess::~SyncIamAccess(&v16);
  return v12;
}
