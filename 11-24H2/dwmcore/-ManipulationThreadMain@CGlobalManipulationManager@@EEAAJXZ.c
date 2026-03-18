/*
 * XREFs of ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800EC7B0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800EC6C8 (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800ECA50 (-UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     IsRegisterManipulationThreadPresent @ 0x180251E88 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain(
        CGlobalManipulationManager *this,
        __int64 a2,
        __int64 a3)
{
  struct IMessageSession **v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  signed int LastError; // eax
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_STARTUP,
      a3,
      1u,
      &v13);
  v4 = (struct IMessageSession **)((char *)this + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  v5 = CoreUICreateEx(1LL, (char *)this + 24);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT(v5, retaddr);
  EnterCriticalSection(&stru_1803F91B8);
  byte_1803F91B4 = 0;
  LeaveCriticalSection(&stru_1803F91B8);
  EnterCriticalSection(&stru_1803F9178);
  byte_1803F9174 = 0;
  LeaveCriticalSection(&stru_1803F9178);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT(LastError, retaddr);
    }
    CGlobalManipulationManager::UpdateMMCSSTask(this);
    v7 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v4,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CGlobalManipulationManager *)((char *)this + 32));
    if ( v7 < 0 )
      ModuleFailFastForHRESULT(v7, retaddr);
    v8 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
           *v4,
           qword_1803FAC38,
           lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_,
           this);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    v9 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
           *v4,
           CManipulationManager::s_rghWaitEvents,
           lambda_efd5facd022cf831717386964e02a8d7_::_lambda_invoker_cdecl_,
           this);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT(v9, retaddr);
    v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
            *v4,
            hEvent,
            lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_,
            this);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT(v10, retaddr);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v4 + 232LL))(*v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_CLEANUP,
      v6,
      1u,
      &v13);
  return 0LL;
}
