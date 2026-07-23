/*
 * XREFs of MiPrepareEnclaveMetadataPage @ 0x140681AE8
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B7E00 (KeCreateEnclaveMetadataPage.c)
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
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !qword_140E37600 )
  {
    v1 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( v1 )
    {
      v2 = -1LL;
      v3 = ExAcquireSpinLockExclusive(&dword_140E37618);
      if ( qword_140E37600 )
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
          (__int64 *)&v10);
        if ( v11 )
        {
          v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(MiUnlinkPageChainHead((__int64)&v10) + 0x44000000000LL) >> 4);
          ValidPte = MiMakeValidPte(v1, v2, -1073741820);
          v6 = ValidPte;
          if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v1 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128LL);
          *(_QWORD *)v1 = v6;
          EnclaveMetadataPage = KeCreateEnclaveMetadataPage((__int64)(v1 << 25) >> 16);
          if ( EnclaveMetadataPage >= 0 )
          {
            v2 = -1LL;
            qword_140E37600 = (__int64)(v1 << 25) >> 16;
            v1 = 0LL;
          }
        }
        else
        {
          EnclaveMetadataPage = -1073741670;
        }
      }
      MiReleaseSpinLockExclusive(&dword_140E37618, v3);
      if ( v1 )
        MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v1, 1u);
      if ( v2 != -1LL )
        MiReturnEnclavePage(v2, v7, v8, v9);
      return (unsigned int)EnclaveMetadataPage;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
