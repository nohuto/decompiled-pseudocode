/*
 * XREFs of ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x140028B30
 * Callers:
 *     ndisDriverDispatch @ 0x14002A3D0 (ndisDriverDispatch.c)
 * Callees:
 *     KLoaderDereferenceModule @ 0x1400E3950 (KLoaderDereferenceModule.c)
 *     ndisKLoaderIrpCreateHandler @ 0x1400E3C90 (ndisKLoaderIrpCreateHandler.c)
 */

NTSTATUS __fastcall ndisKLoaderDispatch(PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  PIRP v2; // rdi
  unsigned __int8 MajorFunction; // al
  int Handler; // ebx
  PDEVICE_OBJECT *FsContext; // rcx
  _QWORD *v7; // rsi
  int v8; // ebx
  int v9; // eax
  struct KLOADER_MODULE_REFERENCE__ *v10; // rcx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = Irp;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Handler = ndisKLoaderIrpCreateHandler(Irp);
    v2->IoStatus.Status = Handler;
    Irp = v2;
    goto LABEL_20;
  }
  if ( MajorFunction != 2 )
  {
    if ( MajorFunction == 14 )
    {
      FsContext = (PDEVICE_OBJECT *)CurrentStackLocation->FileObject->FsContext;
      if ( FsContext && *(_DWORD *)FsContext == 183160574 )
        goto LABEL_8;
    }
    else
    {
      if ( MajorFunction != 18 )
      {
        Handler = -1073741637;
        Irp->IoStatus.Status = -1073741637;
LABEL_20:
        IofCompleteRequest(Irp, 2);
        return Handler;
      }
      FsContext = (PDEVICE_OBJECT *)CurrentStackLocation->FileObject->FsContext;
      if ( FsContext && *(_DWORD *)FsContext == 183160574 )
      {
LABEL_8:
        ++v2->CurrentLocation;
        v2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
        return IofCallDriver(FsContext[2], v2);
      }
    }
    return -1073741811;
  }
  v7 = CurrentStackLocation->FileObject->FsContext;
  if ( v7 && *(_DWORD *)v7 == 183160574 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v9 = IoSynchronousCallDriver(v7[2], Irp);
    v10 = (struct KLOADER_MODULE_REFERENCE__ *)v7[1];
    v8 = v9;
    if ( v10 )
      KLoaderDereferenceModule(v10);
    ExFreePoolWithTag(v7, 0x62694C4Eu);
  }
  else
  {
    v8 = -1073741811;
  }
  v2->IoStatus.Status = v8;
  IofCompleteRequest(v2, 2);
  return v8;
}
