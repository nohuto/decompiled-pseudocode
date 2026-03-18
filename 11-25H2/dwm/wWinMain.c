/*
 * XREFs of wWinMain @ 0x140002790
 * Callers:
 *     __scrt_common_main_seh @ 0x140004D30 (__scrt_common_main_seh.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400031A0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003428 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x1400034E8 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400036A4 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x1400037F0 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     McGenEventRegister_EtwEventRegister @ 0x140004B28 (McGenEventRegister_EtwEventRegister.c)
 *     IsImmDisableIMEPresent @ 0x1400062D8 (IsImmDisableIMEPresent.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  signed int v7; // ebx
  HRESULT v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  CDwmAppHost *v14; // rcx
  CDwmAppHost *v15; // rcx
  CDwmAppHost *v16; // rcx
  int v17; // r9d
  unsigned int v19; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ProcessInformation[0] = 1;
  _set_error_mode(1);
  ModifyTokenPrivileges();
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v19 = 151;
      goto LABEL_31;
    }
  }
  SetErrorMode(0xC001u);
  v8 = WerSetFlags(0x20u);
  v7 = 0;
  if ( v8 != -2147467263 )
    v7 = v8;
  if ( v7 < 0 )
  {
    v19 = 167;
    goto LABEL_31;
  }
  v9 = WerSetMaxProcessHoldMilliseconds(5000LL);
  v7 = 0;
  if ( v9 != -2147467263 )
    v7 = v9;
  if ( v7 < 0 )
  {
    v19 = 171;
LABEL_31:
    v17 = v7;
    goto LABEL_32;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v10 = GetLastError();
    v7 = v10;
    if ( v10 > 0 )
      v7 = (unsigned __int16)v10 | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    v19 = 181;
    goto LABEL_31;
  }
  v11 = DXGIDeclareAdapterRemovalSupport();
  v7 = v11;
  if ( v11 < 0 )
  {
    v19 = 184;
    goto LABEL_25;
  }
  McGenEventRegister_EtwEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v12,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context);
  McGenEventRegister_EtwEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v13,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context);
  v11 = CheckForDwmGroupSid();
  v7 = v11;
  if ( v11 < 0 )
  {
    v19 = 190;
    goto LABEL_25;
  }
  v11 = CDwmAppHost::Initialize(v14, hInstance);
  v7 = v11;
  if ( v11 < 0 )
  {
    v19 = 192;
    goto LABEL_25;
  }
  v11 = CDwmAppHost::Run(v15);
  v7 = v11;
  if ( v11 < 0 )
  {
    v19 = 194;
LABEL_25:
    v17 = v11;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140013170, 5u, v17, v19, 0LL);
  }
  CDwmAppHost::Shutdown(v16, v7);
  return v7;
}
