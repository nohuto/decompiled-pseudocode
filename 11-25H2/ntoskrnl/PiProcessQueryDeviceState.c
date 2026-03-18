/*
 * XREFs of PiProcessQueryDeviceState @ 0x140833E34
 * Callers:
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x140833D90 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopDecDisableableDepends @ 0x140727750 (IopDecDisableableDepends.c)
 *     PiUpdateDeviceResourceLists @ 0x14072A1DC (PiUpdateDeviceResourceLists.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PiUpdateGuestAssignedState @ 0x140833A30 (PiUpdateGuestAssignedState.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     IopIncDisableableDepends @ 0x140A85634 (IopIncDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x140ABE80C (IopResourceRequirementsChanged.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int16 v6; // di
  int v7; // eax
  __int64 v8; // rdx
  unsigned int updated; // esi
  int v10; // r8d
  PVOID v11; // rcx
  _WORD v13[40]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  PiPnpRtlBeginOperation(&P, a2, a3);
  PnpPoFxActivateDevice(v5, 256LL);
  v14 = 0LL;
  memset_0(v13, 0, 0x48uLL);
  v13[0] = 5147;
  if ( (int)IopSynchronousCall(a1, (unsigned int)v13, -1073741637, 0, (__int64)&v14) < 0 )
  {
    updated = 0;
  }
  else
  {
    v6 = v14;
    if ( (v14 & 2) != 0 )
      PipSetDevNodeUserFlags(v5, 2u);
    else
      PipClearDevNodeUserFlags(v5, 2);
    if ( (v6 & 0x40) != 0 )
      PipSetDevNodeUserFlags(v5, 0x40u);
    else
      PipClearDevNodeUserFlags(v5, 64);
    v7 = *(_DWORD *)(v5 + 400) & 8;
    if ( (v6 & 0x20) != 0 )
    {
      if ( !v7 )
      {
        PipSetDevNodeUserFlags(v5, 8u);
        IopIncDisableableDepends(v5);
      }
    }
    else if ( v7 )
    {
      IopDecDisableableDepends(v5);
      PipClearDevNodeUserFlags(v5, 8);
    }
    updated = PiUpdateGuestAssignedState(v5, HIBYTE(v6) & 1);
    if ( (v6 & 9) != 0 || (v6 & 0x14) == 4 )
    {
      if ( PnpCheckForActiveDependencies(v5, 3u) )
      {
        v10 = 51;
LABEL_13:
        PnpRequestDeviceRemoval(v5, 0, v10, 0);
        updated = -1073741823;
        goto LABEL_19;
      }
      if ( (v6 & 9) != 0 )
      {
        v10 = (v6 & 1) != 0 ? 29 : 24;
        goto LABEL_13;
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      LOBYTE(v8) = (v6 & 4) != 0;
      IopResourceRequirementsChanged(a1, v8);
    }
    else
    {
      if ( (v6 & 4) != 0 )
      {
        v10 = 43;
        goto LABEL_13;
      }
      if ( (v6 & 0x80u) != 0 )
        updated = PiUpdateDeviceResourceLists(v5);
    }
  }
LABEL_19:
  PoFxIdleDevice(*(_QWORD *)(v5 + 32));
  v11 = P;
  *(_DWORD *)(v5 + 704) &= ~0x100u;
  if ( v11 )
    PiPnpRtlEndOperation(v11);
  return updated;
}
