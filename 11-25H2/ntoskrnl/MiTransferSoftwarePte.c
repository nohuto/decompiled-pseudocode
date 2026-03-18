/*
 * XREFs of MiTransferSoftwarePte @ 0x1402280C0
 * Callers:
 *     MiRewriteTrimPteAsDemandZero @ 0x140226334 (MiRewriteTrimPteAsDemandZero.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140382A54 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, _KPROCESS *Process, char a4)
{
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 PageFilePte; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v18[0] = a1;
  v5 = a1;
  v6 = (unsigned int)Process;
  if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v16 = a1;
    if ( (a1 & 1) != 0 )
    {
      LOBYTE(Process) = (a1 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((a1 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          Process = (_KPROCESS *)Process[2].KernelWaitTime;
          if ( Process )
          {
            v17 = *((_QWORD *)&Process->Header.Lock + (((unsigned __int64)v18 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v16 = a1 | 0x20;
            v5 = v16 | 0x42;
            if ( (v17 & 0x42) == 0 )
              v5 = v16;
          }
        }
      }
    }
  }
  v7 = -9LL;
  if ( (v5 & 0x400) != 0 )
    v7 = -2049LL;
  v18[0] = v5 & v7;
  if ( (a1 & 0x400) != 0 || (a4 & 4) != 0 )
    v8 = v18[0];
  else
    v8 = v18[0] & 0xFFFFFFFFFFFFFFF9uLL;
  if ( !a2 )
    return v8;
  v10 = *(unsigned __int16 *)(a2 + 172);
  if ( v8 )
  {
    v11 = v6 << 32;
    if ( qword_140E2D940 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = (unsigned int)v8 & 0xFFFFFFEF;
      else
        v12 = ~(_DWORD)qword_140E2D940 & (unsigned int)v8;
      v13 = v12 | v11;
      if ( (v13 & qword_140E2D940) != 0 )
        PageFilePte = v13 | 0x10;
      else
        PageFilePte = qword_140E2D940 | v13;
    }
    else
    {
      PageFilePte = (unsigned int)v8 | (unsigned __int64)v11;
    }
  }
  else
  {
    PageFilePte = MiMakePageFilePte(v6, v18, Process);
  }
  result = (v10 << 12) ^ (PageFilePte ^ (v10 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
  v15 = result;
  if ( (a4 & 1) != 0 )
  {
    result |= 4uLL;
    v15 = result;
  }
  if ( (a4 & 2) != 0 )
    return v15 | 2;
  return result;
}
