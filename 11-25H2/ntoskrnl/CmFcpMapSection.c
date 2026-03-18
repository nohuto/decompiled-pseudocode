/*
 * XREFs of CmFcpMapSection @ 0x140AA3A88
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407D4F70 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 */

NTSTATUS __fastcall CmFcpMapSection(_QWORD *a1, _QWORD *a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  PVOID MappedBase; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+40h] [rbp+18h] BYREF

  MappedBase = 0LL;
  v3 = (void *)a1[1];
  if ( v3 )
  {
    ViewSize = 0LL;
    result = MmMapViewInSessionSpace(v3, &MappedBase, &ViewSize);
    if ( result < 0 )
      return result;
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = MappedBase;
    a2[2] = a1[2];
    *a2 = *a1;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
  }
  return 0;
}
