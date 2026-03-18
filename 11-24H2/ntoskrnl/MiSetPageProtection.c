/*
 * XREFs of MiSetPageProtection @ 0x14066F27C
 * Callers:
 *     MmSetPageProtection @ 0x1404D6CF0 (MmSetPageProtection.c)
 *     MmAllocateIsrStack @ 0x1407F6B68 (MmAllocateIsrStack.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiMarkKernelStack @ 0x1403A0010 (MiMarkKernelStack.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 */

char __fastcall MiSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // edi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 ValidPte; // rbx
  void *v8; // r15
  unsigned __int64 v9; // rsi
  __int64 *ProcessorFlushList; // r12
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned __int64 v18; // [rsp+30h] [rbp-58h]
  unsigned __int8 v19; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+98h] [rbp+10h]
  unsigned int v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 4;
  if ( a3 != 31 )
    v3 = a3;
  v4 = a1;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v18 = v6;
  ValidPte = MiMakeValidPte(v5, 0LL, v3 | 0xA0000000);
  v8 = MiVaToFlushVm(v4);
  v9 = 0LL;
  v19 = MiLockWorkingSetShared((__int64)v8);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v8, 20, 0, 36);
  if ( v6 )
  {
    v20 = v3 & 4;
    do
    {
      if ( !v9 || (v5 & 0xFFF) == 0 )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        if ( v9 )
          MiUnlockPageTableInternal((__int64)v8, v9);
        v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)v8, v9);
      }
      v11 = *(_QWORD *)v5;
      v12 = *(_QWORD *)v5 >> 12;
      v13 = (v12 << 12) ^ ((v12 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      v14 = 3 * (v12 & 0xFFFFFFFFFFLL);
      v15 = v13;
      v16 = 16 * v14 - 0x220000000000LL;
      if ( v20 )
      {
        v13 |= 0x42uLL;
        if ( (v11 & 0x42) == 0 )
          v13 = v15;
        if ( a3 == 31 )
        {
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v22);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          MiMarkKernelStack(v15, v16, -32LL);
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        MiLockPageAndSetDirty(v16, 0LL, 0xFFF0000000000FFFuLL);
      }
      ValidPte = v13 | 0x20;
      if ( ValidPte != v11 )
      {
        MiWriteValidPteNewProtection(v5, ValidPte);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4, 1LL, 0);
      }
      v4 += 4096LL;
      v5 += 8LL;
      --v18;
    }
    while ( v18 );
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  MiReleaseProcessorFlushList();
  if ( v9 )
    MiUnlockPageTableInternal((__int64)v8, v9);
  return MiUnlockWorkingSetShared((__int64)v8, v19);
}
