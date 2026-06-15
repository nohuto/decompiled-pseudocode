/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140006CD8 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E2E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002EE78 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct IUnknown **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct IUnknown *v5; // rdx
  int v6; // esi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = (struct IUnknown *)*((_QWORD *)this + 16);
  if ( a2[19] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x562,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C002ELL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827886LL;
  }
  else
  {
    if ( v5 )
      ATL::AtlComPtrAssign(a2 + 19, v5);
    v6 = CPipeInstance::AddConnectionsAndActivateAPOs(
           (CPipeInstance *)a2,
           *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 45));
    if ( v6 < 0 )
    {
      v8 = 1379LL;
    }
    else
    {
      v6 = CAudioDeviceGraph::RegisterSpatialPipe(
             (CAudioDeviceGraph *)((char *)this - 16),
             (struct CPipeInstance *)a2,
             1);
      if ( v6 >= 0 )
      {
        v10 = 0LL;
        CPipeInstance::GetLatency((CPipeInstance *)a2, &v10);
        if ( *((_DWORD *)a2 + 28) == 2 && ++*((_QWORD *)this + 48) == 2LL && *((_DWORD *)this + 73) == 3 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17));
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      v8 = 1380LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v6;
  }
}
