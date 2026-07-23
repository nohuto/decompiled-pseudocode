/*
 * XREFs of NtCreateProfileEx @ 0x1407C20C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
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
