/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180013630
 * Callers:
 *     TS_SessionGetAudioProtocol @ 0x180004F90 (TS_SessionGetAudioProtocol.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180005420 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180010F70 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x180013F3C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18002A2E0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800309E4 (--1CProcess@@MEAA@XZ.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18003DF84 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$3 @ 0x180049190 (_CApplicationManager--RpcGetProcess_--_1_--dtor$3.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$6 @ 0x1800491F0 (_CApplicationManager--RpcGetProcess_--_1_--dtor$6.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$9 @ 0x180049250 (_CApplicationManager--RpcGetProcess_--_1_--dtor$9.c)
 *     _CProcess::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180049C3E (_CProcess--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
