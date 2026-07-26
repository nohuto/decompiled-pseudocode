/*
 * XREFs of ndisDriverDispatch @ 0x14002D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisLwmCreateIrpHandler @ 0x14002BD70 (ndisLwmCreateIrpHandler.c)
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x14002C230 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 *     ndisDispatchRequest @ 0x14002CA40 (ndisDispatchRequest.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

NTSTATUS __fastcall ndisDriverDispatch(struct _DEVICE_OBJECT *a1, _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v4; // edi
  unsigned __int8 MajorFunction; // al
  int IrpHandler; // eax

  if ( a1 == ndisLwmDeviceObject )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    v4 = -1073741637;
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction != 14 )
      {
        if ( MajorFunction == 2 )
        {
          ExFreePoolWithTag(CurrentStackLocation->FileObject->FsContext, 0);
          v4 = 0;
        }
        else if ( MajorFunction == 18 )
        {
          v4 = 0;
        }
LABEL_7:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 0);
LABEL_8:
        MmUnlockPagableImageSection(ImageSectionHandle);
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        return v4;
      }
      IrpHandler = ndisLwmIoctlIrpHandler(a2, (__int64)CurrentStackLocation);
    }
    else
    {
      IrpHandler = ndisLwmCreateIrpHandler(a2, CurrentStackLocation);
    }
    v4 = IrpHandler;
    if ( IrpHandler == 259 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( a1 == ndisLoaderDeviceObject )
    return ndisKLoaderDispatch(a2);
  else
    return ndisDispatchRequest((__int64)a1, a2);
}
