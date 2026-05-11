/*
 * XREFs of ??0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z @ 0x14000F16C
 * Callers:
 *     InitializeSideband @ 0x14000EC3C (InitializeSideband.c)
 * Callees:
 *     <none>
 */

CSidebandDevice *__fastcall CSidebandDevice::CSidebandDevice(
        CSidebandDevice *this,
        struct _KSDEVICE *a2,
        struct IUnknown *a3)
{
  _QWORD *Context; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = (char *)this + 8;
  *(_QWORD *)this = &CSidebandDevice::`vftable'{for `ISidebandDevice'};
  *((_QWORD *)this + 1) = &CSidebandDevice::`vftable'{for `CUnknown'};
  Context = a2->Context;
  *((_QWORD *)this + 4) = a2;
  Context += 90;
  *((_QWORD *)this + 5) = Context;
  Context[19] = this;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 20);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 29);
  KeInitializeEvent((PRKEVENT)((char *)this + 176), SynchronizationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)((char *)this + 200), 0, 0x7FFFFFFF);
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
