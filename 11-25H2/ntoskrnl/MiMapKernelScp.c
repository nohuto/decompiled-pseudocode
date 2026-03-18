/*
 * XREFs of MiMapKernelScp @ 0x1404EE5D8
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A83988 (MiFinalizeKernelScpForSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x140491474 (MiLockAndIncrementShareCount.c)
 *     VslMapKernelScpPages @ 0x1404BD964 (VslMapKernelScpPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

ULONG_PTR __fastcall MiMapKernelScp(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char *AnyMultiplexedVm; // rbp
  int v6; // eax
  ULONG_PTR v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  __int64 v18; // rbx
  ULONG_PTR v20; // [rsp+30h] [rbp-108h]
  _BYTE v21[32]; // [rsp+40h] [rbp-F8h] BYREF
  char *v22; // [rsp+60h] [rbp-D8h]
  unsigned __int8 v23; // [rsp+150h] [rbp+18h]
  __int64 v24; // [rsp+158h] [rbp+20h] BYREF

  memset_0(v21, 0, 0xC0uLL);
  v4 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v6 = VslMapKernelScpPages(BugCheckParameter2);
    if ( v6 < 0 )
      KeBugCheckEx(0x1Au, 0x51514uLL, BugCheckParameter2, v6, 0LL);
  }
  v7 = BugCheckParameter2
     + ((a2
       + ((unsigned int)(dword_140E3726C + dword_140E37270) >> 12)
       + (((dword_140E3726C + dword_140E37270) & 0xFFF) != 0)) << 12);
  v20 = v7;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = qword_140E2D500;
  v9 = 0LL;
  v23 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( dword_140E2D4FC )
  {
    v12 = v24;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8 * v9 + 48);
      v14 = v8 + 8 * v9;
      if ( v4 )
      {
        if ( (v14 & 0xFFF) != 0 )
          goto LABEL_10;
        MiUnlockPageTable((__int64)AnyMultiplexedVm, v4);
      }
      v4 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v4, v10, v11);
LABEL_10:
      v15 = *(_QWORD *)v14;
      MiLockAndIncrementShareCount(v13);
      v17 = MiMakeValidPte(v8 + 8 * v9, v13, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
      if ( _bittest64(&MiFlags, 0x24u) )
      {
        if ( (v17 & 0x20) == 0 )
        {
          v16 = 0x4000000000LL;
          if ( v14 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v8 + 8 * v9, v17, 128);
        }
      }
      *(_QWORD *)v14 = v17;
      v22 = AnyMultiplexedVm;
      if ( v15 )
      {
        v18 = 48 * MiGetContainingPageTable(v8 + 8 * v9) - 0x220000000000LL;
        LODWORD(v24) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        *(_QWORD *)(v18 + 24) = (*(_QWORD *)(v18 + 24) + 1LL) ^ (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        MiIncreaseUsedPtes(v16, v4, 1u, 6);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= dword_140E2D4FC )
      {
        v7 = v20;
        if ( v4 )
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v4);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v23);
  return v7;
}
