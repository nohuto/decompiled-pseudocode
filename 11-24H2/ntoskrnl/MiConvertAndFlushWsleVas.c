/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x140486DF0
 * Callers:
 *     MiEliminateZeroPages @ 0x1408F8080 (MiEliminateZeroPages.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rbp
  __int64 *ProcessorFlushList; // r15
  unsigned __int8 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 valid; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r10
  ULONG_PTR v13; // [rsp+80h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a2 + 28) )
  {
    v4 = *(_QWORD *)(a2 + 40);
    v5 = 0LL;
    ProcessorFlushList = 0LL;
    v7 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTableEx(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v13, 0);
    v13 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 28) )
      {
        do
        {
          v11 = *(_QWORD *)(a2 + 8 * v10 + 40);
          if ( (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0
            && (MiGetWsleContents(v8, *(_QWORD *)(a2 + 8 * v10 + 40)) & 0xF) != 0xA )
          {
            v8 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v8 + 8) < 0 || !*(_QWORD *)(v8 + 8) )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                v5 = (ULONG_PTR)(ProcessorFlushList + 517);
                MiInitializeTbFlushList(
                  (__int64)(ProcessorFlushList + 517),
                  a1,
                  *((_DWORD *)ProcessorFlushList + 1037),
                  2,
                  1);
              }
              MiInsertTbFlushEntry(v5, v11, 1LL, 0);
            }
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(a2 + 28) );
        valid = v13;
        if ( v5 )
        {
          MiFreeWsleList(a1, v5, 0);
          MiReleaseProcessorFlushList();
        }
      }
    }
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v7);
    *(_DWORD *)(a2 + 28) = 0;
  }
}
