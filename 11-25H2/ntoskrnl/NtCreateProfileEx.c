/*
 * XREFs of NtCreateProfileEx @ 0x1407B24A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        PGROUP_AFFINITY GroupAffinity)
{
  SIZE_T Length; // [rsp+30h] [rbp-38h]

  LODWORD(Length) = BufferSize;
  return ExpProfileCreate(
           (__int64)ProfileHandle,
           (__int64)Process,
           (__int64)ProfileBase,
           ProfileSize,
           BucketSize,
           Buffer,
           Length,
           ProfileSource);
}
