/*
 * XREFs of MiSetPagingOfDriver @ 0x14049CBA8
 * Callers:
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140C4EA40 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 */

char __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // r14
  __int64 v5; // rbx
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // r12
  __int64 *ProcessorFlushList; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  char WsleContents; // r8
  __int64 v17; // r10
  unsigned __int64 *v18; // r11
  int v19; // eax
  unsigned __int8 v22; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  ProcessorFlushList = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = MiLockWorkingSetShared((__int64)&unk_140E37D40);
  v22 = v11;
  if ( (unsigned __int64)v4 <= a3 )
  {
    do
    {
      if ( !v10 || ((unsigned __int16)v4 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v9 += MiTrimSystemImagePages(v6, v4 - 1);
          v6 = 0LL;
        }
        if ( v10 )
          MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
        v10 = (((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)&unk_140E37D40, v10);
      }
      v12 = ((__int64)v4 - ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
      if ( (unsigned int)v12 >= *(_DWORD *)(v5 + 304)
        || !_bittest64(*(const signed __int64 **)(v5 + 312), (unsigned int)v12) )
      {
        v13 = *v4;
        if ( (*v4 & 1) != 0 )
        {
          WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v19 = *(_DWORD *)(v17 + 32);
            if ( (_WORD)v19 == 1 || (_WORD)v19 == 2 && (*(_BYTE *)(v17 + 34) & 8) != 0 )
            {
              v6 = v4;
              if ( v18 )
                v6 = v18;
              MiWriteWsle(v15, v7, WsleContents & 0xF0 | 0xA);
              *v4 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                MiInitializeTbFlushList(
                  (__int64)ProcessorFlushList,
                  (__int64)&unk_140E37D40,
                  *((_DWORD *)ProcessorFlushList + 3),
                  0,
                  1);
              }
              MiInsertTbFlushEntry((__int64)ProcessorFlushList, v7, 1LL, 0);
            }
          }
        }
        else if ( (v13 & 0x400) != 0 && v6 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v9 += MiTrimSystemImagePages(v6, v4 - 1);
          v6 = 0LL;
        }
        v5 = a1;
      }
      ++v4;
      v7 += 4096LL;
    }
    while ( (unsigned __int64)v4 <= a3 );
    if ( v6 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
      }
      v9 += MiTrimSystemImagePages(v6, a3);
    }
    if ( v10 )
      MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
    v11 = v22;
  }
  LOBYTE(v14) = MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v11);
  if ( v9 )
  {
    v14 = *(_QWORD *)(v5 + 48);
    if ( v14 == PsNtosImageBase || v14 == PsHalImageBase )
      _InterlockedAdd((_DWORD *)&xmmword_140E2D868 + 2, v9);
    else
      _InterlockedAdd((_DWORD *)&xmmword_140E2D868 + 3, v9);
  }
  return v14;
}
