/*
 * XREFs of MiMarkBootKernelStack @ 0x140C575E4
 * Callers:
 *     MiInitializeKernelStacks @ 0x140C57458 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
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

char __fastcall MiMarkBootKernelStack(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *ProcessorFlushList; // rsi
  void *v6; // r15
  unsigned __int8 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned __int8 v12; // [rsp+70h] [rbp+8h]
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0LL;
  ProcessorFlushList = 0LL;
  v6 = MiVaToFlushVm(a1);
  v12 = MiLockWorkingSetShared((__int64)v6);
  v7 = v12;
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
          MiUnlockPageTableInternal((__int64)v6, v4);
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)v6, v4);
      }
      v8 = *(_QWORD *)v3;
      v9 = 0xFFFFFFFFFFLL;
      v10 = 48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      MiMarkKernelStack(v9, v10, -16LL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x20000) == 0 )
      {
        MiWriteValidPteNewProtection(v3, v8 | 0x8000000000000062uLL);
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
    v7 = v12;
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v4 )
      MiUnlockPageTableInternal((__int64)v6, v4);
  }
  return MiUnlockWorkingSetShared((__int64)v6, v7);
}
