/*
 * XREFs of MiSetPagingOfDriver @ 0x140497850
 * Callers:
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140C50BD0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 */

char __fastcall MiSetPagingOfDriver(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 *ProcessorFlushList; // rdi
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // rbx
  PVOID v15; // rax
  __int64 v16; // rcx
  char WsleContents; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  int v20; // eax
  unsigned __int8 v23; // [rsp+88h] [rbp+10h]

  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  v8 = a2 << 25 >> 16;
  ProcessorFlushList = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = MiLockWorkingSetShared((__int64)&unk_140E37E80, a2, a3, a4);
  v23 = v12;
  if ( v5 <= a3 )
  {
    do
    {
      if ( !v11 || (v5 & 0xFFF) == 0 )
      {
        if ( v7 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v10 += MiTrimSystemImagePages(v7, v5 - 8);
          v7 = 0LL;
        }
        if ( v11 )
          MiUnlockPageTableInternal((__int64)&unk_140E37E80, v11);
        v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)&unk_140E37E80, v11);
      }
      v13 = (__int64)(v5 - ((*(_QWORD *)(v6 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
      if ( (unsigned int)v13 >= *(_DWORD *)(v6 + 304)
        || !_bittest64(*(const signed __int64 **)(v6 + 312), (unsigned int)v13) )
      {
        v14 = *(_QWORD *)v5;
        if ( (*(_QWORD *)v5 & 1) != 0 )
        {
          WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v8);
          if ( (WsleContents & 0xF) == 9 )
          {
            v20 = *(_DWORD *)(v18 + 32);
            if ( (_WORD)v20 == 1 || (_WORD)v20 == 2 && (*(_BYTE *)(v18 + 34) & 8) != 0 )
            {
              v7 = v5;
              if ( v19 )
                v7 = v19;
              MiWriteWsle(v16, v8, WsleContents & 0xF0 | 0xA);
              *(_QWORD *)v5 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                MiInitializeTbFlushList(
                  (__int64)ProcessorFlushList,
                  (__int64)&unk_140E37E80,
                  *((_DWORD *)ProcessorFlushList + 3),
                  0,
                  1);
              }
              MiInsertTbFlushEntry((__int64)ProcessorFlushList, v8, 1LL, 0);
            }
          }
        }
        else if ( (v14 & 0x400) != 0 && v7 )
        {
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          v10 += MiTrimSystemImagePages(v7, v5 - 8);
          v7 = 0LL;
        }
        v6 = a1;
      }
      v5 += 8LL;
      v8 += 4096LL;
    }
    while ( v5 <= a3 );
    if ( v7 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
      }
      v10 += MiTrimSystemImagePages(v7, a3);
    }
    if ( v11 )
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v11);
    v12 = v23;
  }
  LOBYTE(v15) = MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v12);
  if ( v10 )
  {
    v15 = *(PVOID *)(v6 + 48);
    if ( v15 == PsNtosImageBase || v15 == PsHalImageBase )
      _InterlockedAdd((_DWORD *)&xmmword_140E2D9A8 + 2, v10);
    else
      _InterlockedAdd((_DWORD *)&xmmword_140E2D9A8 + 3, v10);
  }
  return (char)v15;
}
