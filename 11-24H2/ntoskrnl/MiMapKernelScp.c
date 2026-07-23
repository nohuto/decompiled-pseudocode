/*
 * XREFs of MiMapKernelScp @ 0x1404F0048
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A84974 (MiFinalizeKernelScpForSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x14048B2F4 (MiLockAndIncrementShareCount.c)
 *     VslMapKernelScpPages @ 0x1404B79D4 (VslMapKernelScpPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG_PTR __fastcall MiMapKernelScp(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char *AnyMultiplexedVm; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  ULONG_PTR v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  ULONG_PTR v19; // rbx
  __int64 v20; // rbx
  ULONG_PTR v22; // [rsp+30h] [rbp-108h]
  _BYTE v23[32]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-D8h]
  unsigned __int8 v25; // [rsp+150h] [rbp+18h]
  __int64 v26; // [rsp+158h] [rbp+20h] BYREF

  memset_0(v23, 0, 0xC0uLL);
  v4 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = MiFlags;
  v8 = (__int64)AnyMultiplexedVm;
  if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v9 = VslMapKernelScpPages(BugCheckParameter2);
    if ( v9 < 0 )
      KeBugCheckEx(0x1Au, 0x51514uLL, BugCheckParameter2, v9, 0LL);
  }
  v10 = (unsigned int)(dword_140E375EC + dword_140E375F0) >> 12;
  v11 = BugCheckParameter2 + ((a2 + (unsigned int)v10 + (((dword_140E375EC + dword_140E375F0) & 0xFFF) != 0)) << 12);
  v22 = v11;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = qword_140E2D880;
  v13 = 0LL;
  v25 = MiLockWorkingSetShared(v8, v10, v7, v6);
  if ( dword_140E2D87C )
  {
    v14 = v26;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 8 * v13 + 48);
      v16 = v12 + 8 * v13;
      if ( v4 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_10;
        MiUnlockPageTableInternal(v8, v4);
      }
      v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v8, v4);
LABEL_10:
      v17 = *(_QWORD *)v16;
      MiLockAndIncrementShareCount(v15);
      v19 = MiMakeValidPte(v12 + 8 * v13, v15, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
      if ( _bittest64(&MiFlags, 0x24u) )
      {
        if ( (v19 & 0x20) == 0 )
        {
          v18 = 0x4000000000LL;
          if ( v16 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v12 + 8 * v13, v19, 128LL);
        }
      }
      *(_QWORD *)v16 = v19;
      v24 = v8;
      if ( v17 )
      {
        v20 = 48 * MiGetContainingPageTable(v12 + 8 * v13) - 0x220000000000LL;
        LODWORD(v26) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((unsigned int *)&v26);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        *(_QWORD *)(v20 + 24) = (*(_QWORD *)(v20 + 24) + 1LL) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        MiIncreaseUsedPtes(v18, v4, 1LL, 6LL);
      }
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= dword_140E2D87C )
      {
        v11 = v22;
        if ( v4 )
          MiUnlockPageTableInternal(v8, v4);
        break;
      }
    }
  }
  MiUnlockWorkingSetShared(v8, v25);
  return v11;
}
