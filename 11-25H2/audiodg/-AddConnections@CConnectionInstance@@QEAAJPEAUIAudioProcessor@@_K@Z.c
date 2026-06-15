/*
 * XREFs of ?AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E940
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E5E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E9D0 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002FDB8 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 */

__int64 __fastcall CConnectionInstance::AddConnections(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        unsigned __int64 a3)
{
  int v4; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)this + 4) )
  {
    v4 = CConnectionInstance::AddRenderConnection(this, a2, a3);
    if ( v4 >= 0 )
    {
LABEL_3:
      *((_DWORD *)this + 1) = 1;
      return 0LL;
    }
    v6 = 180LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 4) == 1 )
  {
    v4 = CConnectionInstance::AddCaptureConnection(this, a2, a3);
    if ( v4 >= 0 )
      goto LABEL_3;
    v6 = 184LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
