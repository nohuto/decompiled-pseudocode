/*
 * XREFs of MiTransferSoftwarePte @ 0x14039F300
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140289270 (MiDecommitHandlePageFileFormatPte.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14046511C (MiRewriteTrimPteAsDemandZero.c)
 * Callees:
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 PageFilePte; // rdx
  unsigned __int64 v16; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r8
  __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+20h] [rbp-18h] BYREF

  v20[0] = a1;
  v5 = a1;
  v6 = a3;
  if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v7 = a1;
    if ( (a1 & 1) != 0 && ((a1 & 0x42) == 0 || (a1 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v19 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v20 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v7 = a1 | 0x20;
          v5 = v7 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v5 = v7;
        }
      }
    }
  }
  v8 = -9LL;
  if ( (v5 & 0x400) != 0 )
    v8 = -2049LL;
  v20[0] = v5 & v8;
  if ( (a1 & 0x400) != 0 || (a4 & 4) != 0 )
    v9 = v20[0];
  else
    v9 = v20[0] & 0xFFFFFFFFFFFFFFF9uLL;
  if ( !a2 )
    return v9;
  v11 = *(unsigned __int16 *)(a2 + 172);
  if ( v9 )
  {
    v12 = v6 << 32;
    if ( qword_140E2DB80 )
    {
      if ( (v9 & 0x10) != 0 )
        v13 = (unsigned int)v9 & 0xFFFFFFEF;
      else
        v13 = ~(_DWORD)qword_140E2DB80 & (unsigned int)v9;
      v14 = v13 | v12;
      if ( (v14 & qword_140E2DB80) != 0 )
        PageFilePte = v14 | 0x10;
      else
        PageFilePte = qword_140E2DB80 | v14;
    }
    else
    {
      PageFilePte = (unsigned int)v9 | (unsigned __int64)v12;
    }
  }
  else
  {
    PageFilePte = MiMakePageFilePte(v6);
  }
  result = (v11 << 12) ^ (PageFilePte ^ (v11 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
  v16 = result;
  if ( (a4 & 1) != 0 )
  {
    result |= 4uLL;
    v16 = result;
  }
  if ( (a4 & 2) != 0 )
    return v16 | 2;
  return result;
}
