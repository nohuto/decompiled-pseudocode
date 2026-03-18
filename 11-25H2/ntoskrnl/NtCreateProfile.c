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

__int64 __fastcall NtCreateProfile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        __int64 a9)
{
  USHORT PrimaryGroupThread; // ax
  SIZE_T Length; // [rsp+30h] [rbp-78h]

  PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
  if ( a9 == -1 )
    KeQueryGroupAffinity(PrimaryGroupThread);
  LODWORD(Length) = a7;
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, Length, a8);
}
