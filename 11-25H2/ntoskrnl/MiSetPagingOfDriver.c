/*
 * XREFs of MiSetPagingOfDriver @ 0x14049D9E4
 * Callers:
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140C3D810 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  PVOID v16; // rax
  PVOID v17; // rt1
  __int64 v18; // rcx
  __int64 v19; // r10
  unsigned __int64 *v20; // r11
  int v21; // eax
  unsigned __int8 v24; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  ProcessorFlushList = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = MiLockWorkingSetShared((__int64)&unk_140E37B00);
  v24 = v11;
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
          MiUnlockPageTable((__int64)&unk_140E37B00, v10);
        v10 = (((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable((__int64)&unk_140E37B00, v10, v12, v13);
      }
      v14 = ((__int64)v4 - ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3;
      if ( (unsigned int)v14 >= *(_DWORD *)(v5 + 304)
        || !_bittest64(*(const signed __int64 **)(v5 + 312), (unsigned int)v14) )
      {
        v15 = *v4;
        if ( (*v4 & 1) != 0 )
        {
          LOBYTE(v12) = MiGetWsleContents(0xFFFFFFFFFFLL, v7);
          if ( (v12 & 0xF) == 9 )
          {
            v21 = *(_DWORD *)(v19 + 32);
            if ( (_WORD)v21 == 1 || (_WORD)v21 == 2 && (*(_BYTE *)(v19 + 34) & 8) != 0 )
            {
              v6 = v4;
              if ( v20 )
                v6 = v20;
              MiWriteWsle(v18, v7, v12 & 0xF0 | 0xA);
              *v4 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                MiInitializeTbFlushList(
                  (__int64)ProcessorFlushList,
                  (__int64)&unk_140E37B00,
                  *((_DWORD *)ProcessorFlushList + 3),
                  0,
                  1);
              }
              MiInsertTbFlushEntry((__int64)ProcessorFlushList, v7, 1LL, 0);
            }
          }
        }
        else if ( (v15 & 0x400) != 0 && v6 )
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
      MiUnlockPageTable((__int64)&unk_140E37B00, v10);
    v11 = v24;
  }
  LOBYTE(v16) = MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v11);
  if ( v9 )
  {
    v16 = *(PVOID *)(v5 + 48);
    v17 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v16 == v17 || v16 == PsHalImageBase )
      _InterlockedAdd((_DWORD *)&xmmword_140E2D628 + 2, v9);
    else
      _InterlockedAdd((_DWORD *)&xmmword_140E2D628 + 3, v9);
  }
  return (char)v16;
}
