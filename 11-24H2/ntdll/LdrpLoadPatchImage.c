/*
 * XREFs of LdrpLoadPatchImage @ 0x18015CFBC
 * Callers:
 *     LdrHotPatchNotify @ 0x18015CA50 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadPatchImage(void *a1)
{
  char *v2; // rbx
  char v4; // [rsp+48h] [rbp-B8h]
  __int64 v5; // [rsp+50h] [rbp-B0h] BYREF
  char *v6; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  int v8[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v9[16]; // [rsp+80h] [rbp-80h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x80uLL);
  BaseAddress = 0LL;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    271,
    (__int64)"LdrpLoadPatchImage",
    3,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  *(_OWORD *)v8 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v9);
  LODWORD(v5) = 0;
  LdrpLoadDllInternal((__int64)v8, (int)v9, 0, 9, 0LL, 0LL, (__int64 *)&BaseAddress, (int *)&v5, (__int64)a1, v4);
  v2 = 0LL;
  v6 = 0LL;
  if ( (int)v5 < 0 )
  {
    LdrpFindLoadedDllByHandle(a1, (__int64 *)&v6, 0LL);
    v2 = v6;
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), (__int64)v6, (unsigned __int16 *)v8, v5, 1);
    LdrpLogInternal(
      "minkernel\\ldr\\ldrapi.c",
      327,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      v5);
  }
  LdrpFreeUnicodeString((__int64)v8);
  LdrpReleaseDllPath(v9);
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( v2 )
    LdrpDereferenceModule(v2);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 344, (__int64)"LdrpLoadPatchImage", 4, "Status: 0x%08lx\n", v5);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 345, (__int64)"LdrpLoadPatchImage", 6, "%x\n", v5);
  return (unsigned int)v5;
}
