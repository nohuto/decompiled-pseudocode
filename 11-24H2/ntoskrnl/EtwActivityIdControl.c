/*
 * XREFs of EtwActivityIdControl @ 0x14041E010
 * Callers:
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 *     IoSetActivityIdIrp @ 0x140454CF0 (IoSetActivityIdIrp.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 *     PopAdaptiveStandbyActivatorCallback @ 0x1405DB0E0 (PopAdaptiveStandbyActivatorCallback.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407602D0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x140761570 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x140761B4C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761CA4 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x140761DE0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x140761F00 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     VrpPreOpenOrCreate @ 0x1409271B4 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x140927F20 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     VrpIoctlDeviceDispatch @ 0x140929280 (VrpIoctlDeviceDispatch.c)
 *     VrpPreQueryKeyName @ 0x140A037D8 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rax
  struct _KTHREAD *CurrentThread; // r8
  GUID *Teb; // r9
  _KPROCESS *Process; // r8
  GUID *v7; // r9
  __int16 v8; // ax
  ULONG v9; // ecx
  ULONG v10; // ecx
  volatile signed __int64 *v11; // rax
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+0h] [rbp-28h]
  GUID *v14; // [rsp+8h] [rbp-20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = (GUID *)CurrentThread->Teb;
    if ( Teb )
    {
      v14 = Teb + 369;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime && ((v8 = WORD2(Process[3].PerProcessorCycleTimes), v8 == 332) || v8 == 452) )
      {
        v7 = Teb + 757;
        v14 = v7;
      }
      else
      {
        v7 = Teb + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v7;
      }
      else
      {
        v9 = ControlCode - 2;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              *ActivityId = *v7;
              v11 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
              *(_QWORD *)v14->Data4 = _InterlockedIncrement64(v11 + 1);
              *(_QWORD *)&v14->Data1 = *v11;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v12 = *v7;
            *v7 = *ActivityId;
            *ActivityId = v12;
          }
        }
        else
        {
          *v7 = *ActivityId;
        }
      }
      return v13;
    }
  }
  return -1073741637;
}
