/*
 * XREFs of DpiFdoHandleWaitWake @ 0x140186C3C
 * Callers:
 *     DpiFdoDispatchPower @ 0x1403C4AB0 (DpiFdoDispatchPower.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiFdoHandleWaitWake(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v6; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 2726) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 2752), 4, 2) == 3 )
    {
      *(_DWORD *)(v2 + 2752) = 7;
      PoStartNextPowerIrp(a2);
      a2->IoStatus.Status = -1073741536;
      IofCompleteRequest(a2, 0);
      return -1073741536;
    }
    else
    {
      *(_QWORD *)(v2 + 2760) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v6 = a2->Tail.Overlay.CurrentStackLocation;
      v6[-1].Context = 0LL;
      v6[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoWaitWakeIoCompletionRoutine;
      v6[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
      return 259;
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, *(_QWORD *)(a1 + 64));
    WdLogGlobalForLineNumber = 111;
    PoStartNextPowerIrp(a2);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
}
