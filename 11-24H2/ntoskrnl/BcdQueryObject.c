/*
 * XREFs of BcdQueryObject @ 0x1408121E4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x1407639CC (PopBcdSetPendingResume.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140815B48 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x14085DA8C (BiGetObjectDescription.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409BEAC8 (BiGetObjectIdentifier.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( !a3 )
  {
    if ( a4 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( a2 != 1 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(a1, a3), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(a1, a4);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return (unsigned int)ObjectIdentifier;
  }
  return result;
}
