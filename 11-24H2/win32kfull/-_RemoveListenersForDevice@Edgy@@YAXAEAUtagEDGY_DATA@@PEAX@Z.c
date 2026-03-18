/*
 * XREFs of ?_RemoveListenersForDevice@Edgy@@YAXAEAUtagEDGY_DATA@@PEAX@Z @ 0x1402A4D44
 * Callers:
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1402193D0 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 * Callees:
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1402A4CDC (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 */

void __fastcall Edgy::_RemoveListenersForDevice(Edgy *this, struct tagEDGY_DATA *a2, struct tagEDGY_LISTENER *a3)
{
  int v3; // ebx
  struct tagEDGY_DATA *v6; // rdx

  v3 = *(_DWORD *)this;
  while ( v3 )
  {
    v6 = (struct tagEDGY_DATA *)(*((_QWORD *)this + 1) + 32LL * (unsigned int)--v3);
    if ( *(struct tagEDGY_DATA **)v6 == a2 )
      Edgy::_RemoveListenerCore(this, v6, a3);
  }
}
