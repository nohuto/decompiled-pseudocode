/*
 * XREFs of MiMapKernelScp @ 0x1404F25A8
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A88484 (MiFinalizeKernelScpForSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x140490CB4 (MiLockAndIncrementShareCount.c)
 *     VslMapKernelScpPages @ 0x1404BC864 (VslMapKernelScpPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

ULONG_PTR __fastcall MiMapKernelScp(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char *AnyMultiplexedVm; // rbp
  int v6; // eax
  ULONG_PTR v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rcx
  ULONG_PTR v15; // rbx
  __int64 v16; // rbx
  ULONG_PTR v18; // [rsp+30h] [rbp-108h]
  _BYTE v19[32]; // [rsp+40h] [rbp-F8h] BYREF
  char *v20; // [rsp+60h] [rbp-D8h]
  unsigned __int8 v21; // [rsp+150h] [rbp+18h]
  __int64 v22; // [rsp+158h] [rbp+20h] BYREF

  memset_0(v19, 0, 0xC0uLL);
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
       + ((unsigned int)(dword_140E374AC + dword_140E374B0) >> 12)
       + (((dword_140E374AC + dword_140E374B0) & 0xFFF) != 0)) << 12);
  v18 = v7;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = qword_140E2D740;
  v9 = 0LL;
  v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( dword_140E2D73C )
  {
    v10 = v22;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 8 * v9 + 48);
      v12 = v8 + 8 * v9;
      if ( v4 )
      {
        if ( (v12 & 0xFFF) != 0 )
          goto LABEL_10;
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      }
      v4 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v4);
LABEL_10:
      v13 = *(_QWORD *)v12;
      MiLockAndIncrementShareCount(v11);
      v15 = MiMakeValidPte(v8 + 8 * v9, v11, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
      if ( _bittest64(&MiFlags, 0x24u) )
      {
        if ( (v15 & 0x20) == 0 )
        {
          v14 = 0x4000000000LL;
          if ( v12 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v8 + 8 * v9, v15, 128);
        }
      }
      *(_QWORD *)v12 = v15;
      v20 = AnyMultiplexedVm;
      if ( v13 )
      {
        v16 = 48 * MiGetContainingPageTable(v8 + 8 * v9) - 0x220000000000LL;
        LODWORD(v22) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((unsigned int *)&v22);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        *(_QWORD *)(v16 + 24) = (*(_QWORD *)(v16 + 24) + 1LL) ^ (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        MiIncreaseUsedPtes(v14, v4, 1u, 6);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= dword_140E2D73C )
      {
        v7 = v18;
        if ( v4 )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
  return v7;
}
