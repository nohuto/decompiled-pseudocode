/*
 * XREFs of RtlUnwind @ 0x14027B9C0
 * Callers:
 *     _local_unwind @ 0x1404FDE70 (_local_unwind.c)
 *     __longjmp_internal @ 0x1406A59B0 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 */

__int64 __fastcall RtlUnwind(int a1, int a2, int a3, int a4)
{
  unsigned int v7; // edi
  unsigned __int64 v9; // rax
  void *v10; // rsp
  unsigned int v12; // [rsp+30h] [rbp+0h] BYREF

  v12 = 0;
  v7 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v7 = 1048715;
  RtlGetExtendedContextLength2(v7, &v12, 0LL);
  v9 = v12 + 15LL;
  if ( v9 <= v12 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2(&v12, v7, &v12, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, (__int64)&v12, 0LL);
}
