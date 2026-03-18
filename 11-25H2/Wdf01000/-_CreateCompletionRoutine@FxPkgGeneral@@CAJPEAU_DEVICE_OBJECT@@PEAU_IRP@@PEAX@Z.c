/*
 * XREFs of ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140067370
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x140021E28 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x140022000 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgGeneral *Context)
{
  $47C1BAE18219E6AE0624176A889F109D *v3; // rdi

  v3 = &OriginalIrp->Tail.Overlay.64;
  if ( OriginalIrp->IoStatus.Status < 0 )
  {
    FxFileObject::_DestroyFileObject(
      Context->m_Device,
      (_WDF_FILEOBJECT_CLASS)Context->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      v3->CurrentStackLocation->FileObject);
    FxPkgGeneral::DecrementOpenHandleCount(Context);
  }
  if ( OriginalIrp->PendingReturned && OriginalIrp->CurrentLocation <= OriginalIrp->StackCount )
    v3->CurrentStackLocation->Control |= 1u;
  return (unsigned int)OriginalIrp->IoStatus.Status;
}
