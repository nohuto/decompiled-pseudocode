/*
 * XREFs of RtlUnwind @ 0x14025DB00
 * Callers:
 *     _local_unwind @ 0x1404FB6F0 (_local_unwind.c)
 *     __longjmp_internal @ 0x14069A780 (__longjmp_internal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 */

__int64 __fastcall RtlUnwind(ULONG_PTR a1, __int64 a2, int *a3, __int64 a4)
{
  int v7; // edi
  unsigned __int64 v9; // rax
  void *v10; // rsp
  __int64 v12; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(v12) = 0;
  v7 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v7 = 1048715;
  RtlGetExtendedContextLength2(v7, &v12, 0LL);
  v9 = (unsigned int)v12 + 15LL;
  if ( v9 <= (unsigned int)v12 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((__int64)&v12, v7, &v12, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, (int *)&v12, 0LL);
}
