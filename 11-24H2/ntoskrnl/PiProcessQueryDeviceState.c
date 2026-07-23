/*
 * XREFs of PiProcessQueryDeviceState @ 0x1408B91C4
 * Callers:
 *     PiProcessRequeryDeviceState @ 0x1408B902C (PiProcessRequeryDeviceState.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopDecDisableableDepends @ 0x14073191C (IopDecDisableableDepends.c)
 *     PiUpdateDeviceResourceLists @ 0x14073439C (PiUpdateDeviceResourceLists.c)
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PnpCheckForActiveDependencies @ 0x1409BDBB4 (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PiUpdateGuestAssignedState @ 0x140A5B948 (PiUpdateGuestAssignedState.c)
 *     IopIncDisableableDepends @ 0x140A863B4 (IopIncDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x140ABD8E4 (IopResourceRequirementsChanged.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int updated; // esi
  __int64 v11; // r8
  __int64 v12; // r8
  PVOID v13; // rcx
  _WORD v15[40]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  PiPnpRtlBeginOperation(&P, a2, a3);
  PnpPoFxActivateDevice(v5, 256);
  v16 = 0LL;
  memset_0(v15, 0, 0x48uLL);
  v15[0] = 5147;
  if ( (int)IopSynchronousCall(a1, (unsigned int)v15, -1073741637, 0, (__int64)&v16) < 0 )
  {
    updated = 0;
  }
  else
  {
    v6 = v16;
    if ( (v16 & 2) != 0 )
      PipSetDevNodeUserFlags(v5, 2LL);
    else
      PipClearDevNodeUserFlags(v5, 2LL);
    if ( (v6 & 0x40) != 0 )
      PipSetDevNodeUserFlags(v5, 64LL);
    else
      PipClearDevNodeUserFlags(v5, 64LL);
    v7 = *(_DWORD *)(v5 + 400) & 8;
    if ( (v6 & 0x20) != 0 )
    {
      if ( !v7 )
      {
        PipSetDevNodeUserFlags(v5, 8LL);
        IopIncDisableableDepends(v5);
      }
    }
    else if ( v7 )
    {
      IopDecDisableableDepends(v5);
      PipClearDevNodeUserFlags(v5, 8LL);
    }
    v8 = v6 >> 8;
    LOBYTE(v8) = BYTE1(v6) & 1;
    updated = PiUpdateGuestAssignedState(v5, v8);
    if ( (v6 & 9) != 0 || (v6 & 0x14) == 4 )
    {
      if ( (unsigned __int8)PnpCheckForActiveDependencies(v5, 3LL, v11) )
      {
        v12 = 51LL;
LABEL_13:
        PnpRequestDeviceRemoval(v5, 0LL, v12);
        updated = -1073741823;
        goto LABEL_19;
      }
      if ( (v6 & 9) != 0 )
      {
        v12 = (v6 & 1) != 0 ? 29 : 24;
        goto LABEL_13;
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      LOBYTE(v9) = (v6 & 4) != 0;
      IopResourceRequirementsChanged(a1, v9);
    }
    else
    {
      if ( (v6 & 4) != 0 )
      {
        v12 = 43LL;
        goto LABEL_13;
      }
      if ( (v6 & 0x80u) != 0 )
        updated = PiUpdateDeviceResourceLists(v5);
    }
  }
LABEL_19:
  PoFxIdleDevice(*(_QWORD *)(v5 + 32));
  v13 = P;
  *(_DWORD *)(v5 + 704) &= ~0x100u;
  if ( v13 )
    PiPnpRtlEndOperation(v13);
  return updated;
}
