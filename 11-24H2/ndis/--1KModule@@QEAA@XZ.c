/*
 * XREFs of ??1KModule@@QEAA@XZ @ 0x14014AC50
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1400DCC84 (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??1DriverService@@QEAA@XZ @ 0x14014AC24 (--1DriverService@@QEAA@XZ.c)
 */

void __fastcall KModule::~KModule(void **this)
{
  DriverService::~DriverService(this + 6);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(this + 5, 0LL);
}
