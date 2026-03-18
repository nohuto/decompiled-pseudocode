/*
 * XREFs of ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x18022CFF0
 * Callers:
 *     ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x180030FEC (-AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CRenderTargetManager::EnsureDxDisplayModeChangedEvent(CRenderTargetManager *this)
{
  signed int v1; // ebx
  void **v2; // rdi
  signed int LastError; // eax
  HANDLE v4; // rax
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (void **)((char *)this + 696);
  SecurityDescriptor = 0LL;
  if ( ((*((_QWORD *)this + 87) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventAttributes.lpSecurityDescriptor = 0LL;
    *(_QWORD *)&EventAttributes.nLength = 24LL;
    EventAttributes.bInheritHandle = 0;
    *(&EventAttributes.bInheritHandle + 1) = 0;
    SetLastError(0);
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
    {
      v4 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v2,
        v4);
    }
    else
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x1Cu, 0LL);
    }
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
  }
  return (unsigned int)v1;
}
