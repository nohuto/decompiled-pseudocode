/*
 * XREFs of MiZeroAndReleasePages @ 0x140217770
 * Callers:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiInsertMdlPageNeedsZero @ 0x140217C1C (MiInsertMdlPageNeedsZero.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiProcessPageGroupInfo @ 0x1402709E8 (MiProcessPageGroupInfo.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPfnBestZeroAttribute @ 0x1403F90A0 (MiPfnBestZeroAttribute.c)
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

volatile signed __int32 *__fastcall MiZeroAndReleasePages(__int64 a1, char a2, char a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rbp
  __int64 CurrentIrql; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int v18; // r13d
  __int64 v19; // r8
  __int64 v20; // rdx
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r14
  char v25; // r15
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  unsigned int v30; // ebp
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 PageChains; // rax
  unsigned int v34; // r10d
  unsigned int v35; // ebx
  char v36; // r9
  unsigned int v37; // eax
  int v39; // [rsp+30h] [rbp-B8h]
  __int64 v40; // [rsp+38h] [rbp-B0h]
  _QWORD v42[12]; // [rsp+50h] [rbp-98h] BYREF

  v4 = a1;
  memset_0(v42, 0, sizeof(v42));
  v5 = 1;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  if ( (_BYTE)CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v5 = 0;
  v8 = v42;
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
  v10 = 0;
LABEL_6:
  v11 = MiPageSizes;
  do
  {
    v12 = (_QWORD *)(v4 + 24LL * v10);
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      if ( (_QWORD *)v13[1] != v12 )
        goto LABEL_30;
      v14 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        goto LABEL_30;
      v15 = MiPageSizes[v10];
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      --v12[2];
      if ( (HIWORD(*((_DWORD *)v13 + 8)) & 0xC0) == 0xC0 )
      {
        MiSetOriginalPtePfnFromFreeList(v13 + 2, v14, MiPageSizes, CurrentIrql);
        v35 = 16;
        if ( v36 != 2 )
          v35 = v34;
        v37 = MiPfnBestZeroAttribute(v13, 1LL);
        MiChangePageAttribute(v13, v37, v35);
      }
      if ( v6 )
        goto LABEL_12;
      if ( v5 )
      {
        v31 = *((_QWORD *)qword_140E300C8 + ((v13[5] >> 43) & 0x3FFLL));
        v32 = MI_NODE_FROM_PFN(v13, v14, v11, CurrentIrql);
        PageChains = MiCreatePageChains(v31, v32, 3LL);
        v6 = PageChains;
        if ( PageChains )
        {
          *(_DWORD *)(PageChains + 16) = 33;
LABEL_12:
          MiInsertMdlPageNeedsZero(v6, v13, v15);
LABEL_13:
          v4 = a1;
          CurrentIrql = v40;
          goto LABEL_6;
        }
        v5 = 0;
      }
      v27 = *((_DWORD *)v13 + 8);
      if ( v10 == 3 )
        MiZeroPhysicalPage(0LL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 + 0x44000000000LL) >> 4), 0LL, BYTE2(v27) >> 6);
      else
        MiZeroLargePage(0, (_DWORD)v13, v10, BYTE2(v27) >> 6, (_BYTE)v40 == 2);
      v28 = &v42[3 * v10];
      v29 = (_QWORD *)v28[1];
      if ( (_QWORD *)*v29 != v28 )
LABEL_30:
        __fastfail(3u);
      *v13 = v28;
      v13[1] = v29;
      *v29 = v13;
      v28[1] = v13;
      ++v42[3 * v10 + 2];
      goto LABEL_13;
    }
    ++v10;
  }
  while ( v10 < 4 );
  if ( v6 )
  {
    MiProcessPageGroupInfo(v6, v42, MiPageSizes, CurrentIrql);
    CurrentIrql = v40;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = 16 * (a3 & 1) + 2;
  do
  {
    while ( 1 )
    {
      v19 = v17;
      v20 = 3LL * v17;
      result = (volatile signed __int32 *)&v42[3 * v17];
      v22 = *(volatile signed __int32 **)result;
      if ( *(volatile signed __int32 **)result == result )
        break;
      if ( *((volatile signed __int32 **)v22 + 1) != result )
        goto LABEL_30;
      v23 = *(_QWORD *)v22;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v22 + 8LL) != v22 )
        goto LABEL_30;
      *(_QWORD *)result = v23;
      *(_QWORD *)(v23 + 8) = result;
      --v42[3 * v17 + 2];
      if ( v17 == 3 )
      {
        v24 = 1LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v25 = 17;
          v30 = 0;
          while ( _interlockedbittestandset64(v22 + 6, 0x3FuLL) )
          {
            do
            {
              if ( (++v30 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23, v20, v19, CurrentIrql) )
              {
                HvlNotifyLongSpinWait(v30);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *((__int64 *)v22 + 3) < 0 );
          }
        }
        else
        {
          v25 = MiLockPageInline(v22);
        }
        MiClearPfnReuseFields(v22);
        v39 = *((_DWORD *)v22 + 8);
        BYTE2(v39) = BYTE2(v39) & 0xF8 | 6;
        *((_DWORD *)v22 + 8) = v39;
        MiFreeSmallPageFromMdl(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x88000000000LL) >> 4), 1LL, v18, 0LL);
        LOBYTE(v26) = v25;
        MiUnlockPage(v22, v26);
      }
      else
      {
        v24 = MiPageSizes[v17];
        MiFreeLargePageMemory(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x88000000000LL) >> 4));
      }
      CurrentIrql = v40;
      v16 += v24;
    }
    ++v17;
  }
  while ( v17 < 4 );
  if ( v16 && (a2 & 1) == 0 )
  {
    _InterlockedAdd64(&qword_140E3CEA8, v16);
    if ( v16 > 0x40 )
    {
      if ( v16 > 0x80 )
      {
        result = (volatile signed __int32 *)&unk_140E3CEB8;
        if ( v16 > 0x200 )
          result = (volatile signed __int32 *)&unk_140E3CEBC;
      }
      else
      {
        result = (volatile signed __int32 *)&unk_140E3CEB4;
      }
    }
    else
    {
      result = (volatile signed __int32 *)&unk_140E3CEB0;
    }
    _InterlockedIncrement(result);
  }
  return result;
}
