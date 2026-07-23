/*
 * XREFs of BcdQueryObject @ 0x140812924
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140763390 (PopBcdSetPendingResume.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140816288 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x1408597FC (BiGetObjectDescription.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409A5118 (BiGetObjectIdentifier.c)
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
