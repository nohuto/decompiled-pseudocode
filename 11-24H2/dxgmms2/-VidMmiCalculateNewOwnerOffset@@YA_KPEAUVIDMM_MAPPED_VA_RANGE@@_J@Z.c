/*
 * XREFs of ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x140103E80
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmiCalculateNewOwnerOffset(struct VIDMM_MAPPED_VA_RANGE *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *((_QWORD *)a1 + 16);
  result = a2 + *((_QWORD *)a1 + 10);
  if ( v2 )
    return *((_QWORD *)a1 + 15) + (result - *((_QWORD *)a1 + 15)) % (v2 << 12);
  return result;
}
