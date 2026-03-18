/*
 * XREFs of NtCreateProfile @ 0x1407C41C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x140467A20 (KeQueryGroupAffinity.c)
 *     KeQueryPrimaryGroupThread @ 0x140485128 (KeQueryPrimaryGroupThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfile(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        __int64 a9)
{
  USHORT PrimaryGroupThread; // ax
  SIZE_T Length; // [rsp+30h] [rbp-78h]
  __int64 v16[2]; // [rsp+60h] [rbp-48h] BYREF

  *(_OWORD *)v16 = 0LL;
  PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
  LOWORD(v16[1]) = PrimaryGroupThread;
  if ( a9 == -1 )
    v16[0] = KeQueryGroupAffinity(PrimaryGroupThread);
  else
    v16[0] = a9;
  LODWORD(Length) = a7;
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, Length, a8, 1u, (__int64)v16, 1);
}
