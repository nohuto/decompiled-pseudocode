/*
 * XREFs of ExpProfileCreate @ 0x1407C1A4C
 * Callers:
 *     NtCreateProfile @ 0x1407C1FE0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1407C20C0 (NtCreateProfileEx.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeVerifyGroupAffinity @ 0x140469BC0 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 */

__int64 __fastcall ExpProfileCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T Length,
        int a8)
{
  unsigned __int64 v11; // rcx
  int v12; // [rsp+58h] [rbp-1E0h]
  PVOID Object; // [rsp+60h] [rbp-1D8h]
  __int64 v14; // [rsp+68h] [rbp-1D0h]
  PVOID v15; // [rsp+70h] [rbp-1C8h]
  volatile void *Address; // [rsp+78h] [rbp-1C0h]
  __int64 v17; // [rsp+80h] [rbp-1B8h]
  __int64 v18; // [rsp+88h] [rbp-1B0h]
  __int128 v19; // [rsp+90h] [rbp-1A8h]
  __int128 v20; // [rsp+A8h] [rbp-190h]
  __int128 v21; // [rsp+B8h] [rbp-180h]
  __int64 v22; // [rsp+C8h] [rbp-170h]
  int v23; // [rsp+D0h] [rbp-168h]
  __int128 v24; // [rsp+D8h] [rbp-160h]
  __int64 v25; // [rsp+E8h] [rbp-150h]
  struct _KAFFINITY_EX v26; // [rsp+F0h] [rbp-148h] BYREF

  v14 = a3;
  v18 = a1;
  Address = a6;
  memset_0(&v26.8, 0, sizeof(v26.8));
  v19 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  Object = 0LL;
  v15 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v12 = 0;
  if ( !(_DWORD)Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v11 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v11 = a4 >> a5;
  if ( v11 > (unsigned __int64)(unsigned int)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  LODWORD(v24) = a8;
  guard_dispatch_icall_no_overrides(1LL, 24LL);
  return 3221225659LL;
}
