/*
 * XREFs of ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400F5530
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( (byte_140081242 & 0x40) != 0 )
  {
    v5 = *((_DWORD *)a2 + 18);
    McTemplateK0pqxx_EtwWriteTransfer(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v5,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  RtlAvlRemoveNode((char *)this + 40, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
