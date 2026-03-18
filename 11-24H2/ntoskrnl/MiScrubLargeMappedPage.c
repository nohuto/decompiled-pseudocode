/*
 * XREFs of MiScrubLargeMappedPage @ 0x14068D548
 * Callers:
 *     MiScrubProcessLargePage @ 0x1407FDB40 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiIdentifyPfnWrapper @ 0x140307340 (MiIdentifyPfnWrapper.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiScrubPage @ 0x1403F5970 (MiScrubPage.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1404898E0 (MiScrubInterrupted.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _LIST_ENTRY **p_Blink; // r12
  ULONG_PTR v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  volatile unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 *ProcessorFlushList; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rbp
  __int64 v24; // r14
  ULONG_PTR v25; // rbx
  unsigned int v26; // r15d
  __int64 v27; // rax
  ULONG_PTR *v28; // r14
  unsigned __int8 v30; // [rsp+30h] [rbp-C8h]
  unsigned int v31; // [rsp+34h] [rbp-C4h]
  int v32; // [rsp+38h] [rbp-C0h]
  BOOL v33; // [rsp+3Ch] [rbp-BCh]
  int v34; // [rsp+40h] [rbp-B8h]
  unsigned __int64 valid; // [rsp+48h] [rbp-B0h]
  __int64 v36; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-A0h]
  __int64 v38; // [rsp+60h] [rbp-98h]
  __int64 v39; // [rsp+68h] [rbp-90h]
  ULONG_PTR v40; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-80h]
  struct _LIST_ENTRY **v42; // [rsp+80h] [rbp-78h]
  __int128 v43; // [rsp+88h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-60h]

  v4 = 0;
  v5 = a2;
  v40 = 0LL;
  v33 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v42 = p_Blink;
  v36 = 0LL;
  v32 = 0;
  v38 = MiPageSizes[a3];
  v41 = a4[2];
  v7 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 2 - a3;
  v31 = 2 - a3;
  if ( a3 < 2 )
  {
    v32 = 2 - a3;
    v9 = v8;
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v9;
    }
    while ( v9 );
    v31 = 2 - a3;
  }
  v10 = 1LL;
  if ( a3 > 1 )
    v10 = 16LL;
  v37 = v10;
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = v11;
  while ( 1 )
  {
    v44 = 0LL;
    v43 = 0LL;
    v30 = MiLockWorkingSetShared((__int64)p_Blink);
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v7, &v40, 0);
    v12 = valid;
    if ( valid != v11 )
      break;
    v13 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) == 0 )
      break;
    v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
    if ( v14 != v5 )
      break;
    v15 = 48 * v14 - 0x220000000000LL;
    if ( MiIdentifyPfnWrapper(v15, &v43) != v38 )
      break;
    v16 = *a4;
    if ( (((unsigned __int8)v43 ^ (unsigned __int8)*a4) & 0x70) != 0
      || (((unsigned __int8)v43 ^ (unsigned __int8)v16) & 0xF) != 0
      || v44 != a4[2]
      || (((unsigned __int64)v43 ^ v16) & 0x1FFFFFFFFFFFE00LL) != 0
      || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || (unsigned __int16)*(_DWORD *)(v15 + 32) != 2 )
    {
      break;
    }
    if ( a3 > 1 )
    {
      v17 = 0;
      v18 = 0LL;
      do
      {
        ++v17;
        *(_QWORD *)(v7 + 8 * v18) = CLFS_LSN_NULL_EXT;
        v18 = v17;
      }
      while ( v17 < v10 );
    }
    else
    {
      if ( (v13 & 0x80u) == 0LL )
        break;
      MiRewritePteWithLockBit((__int64)p_Blink, 0, (volatile __int64 *)v7, CLFS_LSN_NULL_EXT);
      v13 &= 0xCFFFFFFFFFFFFFFFuLL;
    }
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)p_Blink, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
    if ( v32 < 1 )
      MiInsertTbFlushEntry(v20, v41, v10, v8);
    else
      MiInsertLargeTbFlushEntry(v20, v32, v7);
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
    v21 = v36;
    v34 = 0;
    v22 = v15 + 48 * v38;
    v23 = 48 * v36 + v15;
    v24 = v23 + 0x220000000000LL;
    while ( v23 < v22 )
    {
      v36 = ++v21;
      if ( (unsigned __int16)*(_DWORD *)(v24 - 0x21FFFFFFFFE0LL) == 2 )
      {
        if ( (int)MiScrubPage(a1, v23, 0LL, 3) < 0 )
          MiMakePageBad(0xAAAAAAAAAAAAAAABuLL * (v24 >> 4), 1);
        if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0)
          || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, valid)
          || KeShouldYieldProcessor() )
        {
          v34 = 1;
LABEL_38:
          v23 += 48LL;
          break;
        }
        v33 = MiScrubInterrupted(a1);
        if ( v33 )
          goto LABEL_38;
        v21 = v36;
      }
      v23 += 48LL;
      v24 += 48LL;
    }
    v25 = v13 | 0x20;
    v26 = 0;
    v27 = 0LL;
    do
    {
      v28 = (ULONG_PTR *)(v7 + 8 * v27);
      if ( _bittest64(&MiFlags, 0x24u) && (v25 & 0x20) == 0 && (unsigned __int64)v28 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v28, v25, 128);
      *v28 = v25;
      v27 = ++v26;
      v25 = (v25 + 4096) ^ ((v25 + 4096) ^ v25) & 0xFFF0000000000FFFuLL;
    }
    while ( v26 < v37 );
    p_Blink = v42;
    if ( v23 == v22 )
    {
      v4 = 1;
LABEL_50:
      v12 = valid;
      break;
    }
    if ( v33 )
      goto LABEL_50;
    v8 = v31;
    v10 = v37;
    v11 = v39;
    v5 = a2;
    if ( v34 )
    {
      MiUnlockPageTableInternal((__int64)v42, valid);
      MiUnlockWorkingSetShared((__int64)p_Blink, v30);
    }
  }
  MiUnlockPageTableInternal((__int64)p_Blink, v12);
  MiUnlockWorkingSetShared((__int64)p_Blink, v30);
  return v4;
}
