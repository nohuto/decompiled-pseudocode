/*
 * XREFs of NtOpenPartition @ 0x14077A870
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v6; // rcx
  NTSTATUS result; // eax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  v3 = (int)ObjectAttributes;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)PartitionHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  LOBYTE(ObjectAttributes) = PreviousMode;
  result = ObOpenObjectByName(
             v3,
             (_DWORD)PsPartitionType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)Handle);
  if ( result >= 0 )
    *PartitionHandle = Handle[0];
  return result;
}
