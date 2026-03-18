/*
 * XREFs of MiSetPageProtection @ 0x14066375C
 * Callers:
 *     MmSetPageProtection @ 0x1404F43C0 (MmSetPageProtection.c)
 *     MmAllocateIsrStack @ 0x1407E6CD8 (MmAllocateIsrStack.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiMarkKernelStack @ 0x140228934 (MiMarkKernelStack.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

char __fastcall MiSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // edi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 ValidPte; // rbx
  struct _LIST_ENTRY **v8; // r15
  unsigned __int64 v9; // rsi
  __int64 *ProcessorFlushList; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned __int64 v20; // [rsp+30h] [rbp-58h]
  unsigned __int8 v21; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 4;
  if ( a3 != 31 )
    v3 = a3;
  v4 = a1;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v20 = v6;
  ValidPte = MiMakeValidPte(v5, 0LL, v3 | 0xA0000000);
  v8 = MiVaToFlushVm(v4);
  v9 = 0LL;
  v21 = MiLockWorkingSetShared((__int64)v8);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v8, 20, 0, 36);
  if ( v6 )
  {
    v22 = v3 & 4;
    do
    {
      if ( !v9 || (v5 & 0xFFF) == 0 )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        if ( v9 )
          MiUnlockPageTable((__int64)v8, v9);
        v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)v8, v9, v11, v12);
      }
      v13 = *(_QWORD *)v5;
      v14 = *(_QWORD *)v5 >> 12;
      v15 = (v14 << 12) ^ ((v14 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      v16 = 3 * (v14 & 0xFFFFFFFFFFLL);
      v17 = v15;
      v18 = 16 * v16 - 0x220000000000LL;
      if ( v22 )
      {
        v15 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v15 = v17;
        if ( a3 == 31 )
        {
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v24);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          MiMarkKernelStack(v17, v18, -32LL);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        MiLockPageAndSetDirty(v18, 0LL, 0xFFF0000000000FFFuLL);
      }
      ValidPte = v15 | 0x20;
      if ( ValidPte != v13 )
      {
        MiWriteValidPteNewProtection(v5, ValidPte);
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4, 1LL, 0);
      }
      v4 += 4096LL;
      v5 += 8LL;
      --v20;
    }
    while ( v20 );
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  MiReleaseProcessorFlushList();
  if ( v9 )
    MiUnlockPageTable((__int64)v8, v9);
  return MiUnlockWorkingSetShared((__int64)v8, v21);
}
