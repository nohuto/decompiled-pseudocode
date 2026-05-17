/*
 * XREFs of LdrpInitializeDllPath @ 0x180065A30
 * Callers:
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpInitializeDllPath(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

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
      (__int64)"minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a2);
    return LdrpLogDllStateEx2(v5, a1, *(_QWORD *)a3, 5312LL);
  }
  return result;
}
