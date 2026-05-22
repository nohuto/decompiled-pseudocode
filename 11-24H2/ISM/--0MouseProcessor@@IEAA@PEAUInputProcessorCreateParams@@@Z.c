/*
 * XREFs of ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18019771C
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180197A60 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180178DF0 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
MouseProcessor *__fastcall MouseProcessor::MouseProcessor(MouseProcessor *this, struct InputProcessorCreateParams *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, char *); // rcx

  v4 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 8) = v5;
  *((_QWORD *)this + 7) = v4;
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessorDeviceQueryRemove'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 116) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  InjectionDevice::InjectionDevice((__int64)this + 152, *((_QWORD *)a2 + 1), 8);
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)a2 + 2);
  if ( v6 && (**v6)(v6, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 1720) >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 215) + 16LL))(*((_QWORD *)this + 215));
  return this;
}
