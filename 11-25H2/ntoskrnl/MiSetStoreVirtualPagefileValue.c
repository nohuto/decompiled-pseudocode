/*
 * XREFs of MiSetStoreVirtualPagefileValue @ 0x140226180
 * Callers:
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140680478 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiSetStoreVirtualPagefileValue(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 PageFilePte; // rdx
  __int64 v16; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r11
  __int64 v19; // r8
  _QWORD v20[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 1204);
  v20[0] = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 8 * v3 + 18528);
  v6 = a2;
  if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v16 = a2;
    if ( (a2 & 1) != 0 && ((a2 & 0x42) == 0 || (a2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v19 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v20 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v16 = a2 | 0x20;
          v6 = v16 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v6 = v16;
        }
      }
    }
  }
  v7 = -9LL;
  if ( (v6 & 0x400) != 0 )
    v7 = -2049LL;
  v8 = v6 & v7;
  v20[0] = v8;
  v9 = v8;
  if ( (a2 & 0x400) == 0 )
    v9 = v8 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( !v5 )
    return v9;
  v11 = *(unsigned __int16 *)(v5 + 172);
  if ( v9 )
  {
    v12 = v4 << 32;
    if ( qword_140E2D940 )
    {
      if ( (v9 & 0x10) != 0 )
        v13 = (unsigned int)v9 & 0xFFFFFFEF;
      else
        v13 = ~(_DWORD)qword_140E2D940 & (unsigned int)v9;
      v14 = v13 | v12;
      if ( (qword_140E2D940 & v14) != 0 )
        PageFilePte = v14 | 0x10;
      else
        PageFilePte = qword_140E2D940 | v14;
    }
    else
    {
      PageFilePte = (unsigned int)v9 | (unsigned __int64)v12;
    }
  }
  else
  {
    PageFilePte = MiMakePageFilePte(v4, a2, -2049LL);
  }
  return (v11 << 12) ^ (PageFilePte ^ (v11 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
}
