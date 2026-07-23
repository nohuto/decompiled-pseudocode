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

NTSTATUS __cdecl BcdQueryObject(
        HANDLE BcdObjectHandle,
        ULONG BcdVersion,
        BCD_OBJECT_DESCRIPTION Description,
        PGUID Identifier)
{
  __int64 v7; // rcx
  char v8; // r14
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectIdentifier; // ebx

  if ( !*(_QWORD *)&Description )
  {
    if ( Identifier )
      goto LABEL_3;
    return -1073741811;
  }
  if ( BcdVersion != 1 )
    return -1073741811;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !*(_QWORD *)&Description
      || (ObjectIdentifier = ((__int64 (__fastcall *)(_QWORD, _QWORD))BiGetObjectDescription)(
                               BcdObjectHandle,
                               Description),
          ObjectIdentifier >= 0) )
    {
      if ( Identifier )
        ObjectIdentifier = BiGetObjectIdentifier(BcdObjectHandle, Identifier);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return ObjectIdentifier;
  }
  return result;
}
