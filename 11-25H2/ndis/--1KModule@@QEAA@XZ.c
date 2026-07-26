/*
 * XREFs of ??1KModule@@QEAA@XZ @ 0x140155920
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1400E3E94 (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??1DriverService@@QEAA@XZ @ 0x1401558F4 (--1DriverService@@QEAA@XZ.c)
 */

void __fastcall KModule::~KModule(void **this)
{
  DriverService::~DriverService(this + 6);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(this + 5, 0LL);
}
