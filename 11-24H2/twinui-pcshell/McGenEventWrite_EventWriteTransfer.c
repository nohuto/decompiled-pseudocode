/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x18008A004
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180088628 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800896B0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180089860 (McTemplateU0qq_EventWriteTransfer.c)
 *     _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x1800898D8 (_lambda_57bd800a23f6990551f71dd05caf20c5_--operator().c)
 *     _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x180089B20 (_lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator().c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180089D40 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x180089EA4 (McTemplateU0dz_EventWriteTransfer.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180089F48 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18008A0FC (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x18008C8AC (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x18022088C (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x1803068E4 (McTemplateU0pqztp_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1804E8790 (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1805400A0 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x180540270 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180541BFC (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180542570 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180543750 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180543A00 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1805453F8 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_Show@CDragVisual@@AEAAXXZ @ 0x180545598 (-_Show@CDragVisual@@AEAAXXZ.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x1805494F8 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x180549598 (McTemplateU0qdddd_EventWriteTransfer.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x180603A90 (McTemplateU0qz_EventWriteTransfer.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180675C30 (McTemplateU0sqq_EventWriteTransfer.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x1806766C8 (McTemplateU0z_EventWriteTransfer.c)
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x180696AB0 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
