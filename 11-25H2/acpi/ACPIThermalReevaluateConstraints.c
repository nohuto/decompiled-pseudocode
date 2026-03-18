/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x140047C48
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x140047AFC (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140048648 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1400687F8 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiThermalDestroyContraints @ 0x140069358 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
