/*
 * XREFs of _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x1800ED544
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800ED068 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, PVOID, __int64, PVOID, __int64, int, char *); // r14
  char *v9; // rsi
  __int64 v10; // rdi
  PVOID Reserved1; // rbx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  char v15; // [rsp+40h] [rbp-98h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-90h] BYREF
  HSTRING_HEADER v17; // [rsp+68h] [rbp-70h] BYREF

  v8 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, __int64, int, char *))(*(_QWORD *)a2 + 24LL);
  v9 = &v15;
  if ( *(_QWORD *)(a1 + 24) )
    v9 = *(char **)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)(a1 + 8), a3)[1].Reserved.Reserved1;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)a1, v12);
  return v8(a2, v13[1].Reserved.Reserved1, a3, Reserved1, v10, a4, v9);
}
