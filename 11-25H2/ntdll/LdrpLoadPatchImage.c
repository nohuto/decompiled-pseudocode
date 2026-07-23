/*
 * XREFs of LdrpLoadPatchImage @ 0x1801600BC
 * Callers:
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
