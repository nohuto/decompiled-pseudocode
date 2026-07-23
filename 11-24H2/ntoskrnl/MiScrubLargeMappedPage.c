/*
 * XREFs of MiScrubLargeMappedPage @ 0x14068E678
 * Callers:
 *     MiScrubProcessLargePage @ 0x1407FE2B0 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1404845F4 (MiScrubInterrupted.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _LIST_ENTRY **p_Blink; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned int v10; // r15d
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  volatile unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 *ProcessorFlushList; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbp
  __int64 v26; // r14
  ULONG_PTR v27; // rbx
  unsigned int v28; // r15d
  __int64 v29; // rax
  ULONG_PTR *v30; // r14
  unsigned __int8 v32; // [rsp+30h] [rbp-C8h]
  unsigned int v33; // [rsp+34h] [rbp-C4h]
  int v34; // [rsp+38h] [rbp-C0h]
  BOOL v35; // [rsp+3Ch] [rbp-BCh]
  int v36; // [rsp+40h] [rbp-B8h]
  unsigned __int64 valid; // [rsp+48h] [rbp-B0h]
  __int64 v38; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A0h]
  __int64 v40; // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  ULONG_PTR v42; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-80h]
  struct _LIST_ENTRY **v44; // [rsp+80h] [rbp-78h]
  __int128 v45; // [rsp+88h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-60h]
  __int64 v48; // [rsp+108h] [rbp+10h]
  unsigned int v49; // [rsp+110h] [rbp+18h]

  v49 = a3;
  v48 = a2;
  v4 = 0;
  v5 = a2;
  v42 = 0LL;
  v35 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v44 = p_Blink;
  v38 = 0LL;
  v34 = 0;
  v40 = MiPageSizes[(unsigned int)a3];
  v7 = a4[2];
  v8 = 0x7FFFFFFFF8LL;
  v43 = v7;
  v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 2 - a3;
  v33 = 2 - a3;
  if ( (unsigned int)a3 < 2 )
  {
    v34 = 2 - a3;
    v11 = v10;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
    v33 = 2 - a3;
  }
  v12 = 1LL;
  if ( (unsigned int)a3 > 1 )
    v12 = 16LL;
  v39 = v12;
  v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v13;
  while ( 1 )
  {
    v46 = 0LL;
    v45 = 0LL;
    v32 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3, v8);
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v9, &v42, 0);
    v14 = valid;
    if ( valid != v13 )
      break;
    v15 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 1) == 0 )
      break;
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    if ( v16 != v5 )
      break;
    v17 = 48 * v16 - 0x220000000000LL;
    if ( MiIdentifyPfnWrapper(v17, &v45) != v40 )
      break;
    v18 = *a4;
    if ( (((unsigned __int8)v45 ^ (unsigned __int8)*a4) & 0x70) != 0
      || (((unsigned __int8)v45 ^ (unsigned __int8)v18) & 0xF) != 0
      || v46 != a4[2]
      || (((unsigned __int64)v45 ^ v18) & 0x1FFFFFFFFFFFE00LL) != 0
      || (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || (unsigned __int16)*(_DWORD *)(v17 + 32) != 2 )
    {
      break;
    }
    if ( v49 > 1 )
    {
      v19 = 0;
      v20 = 0LL;
      do
      {
        ++v19;
        *(_QWORD *)(v9 + 8 * v20) = CLFS_LSN_NULL_EXT;
        v20 = v19;
      }
      while ( v19 < v12 );
    }
    else
    {
      if ( (v15 & 0x80u) == 0LL )
        break;
      MiRewritePteWithLockBit((__int64)p_Blink, 0, (volatile __int64 *)v9, CLFS_LSN_NULL_EXT);
      v15 &= 0xCFFFFFFFFFFFFFFFuLL;
    }
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)p_Blink, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
    if ( v34 < 1 )
      MiInsertTbFlushEntry(v22, v43, v12, v10);
    else
      MiInsertLargeTbFlushEntry(v22, v34, v9);
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
    v23 = v38;
    v36 = 0;
    v24 = v17 + 48 * v40;
    v25 = 48 * v38 + v17;
    v26 = v25 + 0x220000000000LL;
    while ( v25 < v24 )
    {
      v38 = ++v23;
      if ( (unsigned __int16)*(_DWORD *)(v26 - 0x21FFFFFFFFE0LL) == 2 )
      {
        if ( (int)MiScrubPage(a1, v25, 0LL, 3) < 0 )
          MiMakePageBad(0xAAAAAAAAAAAAAAABuLL * (v26 >> 4), 1);
        if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0)
          || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, valid)
          || KeShouldYieldProcessor() )
        {
          v36 = 1;
LABEL_38:
          v25 += 48LL;
          break;
        }
        v35 = MiScrubInterrupted(a1);
        if ( v35 )
          goto LABEL_38;
        v23 = v38;
      }
      v25 += 48LL;
      v26 += 48LL;
    }
    v27 = v15 | 0x20;
    v28 = 0;
    v29 = 0LL;
    do
    {
      v30 = (ULONG_PTR *)(v9 + 8 * v29);
      if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x20) == 0 && (unsigned __int64)v30 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v30, v27, 128LL);
      *v30 = v27;
      ++v28;
      a2 = 0xFFF0000000000FFFuLL;
      v29 = v28;
      v27 = (v27 + 4096) ^ ((v27 + 4096) ^ v27) & 0xFFF0000000000FFFuLL;
    }
    while ( v28 < v39 );
    p_Blink = v44;
    if ( v25 == v24 )
    {
      v4 = 1;
LABEL_50:
      v14 = valid;
      break;
    }
    if ( v35 )
      goto LABEL_50;
    v10 = v33;
    v12 = v39;
    v13 = v41;
    v5 = v48;
    if ( v36 )
    {
      MiUnlockPageTableInternal((__int64)v44, valid);
      MiUnlockWorkingSetShared((__int64)p_Blink, v32);
    }
  }
  MiUnlockPageTableInternal((__int64)p_Blink, v14);
  MiUnlockWorkingSetShared((__int64)p_Blink, v32);
  return v4;
}
