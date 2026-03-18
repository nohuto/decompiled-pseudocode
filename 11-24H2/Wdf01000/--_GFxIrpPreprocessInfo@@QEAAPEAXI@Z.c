/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14003EC78
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x140041688 (--1FxDevice@@UEAA@XZ.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x14009546C (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003ECB4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  FxStump::operator delete(this);
  return this;
}
