/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801B6DA4
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801B6BEC (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18008F4D8 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C92A8 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B6D20 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>((__int64)this);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable';
  *((_QWORD *)this + 1) = &MPCGamepadProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 459) = 0LL;
  *((_QWORD *)this + 460) = 0LL;
  *((_QWORD *)this + 461) = 0LL;
  *((_QWORD *)this + 462) = 0LL;
  *((_DWORD *)this + 926) = 0;
  *(_OWORD *)((char *)this + 3708) = 0LL;
  *(_QWORD *)((char *)this + 3724) = 0LL;
  *((_DWORD *)this + 933) = 0;
  *(_OWORD *)((char *)this + 3736) = 0LL;
  *((_QWORD *)this + 469) = 0LL;
  *((_DWORD *)this + 940) = 0;
  memset_0((char *)this + 3768, 0, 0x1A0uLL);
  *((_DWORD *)this + 1046) = 0;
  *((_WORD *)this + 2094) = 0;
  *((_BYTE *)this + 4190) = 0;
  *((_QWORD *)this + 524) = 0LL;
  *((_DWORD *)this + 1050) = 0;
  *(_QWORD *)((char *)this + 4204) = 0LL;
  *((_DWORD *)this + 1053) = 0;
  *(_OWORD *)((char *)this + 4216) = 0LL;
  *(_OWORD *)((char *)this + 4232) = 0LL;
  *((_QWORD *)this + 531) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 532) = 0LL;
  *((_DWORD *)this + 1066) = 1065353216;
  *((_QWORD *)this + 534) = 0LL;
  *((_QWORD *)this + 535) = 0LL;
  *((_QWORD *)this + 536) = 0LL;
  *((_QWORD *)this + 537) = 0LL;
  *((_QWORD *)this + 538) = 0LL;
  *((_WORD *)this + 2156) = 0;
  *((_QWORD *)this + 540) = 0LL;
  if ( *((_DWORD *)this + 131) )
  {
    *((_DWORD *)this + 131) = 0;
    RayStabilizer::CalculateMaximumSize((MPCGamepadProcessor *)((char *)this + 480));
    RayStabilizer::Reset(v2);
  }
  return this;
}
