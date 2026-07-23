/*
 * XREFs of MiSetStoreVirtualPagefileValue @ 0x1402FAC20
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068CE38 (MiMoveModifiedPagesToCompressList.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiSetStoreVirtualPagefileValue(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 PageFilePte; // rdx
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
    v7 = a2;
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
            v7 = a2 | 0x20;
          v6 = v7 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v6 = v7;
        }
      }
    }
  }
  v8 = -9LL;
  if ( (v6 & 0x400) != 0 )
    v8 = -2049LL;
  v9 = v6 & v8;
  v20[0] = v9;
  v10 = v9;
  if ( (a2 & 0x400) == 0 )
    v10 = v9 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( !v5 )
    return v10;
  v12 = *(unsigned __int16 *)(v5 + 172);
  if ( v10 )
  {
    v13 = v4 << 32;
    if ( qword_140E2DCC0 )
    {
      if ( (v10 & 0x10) != 0 )
        v14 = (unsigned int)v10 & 0xFFFFFFEF;
      else
        v14 = ~(_DWORD)qword_140E2DCC0 & (unsigned int)v10;
      v15 = v14 | v13;
      if ( (qword_140E2DCC0 & v15) != 0 )
        PageFilePte = v15 | 0x10;
      else
        PageFilePte = qword_140E2DCC0 | v15;
    }
    else
    {
      PageFilePte = (unsigned int)v10 | (unsigned __int64)v13;
    }
  }
  else
  {
    PageFilePte = MiMakePageFilePte(v4);
  }
  return (v12 << 12) ^ (PageFilePte ^ (v12 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
}
