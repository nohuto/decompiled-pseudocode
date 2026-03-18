/*
 * XREFs of ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1402EC594
 * Callers:
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x14021D1AC (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1402DE430 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DEDC4 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402EBAE0 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetBackgroundAccessor(
        InteractiveControlDevice *this,
        struct tagWND *a2,
        int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((struct tagWND **)this + 6) == a2 )
  {
    *((_DWORD *)this + 14) |= a3;
  }
  else
  {
    v5[1] = a2;
    v5[0] = (char *)this + 48;
    HMAssignmentLock(v5, 0LL);
    *((_DWORD *)this + 14) = a3;
  }
}
