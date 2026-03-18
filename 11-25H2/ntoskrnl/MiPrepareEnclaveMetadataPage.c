/*
 * XREFs of MiPrepareEnclaveMetadataPage @ 0x1406750C8
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiAllocateEnclavePages @ 0x1403B9BC4 (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B69AC (KeCreateEnclaveMetadataPage.c)
 */

__int64 MiPrepareEnclaveMetadataPage()
{
  __int64 result; // rax
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  KIRQL v3; // r14
  int EnclaveMetadataPage; // ebx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v6; // rbx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !qword_140E37280 )
  {
    v1 = MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( v1 )
    {
      v2 = -1LL;
      v3 = ExAcquireSpinLockExclusive(&dword_140E37298);
      if ( qword_140E37280 )
      {
        EnclaveMetadataPage = 0;
      }
      else
      {
        MiAllocateEnclavePages(
          (__int64)&MiSystemPartition,
          *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
          0,
          1LL,
          (__int64 *)&v7);
        if ( v8 )
        {
          v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(MiUnlinkPageChainHead((__int64)&v7) + 0x44000000000LL) >> 4);
          ValidPte = MiMakeValidPte(v1, v2, -1073741820);
          v6 = ValidPte;
          if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v1 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128);
          *(_QWORD *)v1 = v6;
          EnclaveMetadataPage = KeCreateEnclaveMetadataPage((__int64)(v1 << 25) >> 16);
          if ( EnclaveMetadataPage >= 0 )
          {
            v2 = -1LL;
            qword_140E37280 = (__int64)(v1 << 25) >> 16;
            v1 = 0LL;
          }
        }
        else
        {
          EnclaveMetadataPage = -1073741670;
        }
      }
      MiReleaseSpinLockExclusive(&dword_140E37298, v3);
      if ( v1 )
        MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v1, 1u);
      if ( v2 != -1LL )
        MiReturnEnclavePage(v2);
      return (unsigned int)EnclaveMetadataPage;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
