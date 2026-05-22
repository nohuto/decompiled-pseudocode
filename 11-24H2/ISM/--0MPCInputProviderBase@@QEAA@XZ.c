/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800844CC
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BF34C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1801BE250 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1801C0FE4 (--0MPCMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??0RayStabilizer@@QEAA@XZ @ 0x18008FC2C (--0RayStabilizer@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  MPCInputProviderBase *result; // rax

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x1A0uLL);
  RayStabilizer::RayStabilizer((MPCInputProviderBase *)((char *)this + 472));
  memset_0((char *)this + 560, 0, 0xBC0uLL);
  *((_DWORD *)this + 146) = 3008;
  *((_DWORD *)this + 892) = 0;
  *((_WORD *)this + 1786) = 0;
  *(_OWORD *)((char *)this + 3576) = 0LL;
  *(_OWORD *)((char *)this + 3592) = 0LL;
  *(_OWORD *)((char *)this + 3608) = 0LL;
  *((_BYTE *)this + 3580) = 0;
  *((_QWORD *)this + 448) = 0LL;
  *((_DWORD *)this + 898) = 0;
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_DWORD *)this + 894) = 1106247680;
  *((_QWORD *)this + 453) = 0LL;
  *((_QWORD *)this + 454) = 0LL;
  *((_QWORD *)this + 455) = 0LL;
  *((_BYTE *)this + 3648) = 0;
  result = this;
  *((_DWORD *)this + 913) = 1;
  return result;
}
