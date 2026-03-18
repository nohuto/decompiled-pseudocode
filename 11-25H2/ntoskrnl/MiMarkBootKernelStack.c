/*
 * XREFs of MiMarkBootKernelStack @ 0x140C46304
 * Callers:
 *     MiInitializeKernelStacks @ 0x140C46178 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiMarkKernelStack @ 0x140228934 (MiMarkKernelStack.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
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

char __fastcall MiMarkBootKernelStack(unsigned __int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *ProcessorFlushList; // rsi
  struct _LIST_ENTRY **v6; // r15
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int8 v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0LL;
  ProcessorFlushList = 0LL;
  v6 = MiVaToFlushVm(a1);
  v14 = MiLockWorkingSetShared((__int64)v6);
  v9 = v14;
  if ( v3 < a2 )
  {
    do
    {
      if ( !v4 || (v3 & 0xFFF) == 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        if ( v4 )
          MiUnlockPageTable((__int64)v6, v4);
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)v6, v4, v7, v8);
      }
      v10 = *(_QWORD *)v3;
      v11 = 0xFFFFFFFFFFLL;
      v12 = 48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      MiMarkKernelStack(v11, v12, -16LL);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x20000) == 0 )
      {
        MiWriteValidPteNewProtection(v3, v10 | 0x8000000000000062uLL);
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v6, *((_DWORD *)ProcessorFlushList + 3), 1, 32);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(v3 << 25) >> 16, 1LL, 0);
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    v9 = v14;
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v4 )
      MiUnlockPageTable((__int64)v6, v4);
  }
  return MiUnlockWorkingSetShared((__int64)v6, v9);
}
