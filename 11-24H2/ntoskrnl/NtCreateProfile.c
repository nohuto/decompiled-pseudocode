/*
 * XREFs of NtCreateProfile @ 0x1407C1FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x14045F4C0 (KeQueryGroupAffinity.c)
 *     KeQueryPrimaryGroupThread @ 0x140480638 (KeQueryPrimaryGroupThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        KAFFINITY Affinity)
{
  USHORT PrimaryGroupThread; // ax
  SIZE_T Length; // [rsp+30h] [rbp-78h]

  PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
  if ( Affinity == -1LL )
    KeQueryGroupAffinity(PrimaryGroupThread);
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
