/*
 * XREFs of NtLoadKey2 @ 0x140A8AD70
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  return CmLoadDifferencingKey(
           (__int64)TargetKey,
           (__int64)SourceFile,
           Flags,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
