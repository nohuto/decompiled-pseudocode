/*
 * XREFs of MiZeroAndReleasePages @ 0x14038C180
 * Callers:
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiInsertMdlPageNeedsZero @ 0x14038C62C (MiInsertMdlPageNeedsZero.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiCreatePageChains @ 0x14038D9F0 (MiCreatePageChains.c)
 *     MiPfnBestZeroAttribute @ 0x1403F8C70 (MiPfnBestZeroAttribute.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

volatile signed __int32 *__fastcall MiZeroAndReleasePages(__int64 a1, char a2, char a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rbp
  __int64 CurrentIrql; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int i; // esi
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  int v15; // r14d
  unsigned __int64 v16; // rdi
  unsigned int v17; // esi
  int v18; // r12d
  unsigned int v19; // r13d
  volatile signed __int32 *result; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned __int8 v24; // r15
  int v25; // eax
  _QWORD *v26; // rax
  unsigned __int64 *v27; // rcx
  int v28; // ebp
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 PageChains; // rax
  int v32; // eax
  int v34; // [rsp+30h] [rbp-B8h]
  __int64 v35; // [rsp+38h] [rbp-B0h]
  _QWORD v37[12]; // [rsp+50h] [rbp-98h] BYREF

  v4 = a1;
  memset_0(v37, 0, sizeof(v37));
  v5 = 1;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  if ( (_BYTE)CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v5 = 0;
  v8 = v37;
  v9 = 4LL;
  do
  {
    v8[2] = 0LL;
    v8[1] = v8;
    *v8 = v8;
    v8 += 3;
    --v9;
  }
  while ( v9 );
  for ( i = 0; i < 4; ++i )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64 *)(v4 + 24LL * i);
      v12 = *v11;
      if ( (unsigned __int64 *)*v11 == v11 )
        break;
      if ( *(unsigned __int64 **)(v12 + 8) != v11 )
        goto LABEL_30;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        goto LABEL_30;
      v14 = MiPageSizes[i];
      *v11 = v13;
      *(_QWORD *)(v13 + 8) = v11;
      --v11[2];
      if ( (HIWORD(*(_DWORD *)(v12 + 32)) & 0xC0) == 0xC0 )
      {
        MiSetOriginalPtePfnFromFreeList((__int64 *)(v12 + 16));
        v32 = MiPfnBestZeroAttribute(v12, 1LL);
        MiChangePageAttribute(v12, v32);
      }
      if ( v6 )
        goto LABEL_12;
      if ( v5 )
      {
        v29 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
        v30 = MI_NODE_FROM_PFN(v12);
        PageChains = MiCreatePageChains(v29, v30, 3LL);
        v6 = PageChains;
        if ( PageChains )
        {
          *(_DWORD *)(PageChains + 16) = 33;
LABEL_12:
          MiInsertMdlPageNeedsZero(v6, v12, v14);
          goto LABEL_13;
        }
        v5 = 0;
      }
      v25 = *(_DWORD *)(v12 + 32);
      if ( i == 3 )
        MiZeroPhysicalPage(0LL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4), 0, BYTE2(v25) >> 6);
      else
        MiZeroLargePage(0LL, v12, i, BYTE2(v25) >> 6, (_BYTE)v35 == 2);
      v26 = &v37[3 * i];
      v27 = (unsigned __int64 *)v26[1];
      if ( (_QWORD *)*v27 != v26 )
LABEL_30:
        __fastfail(3u);
      *(_QWORD *)v12 = v26;
      *(_QWORD *)(v12 + 8) = v27;
      *v27 = v12;
      v26[1] = v12;
      ++v37[3 * i + 2];
LABEL_13:
      v4 = a1;
      CurrentIrql = v35;
    }
  }
  if ( v6 )
  {
    MiProcessPageGroupInfo(v6, v37, MiPageSizes, CurrentIrql);
    LOBYTE(CurrentIrql) = v35;
  }
  v15 = a3 & 1;
  v16 = 0LL;
  v17 = 0;
  v18 = 32 * v15;
  v19 = 16 * v15 + 2;
  do
  {
    while ( 1 )
    {
      result = (volatile signed __int32 *)&v37[3 * v17];
      v21 = *(_QWORD *)result;
      if ( *(volatile signed __int32 **)result == result )
        break;
      if ( *(volatile signed __int32 **)(v21 + 8) != result )
        goto LABEL_30;
      v22 = *(_QWORD *)v21;
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
        goto LABEL_30;
      *(_QWORD *)result = v22;
      *(_QWORD *)(v22 + 8) = result;
      --v37[3 * v17 + 2];
      if ( v17 == 3 )
      {
        v23 = 1LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v24 = 17;
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v28 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
        }
        else
        {
          v24 = MiLockPageInline(v21);
        }
        MiClearPfnReuseFields(v21);
        v34 = *(_DWORD *)(v21 + 32);
        BYTE2(v34) = BYTE2(v34) & 0xF8 | 6;
        *(_DWORD *)(v21 + 32) = v34;
        MiFreeSmallPageFromMdl(0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4), 1LL, v19, 0LL);
        MiUnlockPage(v21, v24);
      }
      else
      {
        v23 = MiPageSizes[v17];
        MiFreeLargePageMemory(0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4), v17, v18 + 5);
      }
      LOBYTE(CurrentIrql) = v35;
      v16 += v23;
    }
    ++v17;
  }
  while ( v17 < 4 );
  if ( v16 && (a2 & 1) == 0 )
  {
    _InterlockedAdd64(&qword_140E3CB28, v16);
    if ( v16 > 0x40 )
    {
      if ( v16 > 0x80 )
      {
        result = (volatile signed __int32 *)&unk_140E3CB38;
        if ( v16 > 0x200 )
          result = (volatile signed __int32 *)&unk_140E3CB3C;
      }
      else
      {
        result = (volatile signed __int32 *)&unk_140E3CB34;
      }
    }
    else
    {
      result = (volatile signed __int32 *)&unk_140E3CB30;
    }
    _InterlockedIncrement(result);
  }
  return result;
}
