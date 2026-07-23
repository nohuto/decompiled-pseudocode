/*
 * XREFs of MiSetPageProtection @ 0x14067044C
 * Callers:
 *     MmSetPageProtection @ 0x1404D0140 (MmSetPageProtection.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiMarkKernelStack @ 0x140216A40 (MiMarkKernelStack.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *ProcessorFlushList; // r12
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned __int8 v24; // [rsp+90h] [rbp+8h]
  int v25; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 4;
  if ( a3 != 31 )
    v3 = a3;
  v4 = a1;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v23 = v6;
  ValidPte = MiMakeValidPte(v5, 0LL, v3 | 0xA0000000);
  v8 = MiVaToFlushVm(v4);
  v9 = 0LL;
  v24 = MiLockWorkingSetShared((__int64)v8, v10, v11, v12);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v8, 20, 0, 36);
  if ( v6 )
  {
    v25 = v3 & 4;
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
      v15 = *(_QWORD *)v5;
      v16 = 0xFFF0000000000FFFuLL;
      v17 = *(_QWORD *)v5 >> 12;
      v18 = (v17 << 12) ^ ((v17 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      v19 = 3 * (v17 & 0xFFFFFFFFFFLL);
      v20 = v18;
      v21 = 16 * v19 - 0x220000000000LL;
      if ( v25 )
      {
        v18 |= 0x42uLL;
        if ( (v15 & 0x42) == 0 )
          v18 = v20;
        if ( a3 == 31 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiMarkKernelStack(v20, v21, -32LL);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        MiLockPageAndSetDirty(v21, 0LL, 0xFFF0000000000FFFuLL, v14);
      }
      ValidPte = v18 | 0x20;
      if ( ValidPte != v15 )
      {
        MiWriteValidPteNewProtection(v5, ValidPte, v16);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4, 1LL, 0);
      }
      v4 += 4096LL;
      v5 += 8LL;
      --v23;
    }
    while ( v23 );
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  MiReleaseProcessorFlushList();
  if ( v9 )
    MiUnlockPageTableInternal((__int64)v8, v9);
  return MiUnlockWorkingSetShared((__int64)v8, v24);
}
