/*
 * XREFs of ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1801BA2F8
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BA178 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BF34C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  MPCSixDofProcessor *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *((_DWORD *)this + 918) = 2;
  *((_WORD *)this + 1832) = 0;
  *(_QWORD *)this = &MPCSixDofProcessor::`vftable'{for `IInputProcessor'};
  *((_BYTE *)this + 3666) = 0;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_DWORD *)this + 917) = 0;
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_WORD *)this + 1838) = 0;
  *((_QWORD *)this + 3) = &MPCSixDofProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 3680, 0, 0x1A0uLL);
  *((_QWORD *)this + 512) = 0LL;
  *((_QWORD *)this + 513) = 0LL;
  *((_QWORD *)this + 514) = 0LL;
  *((_QWORD *)this + 515) = 0LL;
  *((_QWORD *)this + 516) = 0LL;
  *((_QWORD *)this + 517) = 0LL;
  *((_QWORD *)this + 518) = 0LL;
  *((_QWORD *)this + 519) = 0LL;
  *((_QWORD *)this + 520) = 0LL;
  *((_QWORD *)this + 521) = 0LL;
  *((_DWORD *)this + 1044) = 0;
  *(_QWORD *)((char *)this + 4180) = 1065353216LL;
  *(_QWORD *)((char *)this + 4188) = 0LL;
  *(_QWORD *)((char *)this + 4196) = 0LL;
  *(_QWORD *)((char *)this + 4204) = 0LL;
  *(_QWORD *)((char *)this + 4212) = 0LL;
  *(_QWORD *)((char *)this + 4220) = 0LL;
  *(_QWORD *)((char *)this + 4228) = 0LL;
  *(_QWORD *)((char *)this + 4236) = 0LL;
  *(_QWORD *)((char *)this + 4244) = 0LL;
  *(_QWORD *)((char *)this + 4252) = 0LL;
  *(_QWORD *)((char *)this + 4260) = 0LL;
  *((_DWORD *)this + 1067) = -1082130432;
  *((_QWORD *)this + 534) = 0LL;
  *((_QWORD *)this + 535) = 0LL;
  *((_QWORD *)this + 536) = 0LL;
  *((_WORD *)this + 2148) = 0;
  *((_QWORD *)this + 538) = 0LL;
  *((_QWORD *)this + 539) = 0LL;
  *((_QWORD *)this + 540) = 0LL;
  *((_QWORD *)this + 541) = 0LL;
  *((_QWORD *)this + 542) = 0LL;
  *((_QWORD *)this + 543) = 0LL;
  *((_QWORD *)this + 544) = 0LL;
  *((_QWORD *)this + 545) = 0LL;
  memset_0((char *)this + 4368, 0, 0x1A0uLL);
  memset_0((char *)this + 4784, 0, 0xBC0uLL);
  *((_DWORD *)this + 1202) = 3008;
  memset_0((char *)this + 7792, 0, 0xBC0uLL);
  *((_DWORD *)this + 1954) = 3008;
  result = this;
  *((_QWORD *)this + 1350) = 257LL;
  *((_BYTE *)this + 10808) = 0;
  *((_QWORD *)this + 1352) = 0LL;
  *((_QWORD *)this + 1353) = 0LL;
  *((_QWORD *)this + 1354) = 0LL;
  *((_DWORD *)this + 2710) = 0;
  return result;
}
