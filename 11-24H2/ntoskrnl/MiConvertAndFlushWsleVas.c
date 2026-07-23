/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x140481E60
 * Callers:
 *     MiEliminateZeroPages @ 0x1409752C0 (MiEliminateZeroPages.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rbp
  __int64 *ProcessorFlushList; // r15
  unsigned __int8 v9; // r13
  __int64 v10; // rcx
  unsigned __int64 valid; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r10
  ULONG_PTR v15; // [rsp+80h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a2 + 28) )
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = 0LL;
    ProcessorFlushList = 0LL;
    v9 = MiLockWorkingSetShared(a1, a2, a3, a4);
    valid = MiLockLowestValidPageTableEx(a1, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v15, 0);
    v15 = valid;
    if ( valid == ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v12 = 0LL;
      if ( *(_DWORD *)(a2 + 28) )
      {
        do
        {
          v13 = *(_QWORD *)(a2 + 8 * v12 + 40);
          if ( (*(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0
            && (MiGetWsleContents(v10, *(_QWORD *)(a2 + 8 * v12 + 40)) & 0xF) != 0xA )
          {
            v10 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v10 + 8) < 0 || !*(_QWORD *)(v10 + 8) )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                v7 = (ULONG_PTR)(ProcessorFlushList + 517);
                MiInitializeTbFlushList(
                  (__int64)(ProcessorFlushList + 517),
                  a1,
                  *((_DWORD *)ProcessorFlushList + 1037),
                  2,
                  1);
              }
              MiInsertTbFlushEntry(v7, v13, 1LL, 0);
            }
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *(_DWORD *)(a2 + 28) );
        valid = v15;
        if ( v7 )
        {
          MiFreeWsleList(a1, v7, 0);
          MiReleaseProcessorFlushList();
        }
      }
    }
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v9);
    *(_DWORD *)(a2 + 28) = 0;
  }
}
