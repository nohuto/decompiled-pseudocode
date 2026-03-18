/*
 * XREFs of KsepDeletePatchSdb @ 0x140733E38
 * Callers:
 *     KseShimDatabaseOpen @ 0x14082A43C (KseShimDatabaseOpen.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     ZwDeleteFile @ 0x14069CCA0 (ZwDeleteFile.c)
 */

NTSTATUS KsepDeletePatchSdb()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  char v2; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwDeleteFile(&ObjectAttributes);
  if ( result < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = result;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 590372;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Failed to delete patch shim database!\n");
    return KsepLogError(0LL, (__int64)"KSE: Failed to delete patch shim database!\n");
  }
  return result;
}
