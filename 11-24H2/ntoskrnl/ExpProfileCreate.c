/*
 * XREFs of ExpProfileCreate @ 0x1407C3C30
 * Callers:
 *     NtCreateProfile @ 0x1407C41C0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1407C42A0 (NtCreateProfileEx.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeVerifyGroupAffinity @ 0x14046F4B0 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 */

__int64 __fastcall ExpProfileCreate(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T Length,
        int a8,
        unsigned __int16 a9,
        __int64 a10,
        char a11)
{
  __int128 *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  int v21; // r9d
  int inserted; // ebx
  char *v23; // rdi
  int v24; // [rsp+54h] [rbp-1E4h] BYREF
  int v25; // [rsp+58h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-1D0h]
  PVOID v28; // [rsp+70h] [rbp-1C8h]
  volatile void *Address; // [rsp+78h] [rbp-1C0h]
  __int64 v30; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-1B0h]
  __int128 v32; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-190h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-180h]
  __int128 v35; // [rsp+C8h] [rbp-170h]
  __int128 v36; // [rsp+D8h] [rbp-160h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-150h]
  struct _KAFFINITY_EX v38; // [rsp+F0h] [rbp-148h] BYREF

  v27 = a3;
  v31 = a1;
  Address = a6;
  v14 = (__int128 *)a10;
  memset_0(&v38.8, 0, sizeof(v38.8));
  v32 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v35 = 0LL;
  DWORD2(v35) = 0;
  Object = 0LL;
  v28 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v25 = 0;
  if ( !(_DWORD)Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v16 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v16 = a4 >> a5;
  if ( v16 > (unsigned __int64)(unsigned int)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  LODWORD(v36) = a8;
  v24 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL, &v36, &v24) < 0 || v24 != 24 || !BYTE4(v36) )
    return 3221225659LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v31 < 0x7FFFFFFF0000LL )
      v18 = (__int64)v31;
    *(_QWORD *)v18 = *(_QWORD *)v18;
    ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( !a11 && 16LL * a9 && (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  *(_QWORD *)&v38.Count = 2097153LL;
  memset_0(&v38.8, 0, sizeof(v38.8));
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v32 = *v14;
    else
      v32 = *v14;
    if ( !KeVerifyGroupAffinity((__int64)&v32, 0) )
      return 3221225485LL;
    KeAddGroupAffinityEx(&v38.Count, WORD4(v32), v32);
    --a9;
    ++v14;
  }
  if ( a2 )
  {
    result = ObpReferenceObjectByHandleWithTag(a2, 0x66507845u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v20 = v27;
  }
  else
  {
    v20 = v27;
    if ( v27 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    Object = 0LL;
  }
  LOBYTE(v19) = PreviousMode;
  ExIsRestrictedCaller(v19, &v25);
  LODWORD(v33) = 48;
  *((_QWORD *)&v33 + 1) = 0LL;
  DWORD2(v34) = 32;
  *(_QWORD *)&v34 = 0LL;
  v35 = 0LL;
  LOBYTE(v21) = PreviousMode;
  inserted = ObCreateObjectEx(0, (_DWORD)ExProfileObjectType, (unsigned int)&v33, v21);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v23 = (char *)v28;
    *(_QWORD *)v28 = Object;
    *((_QWORD *)v23 + 1) = v20;
    *((_QWORD *)v23 + 2) = a4;
    *((_QWORD *)v23 + 3) = Address;
    *((_DWORD *)v23 + 8) = Length;
    *((_DWORD *)v23 + 9) = a5;
    *((_QWORD *)v23 + 6) = 0LL;
    *((_DWORD *)v23 + 16) = 0;
    *((_DWORD *)v23 + 17) = a8;
    *((_QWORD *)v23 + 9) = 2097153LL;
    memset_0(v23 + 80, 0, 0x100uLL);
    KiCopyAffinityEx((struct _KAFFINITY_EX *)(v23 + 72), *((_WORD *)v23 + 37), &v38);
    inserted = ObInsertObjectEx(v23, 0, 0LL, (__int64)&v30);
    LODWORD(v27) = inserted;
    if ( inserted >= 0 )
      *v31 = v30;
  }
  return (unsigned int)inserted;
}
