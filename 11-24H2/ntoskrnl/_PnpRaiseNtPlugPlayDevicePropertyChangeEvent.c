/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 *     PipNotifyDependenciesChanged @ 0x1406F7FA8 (PipNotifyDependenciesChanged.c)
 *     IopDecDisableableDepends @ 0x14073191C (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     IopIncDisableableDepends @ 0x140A863B4 (IopIncDisableableDepends.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140A98E3C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 * Callees:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B71A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409C42C4 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  DEVPROPKEY **v6; // rcx
  __int64 v7; // r11
  DEVPROPKEY *v8; // rbx
  DEVPROPKEY **v9; // r8
  __int64 v10; // rdx

  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    _mm_lfence();
    v5 = 0;
    v6 = &CmDeviceRegPropMap;
    v7 = qword_14000C480[a3];
    do
    {
      v8 = *v6;
      v9 = v6;
      if ( *(_DWORD *)(v7 + 16) == (*v6)->pid )
      {
        v10 = *(_QWORD *)v7 - *(_QWORD *)&v8->fmtid.Data1;
        if ( *(_QWORD *)v7 == *(_QWORD *)&v8->fmtid.Data1 )
          v10 = *(_QWORD *)(v7 + 8) - *(_QWORD *)v8->fmtid.Data4;
        if ( !v10 )
          break;
      }
      v9 = 0LL;
      ++v5;
      v6 += 3;
    }
    while ( v5 < 0x21 );
    if ( v9 && *((_DWORD *)v9 + 3) )
    {
      return CmRaisePropertyChangeEvent(PiPnpRtlCtx, a2, 1, 0, *((_DWORD *)v9 + 3));
    }
    else
    {
      result = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 496LL);
      if ( result )
        return PnpDeviceRaisePropertyChangeEventWorker(PiPnpRtlCtx, a2, 0, 0, v7, result);
    }
  }
  return result;
}
