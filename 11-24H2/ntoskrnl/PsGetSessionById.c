/*
 * XREFs of PsGetSessionById @ 0x1403C2E70
 * Callers:
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140722408 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140722498 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x1407225F4 (PiUEventBroadcastVolumesChangedEvent.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     PsGetSiloBySessionId @ 0x1409A0FF4 (PsGetSiloBySessionId.c)
 *     SeQuerySessionIdTokenEx @ 0x1409D9400 (SeQuerySessionIdTokenEx.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409E62A0 (ExpWnfCaptureScopeInstanceId.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140A568C0 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     PspAttachSession @ 0x140AD0928 (PspAttachSession.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     PspSelectSessionAttachProcess @ 0x140A12D74 (PspSelectSessionAttachProcess.c)
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
