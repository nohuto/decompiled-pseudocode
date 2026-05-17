/*
 * XREFs of LdrpLoadPatchImage @ 0x18015EBFC
 * Callers:
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadPatchImage(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char v4; // [rsp+48h] [rbp-B8h]
  char v5[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v8[12]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v9[16]; // [rsp+80h] [rbp-80h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x80uLL);
  v7 = 0LL;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    271,
    (__int64)"LdrpLoadPatchImage",
    3,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  *(_OWORD *)v8 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v9);
  *(_DWORD *)v5 = 0;
  LdrpLoadDllInternal((__int64)v8, (int)v9, 0, 9, 0LL, 0LL, &v7, (int *)v5, a1, v4);
  v2 = 0LL;
  v6 = 0LL;
  if ( *(int *)v5 < 0 )
  {
    LdrpFindLoadedDllByHandle(a1, &v6, 0LL);
    v2 = v6;
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), v6, v8, *(int *)v5, 1);
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrapi.c",
      327,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1);
  }
  LdrpFreeUnicodeString((__int64)v8);
  LdrpReleaseDllPath(v9);
  if ( v7 )
    LdrpDereferenceModule(v7);
  if ( v2 )
    LdrpDereferenceModule(v2);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    344,
    (__int64)"LdrpLoadPatchImage",
    4,
    "Status: 0x%08lx\n",
    v5[0]);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrapi.c", 345, (__int64)"LdrpLoadPatchImage", 6, "%x\n", v5[0]);
  return *(unsigned int *)v5;
}
