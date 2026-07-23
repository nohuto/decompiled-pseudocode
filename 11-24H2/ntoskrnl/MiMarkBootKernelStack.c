/*
 * XREFs of MiMarkBootKernelStack @ 0x140C59774
 * Callers:
 *     MiInitializeKernelStacks @ 0x140C595E8 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiMarkKernelStack @ 0x140216A40 (MiMarkKernelStack.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

char __fastcall MiMarkBootKernelStack(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *ProcessorFlushList; // rsi
  void *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int8 v16; // [rsp+70h] [rbp+8h]
  unsigned int v17; // [rsp+78h] [rbp+10h] BYREF

  v3 = BugCheckParameter2;
  v4 = 0LL;
  ProcessorFlushList = 0LL;
  v6 = MiVaToFlushVm(BugCheckParameter2);
  v16 = MiLockWorkingSetShared((__int64)v6, v7, v8, v9);
  v10 = v16;
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
      v11 = *(_QWORD *)v3;
      v12 = 0xFFFFFFFFFFLL;
      v13 = 48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      MiMarkKernelStack(v12, v13, -16LL);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x20000) == 0 )
      {
        MiWriteValidPteNewProtection(v3, v11 | 0x8000000000000062uLL, v14);
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
    v10 = v16;
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v4 )
      MiUnlockPageTableInternal((__int64)v6, v4);
  }
  return MiUnlockWorkingSetShared((__int64)v6, v10);
}
