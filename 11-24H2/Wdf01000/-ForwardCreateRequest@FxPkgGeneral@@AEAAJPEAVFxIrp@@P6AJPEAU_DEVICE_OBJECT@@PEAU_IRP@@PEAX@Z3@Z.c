/*
 * XREFs of ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1400607F0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxPkgGeneral::ForwardCreateRequest(
        FxPkgGeneral *this,
        FxIrp *Irp,
        int (__fastcall *CompletionRoutine)(_DEVICE_OBJECT *, _IRP *, void *),
        void *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  _IO_STACK_LOCATION *v10; // rcx

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
         Irp->m_Irp,
         CompletionRoutine,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v10 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = CompletionRoutine;
    v10[-1].Context = Context;
    v10[-1].Control = -32;
  }
  return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
}
