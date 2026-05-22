/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180033D10
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180033AD0 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C1220 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180198704 (--$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreatePara.c)
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019885C (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801BCB68 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C02D0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C38C0 (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     ??$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801C3E38 (--$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C510C (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180032FBC (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x18007FADC (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x180093190 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ??4?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z @ 0x1800C4F78 (--4-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z @ 0x1800C5AB8 (-MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800C5B38 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  char *v3; // rsi
  struct MPCHolographicInputManager *Instance; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  unsigned int *v8; // r15
  ISMTracing *v9; // rcx
  const char *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  ISMTracing *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  v3 = (char *)this + 24;
  Instance = MPCHolographicInputManager::GetInstance();
  v5 = MPCHolographicInputManager::AddInputProvider(
         Instance,
         (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)));
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !*((_QWORD *)Instance + 412) )
      Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((char *)Instance + 3296, *((_QWORD *)this + 5));
    if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24) == 8 )
    {
      v8 = (unsigned int *)*((_QWORD *)this + 6);
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCEyeGazeProcessor_DeviceAttached_(v9, *v8);
      }
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(
        (char *)Instance + 3352,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    }
    if ( !*((_QWORD *)Instance + 418)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24) == 1 )
    {
      if ( *((_QWORD *)Instance + 418) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x7A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v10);
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(
        (char *)Instance + 3344,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    }
    v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24);
    v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 88LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 3576), v12, v11);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputProviderBase_Create_(v13, *((const struct DeviceInfo **)this + 6));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v5,
      v14);
    return v6;
  }
}
