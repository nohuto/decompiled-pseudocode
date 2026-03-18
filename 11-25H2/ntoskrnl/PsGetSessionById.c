/*
 * XREFs of PsGetSessionById @ 0x1403D6DB0
 * Callers:
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140718778 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140718808 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x140718964 (PiUEventBroadcastVolumesChangedEvent.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEAE0 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBC0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PsGetSiloBySessionId @ 0x1409BB1E4 (PsGetSiloBySessionId.c)
 *     SeQuerySessionIdTokenEx @ 0x1409E0750 (SeQuerySessionIdTokenEx.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409F6738 (ExpWnfCaptureScopeInstanceId.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140A5C630 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     PspSelectSessionAttachProcess @ 0x140A14DD4 (PspSelectSessionAttachProcess.c)
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
