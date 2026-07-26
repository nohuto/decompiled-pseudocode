/*
 * XREFs of ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x140171BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140171C40 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(_QWORD *a1)
{
  _IRP *v2; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  ndisPnPIrpSurpriseRemovalInner((struct _NDIS_MINIPORT_BLOCK *)(a1 - 622));
  v2 = (_IRP *)a1[4];
  if ( v2 )
  {
    CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    IofCallDriver((PDEVICE_OBJECT)*(a1 - 142), v2);
  }
}
