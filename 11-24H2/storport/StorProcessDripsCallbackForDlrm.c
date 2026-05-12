/*
 * XREFs of StorProcessDripsCallbackForDlrm @ 0x14013A828
 * Callers:
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 * Callees:
 *     DlrmFetchOrAllocateWorkItem @ 0x140138B64 (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmGetActionFromPowerMode @ 0x140138BC4 (DlrmGetActionFromPowerMode.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x140138FDC (DlrmQueueWorkItemAndSignalEvent.c)
 *     DlrmTranslateSystemPowerModeToDlrmPowerMode @ 0x140139084 (DlrmTranslateSystemPowerModeToDlrmPowerMode.c)
 *     StorLogDLRMDripsCallback @ 0x140139EA8 (StorLogDLRMDripsCallback.c)
 */

void __fastcall StorProcessDripsCallbackForDlrm(__int64 a1)
{
  int v1; // ebx
  int v3; // r13d
  char v4; // r14
  int ActionFromPowerMode; // r12d
  char v6; // bp
  __int64 v7; // r15
  int *v8; // rdi
  int v9; // eax
  __int64 WorkItem; // rax

  LOBYTE(v1) = 0;
  LOBYTE(v3) = 0;
  v4 = 0;
  LOBYTE(ActionFromPowerMode) = 0;
  v6 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (int *)(a1 + 72);
    if ( v7 )
    {
      v3 = *(_DWORD *)(a1 + 76);
      v9 = DlrmTranslateSystemPowerModeToDlrmPowerMode(*v8, (*(_BYTE *)(v7 + 111) & 8) != 0);
      v4 = v9;
      if ( v9 != v3 && v9 )
      {
        ActionFromPowerMode = DlrmGetActionFromPowerMode(v9);
        WorkItem = DlrmFetchOrAllocateWorkItem(a1);
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = ActionFromPowerMode;
          DlrmQueueWorkItemAndSignalEvent(a1, (struct _LIST_ENTRY *)WorkItem);
          if ( (*(_BYTE *)(v7 + 111) & 8) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
        }
        else
        {
          v6 = -102;
        }
      }
    }
    else
    {
      v6 = -16;
    }
    v1 = *v8;
  }
  else
  {
    v6 = 13;
  }
  StorLogDLRMDripsCallback(a1, v1, v3, v4, ActionFromPowerMode, v6);
}
