/*
 * XREFs of PsGetSessionById @ 0x140349430
 * Callers:
 *     PsGetSessionObjectById @ 0x1403493A0 (PsGetSessionObjectById.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140724878 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140724908 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x140724A64 (PiUEventBroadcastVolumesChangedEvent.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408D19E0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408D1BF0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408D21F0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 *     PsGetSiloBySessionId @ 0x1409BA9A4 (PsGetSiloBySessionId.c)
 *     SeQuerySessionIdTokenEx @ 0x1409DF650 (SeQuerySessionIdTokenEx.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409ECF70 (ExpWnfCaptureScopeInstanceId.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140A5E4A0 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     PspAttachSession @ 0x140AD25B8 (PspAttachSession.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     PspSelectSessionAttachProcess @ 0x140A19C04 (PspSelectSessionAttachProcess.c)
 */

__int64 __fastcall PsGetSessionById(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentServerSilo;
  PspLockProcessListExclusive(CurrentThread);
  v6 = (_QWORD *)PspSessionIdNodes;
  while ( v6 )
  {
    if ( a1 > *((_DWORD *)v6 - 22) )
    {
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      if ( a1 >= *((_DWORD *)v6 - 22) )
        break;
      v6 = (_QWORD *)*v6;
    }
  }
  if ( v6 )
  {
    v7 = v6 - 12;
    if ( (!v5 || v7[20] == v5) && *((_DWORD *)v7 + 2) == a1 )
      v2 = PspSelectSessionAttachProcess();
  }
  PspUnlockProcessListExclusive(CurrentThread);
  return v2;
}
