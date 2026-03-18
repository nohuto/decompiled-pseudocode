/*
 * XREFs of ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1402EB79C
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402EBAE0 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBED8 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402EF008 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 */

SimpleHapticsController *__fastcall SimpleHapticsController::`scalar deleting destructor'(
        SimpleHapticsController *this)
{
  SimpleHapticsController::DeInitialize(this);
  Win32FreePool(this);
  return this;
}
