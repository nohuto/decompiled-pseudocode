/*
 * XREFs of PopDirectedDripsInitializePhase3 @ 0x140C1D074
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140C1D194 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x14074073C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDiagTraceDirectedDripsInitialization @ 0x140749E1C (PopDiagTraceDirectedDripsInitialization.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084F9F0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C22748 (PopDirectedDripsDiagInitialize.c)
 */

__int64 PopDirectedDripsInitializePhase3()
{
  NTSTATUS v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  PopDirectedDripsDiagInitialize(3LL);
  PopDirectedDripsQueryEnabledMitigations((__int64)&PopDirectedDripsState);
  if ( (dword_140F0D670 & 3) != 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = PsCreateSystemThread(
           &ThreadHandle,
           0,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)PopDirectedDripsWorkerRoutine,
           &PopDirectedDripsState);
    if ( v0 >= 0 )
    {
      v0 = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1FFFFFu,
             (POBJECT_TYPE)PsThreadType,
             0,
             0x67446F50u,
             &qword_140F0D650,
             0LL);
      ZwClose(ThreadHandle);
      if ( v0 >= 0 )
      {
        if ( (unsigned int)PopDirectedDripsDfxEnforcementPolicy >= 3 )
          PopDirectedDripsDfxEnforcementPolicy = 1;
        PopDirectedDripsState.HandleAttributes |= 1u;
        v0 = 0;
      }
    }
  }
  else
  {
    v0 = -1073741637;
  }
  PopDiagTraceDirectedDripsInitialization(v0);
  return (unsigned int)v0;
}
