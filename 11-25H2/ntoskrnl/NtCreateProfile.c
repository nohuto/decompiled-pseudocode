/*
 * XREFs of NtCreateProfile @ 0x1407B23C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x1404692D0 (KeQueryGroupAffinity.c)
 *     KeQueryPrimaryGroupThread @ 0x14048489C (KeQueryPrimaryGroupThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
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
