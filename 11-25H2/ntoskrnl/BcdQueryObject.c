/*
 * XREFs of BcdQueryObject @ 0x14080266C
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140805C44 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BiGetObjectIdentifier @ 0x14096BADC (BiGetObjectIdentifier.c)
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
