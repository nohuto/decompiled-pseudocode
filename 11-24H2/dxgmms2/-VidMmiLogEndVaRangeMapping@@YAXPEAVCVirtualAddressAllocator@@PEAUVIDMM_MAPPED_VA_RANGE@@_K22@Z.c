/*
 * XREFs of ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140100E28
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003CA7C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 */

void __fastcall VidMmiLogEndVaRangeMapping(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 VidMmAllocFromOwner; // rax
  _QWORD *v8; // r11
  int v9; // r10d
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-28h]

  if ( (byte_140081242 & 0x40) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a2 + 18) & 0xF, *((_QWORD *)a2 + 8));
    v11 = v9;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      a5,
      &EndGpuVirtualAddressRangeMapping,
      v8[16],
      a1,
      VidMmAllocFromOwner,
      a3,
      v10,
      a5,
      v8[12],
      v8[11],
      v11,
      v8[15],
      v8[16]);
  }
}
