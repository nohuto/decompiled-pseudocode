/*
 * XREFs of NtLoadKeyEx @ 0x140913030
 * Callers:
 *     NtLoadKey @ 0x140A837B0 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  char v9; // [rsp+50h] [rbp-28h]
  char PreviousMode; // [rsp+60h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  return CmLoadDifferencingKey(
           TargetKey,
           SourceFile,
           Flags,
           0LL,
           TrustClassKey,
           Event,
           DesiredAccess,
           RootHandle,
           Reserved,
           0LL,
           v9,
           0LL,
           PreviousMode);
}
