/*
 * XREFs of ??0InkDevice@@QEAA@XZ @ 0x1402ED0AC
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026BC78 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

InkDevice *__fastcall InkDevice::InkDevice(InkDevice *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  InkDevice *result; // rax

  *(_QWORD *)this = &RimBackedDeviceBase::`vftable';
  v4 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(W32GetUserSessionState(this, a2) + 16832));
  if ( !(_DWORD)v4 )
    LODWORD(v4) = _InterlockedIncrement((volatile signed __int32 *)(W32GetUserSessionState(v4, v3) + 16832));
  *((_DWORD *)this + 2) = v4;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 10) = "InkDevice";
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *(_QWORD *)this = &InkDevice::`vftable'{for `RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  result = this;
  *(_OWORD *)((char *)this + 116) = 0LL;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
