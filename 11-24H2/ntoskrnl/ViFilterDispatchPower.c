/*
 * XREFs of ViFilterDispatchPower @ 0x140B9F270
 * Callers:
 *     <none>
 * Callees:
 *     PoCallDriver @ 0x14025DF60 (PoCallDriver.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     IoAcquireRemoveLockEx @ 0x14041D6D0 (IoAcquireRemoveLockEx.c)
 *     ViFilterYieldInitialization @ 0x140613330 (ViFilterYieldInitialization.c)
 */

NTSTATUS __fastcall ViFilterDispatchPower(__int64 a1, IRP *a2)
{
  PVOID v3; // rdx
  NTSTATUS v4; // eax
  NTSTATUS v5; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = *(_QWORD *)(a1 + 64);
  ViFilterYieldInitialization(v9);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 32), v3, &byte_140BAD250, 1u, 0x20u);
  v5 = v4;
  if ( v4 >= 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v8 = a2->Tail.Overlay.CurrentStackLocation;
    v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)ViFilterGenericCompletionRoutine;
    v8[-1].Context = &v9;
    v8[-1].Control = -32;
    return PoCallDriver(*(PDEVICE_OBJECT *)(v9 + 8), a2);
  }
  else
  {
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    return v5;
  }
}
