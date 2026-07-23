/*
 * XREFs of LdrpInitializeDllPath @ 0x1800AD900
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrLoadEnclaveModule @ 0x1800D3B60 (LdrLoadEnclaveModule.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 */

char __fastcall LdrpInitializeDllPath(const WCHAR *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char result; // al

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)(a3 + 48) = 0LL;
  *(_OWORD *)(a3 + 64) = 0LL;
  *(_OWORD *)(a3 + 80) = 0LL;
  *(_OWORD *)(a3 + 96) = 0LL;
  *(_OWORD *)(a3 + 112) = 0LL;
  if ( (a2 & 1) != 0 || !a2 )
  {
    *(_QWORD *)(a3 + 32) = a1;
    *(_DWORD *)(a3 + 24) = a2 & 0xFFFFFFFE;
  }
  else
  {
    *(_QWORD *)a3 = a2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a2);
    return LdrpLogDllStateEx2(v5, a1, *(const WCHAR **)a3, 0x14C0u);
  }
  return result;
}
