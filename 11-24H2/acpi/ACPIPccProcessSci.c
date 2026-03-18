/*
 * XREFs of ACPIPccProcessSci @ 0x140023CF0
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1400223A0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiPccLockSubspace @ 0x140051700 (AcpiPccLockSubspace.c)
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     AcpiDiagTracePccPlatformInterrupt @ 0x1400543C0 (AcpiDiagTracePccPlatformInterrupt.c)
 *     AcpiPccClearGenericStatusFields @ 0x140064120 (AcpiPccClearGenericStatusFields.c)
 *     AcpiPccIsInterruptIssued @ 0x1400641AC (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x140064210 (AcpiPccIsrIsPlatformNotificationIssued.c)
 */

__int64 ACPIPccProcessSci()
{
  unsigned int i; // edi
  __int64 v1; // rbx
  __int64 v2; // rdx
  struct _IO_WORKITEM *WorkItem; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace
      && *(_DWORD *)(AcpiPccLegacySubspace + 560)
      && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccLegacySubspace) )
    {
      AcpiPccCommandComplete(AcpiPccLegacySubspace);
    }
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v1 = AcpiPccSubspaces + 824LL * i;
        if ( *(_DWORD *)(v1 + 12) == 1 )
        {
          if ( *(_DWORD *)(v1 + 560) && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccSubspaces + 824LL * i) )
            AcpiPccCommandComplete(v1);
          if ( (unsigned __int8)AcpiPccIsrIsPlatformNotificationIssued(v1) )
          {
            v5 = 0;
            AcpiPccLockSubspace(v1, &v5);
            AcpiPccClearGenericStatusFields(v1, 4294967287LL);
            if ( *(_QWORD *)(v1 + 392) )
            {
              WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v1 + 408));
              if ( WorkItem )
                IoQueueWorkItemEx(WorkItem, AcpiPccPlatformNotificationWorker, DelayedWorkQueue, (PVOID)v1);
            }
            LOBYTE(v2) = v5;
            AcpiPccUnlockSubspace(v1, v2);
          }
        }
      }
    }
  }
  return AcpiDiagTracePccPlatformInterrupt(*(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL));
}
