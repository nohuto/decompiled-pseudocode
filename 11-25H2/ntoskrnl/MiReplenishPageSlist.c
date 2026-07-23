/*
 * XREFs of MiReplenishPageSlist @ 0x1404EF270
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     MiSetPfnBlink @ 0x1403B9F10 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     MiIncreaseAvailablePages @ 0x1403BCD40 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14043ADFC (MiPageListCollision.c)
 *     MiAddPageToHeatRanges @ 0x1404404A4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiSetPfnSlist @ 0x1404423D8 (MiSetPfnSlist.c)
 *     MiUpdateZeroFreeBitmap @ 0x14044A678 (MiUpdateZeroFreeBitmap.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1406A8670 (InterlockedPushListSList.c)
 */

unsigned __int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  signed int v10; // esi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  bool v14; // zf
  unsigned __int8 v15; // dl
  __int64 v16; // rax
  unsigned __int8 v17; // r8
  unsigned __int64 *v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 BugCheckParameter4; // r12
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  __int64 v24; // r11
  volatile signed __int32 *v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned __int64 v28; // rdx
  int v29; // ecx
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // rbp
  _BOOL8 v32; // rax
  __int64 *v33; // r10
  __int64 v34; // rdi
  _SLIST_HEADER *v35; // rcx
  PSLIST_ENTRY v36; // rax
  unsigned __int64 v37; // r9
  unsigned int v38; // r10d
  volatile signed __int32 *v39; // rdx
  unsigned int v40; // r15d
  int v41; // r10d
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int128 *v45; // r8
  __int64 v46; // rdx
  int v47; // [rsp+30h] [rbp-C8h]
  int v48; // [rsp+34h] [rbp-C4h]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  __int64 v50; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v51; // [rsp+4Ch] [rbp-ACh]
  _SLIST_ENTRY *ListEnd; // [rsp+50h] [rbp-A8h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-A0h]
  __int64 v54; // [rsp+60h] [rbp-98h]
  __int64 v55; // [rsp+68h] [rbp-90h]
  __int64 v56; // [rsp+70h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-78h]
  unsigned __int64 v58; // [rsp+88h] [rbp-70h]
  _QWORD *v59; // [rsp+90h] [rbp-68h]
  __int64 v60; // [rsp+98h] [rbp-60h]
  volatile signed __int64 *v61; // [rsp+A0h] [rbp-58h]
  __int128 v62; // [rsp+A8h] [rbp-50h] BYREF

  v5 = a3;
  v50 = *(_QWORD *)(a1 + 14984);
  v62 = 0LL;
  result = *(unsigned int *)(v50 + 4);
  if ( (result & 0x10) == 0 )
  {
    v54 = a2;
    v59 = (_QWORD *)(a1 + 8 * (a2 + 1868LL));
    v8 = (a3 >> 18) & 3;
    v60 = 16LL * (unsigned __int8)a3;
    v9 = *(unsigned __int16 *)(v60 + *v59);
    result = *(unsigned int *)(v50 + 16976);
    if ( v9 < result )
    {
      v10 = 0;
      v11 = (int)result - v9;
      if ( (HvlEnlightenments & 0x200000) != 0 )
      {
        v12 = (*a4 >> 3) - a4[1];
        v48 = 1;
        if ( v11 < v12 )
          v12 = v11;
        v11 = v12;
      }
      else
      {
        v48 = 0;
      }
      v13 = v11 + 64;
      v14 = a2 == 0;
      v51 = BYTE1(a3) & 1;
      v15 = BYTE1(a3) & 1;
      if ( v14 )
      {
        result = MiNodeFreeZeroPages(a1, v15, 524304);
        if ( result < v13 || *(_BYTE *)(v50 + 16101) )
          return result;
        v16 = 2880LL;
      }
      else
      {
        result = MiNodeFreeZeroPages(a1, v15, 0x80000);
        if ( result < v13 )
          return result;
        v16 = 3008LL;
      }
      v61 = (volatile signed __int64 *)(v16 + v50);
      v17 = 0;
      if ( (unsigned __int8)MmNumberOfChannels > 1u )
        v17 = BYTE1(v5) & 1;
      v57 = (unsigned int)v8;
      v18 = (unsigned __int64 *)(*(_QWORD *)(a1
                                           + 8
                                           * (v8
                                            + 4
                                            * (v17
                                             + 2 * (v54 + 2 * ((((unsigned int)v5 >> 15) & 1) + 10LL * (WORD1(v5) & 3)))))
                                           + 992)
                               + 88LL * (unsigned __int8)v5);
      if ( v11 > *v18 )
        v11 = *v18;
      result = *(_QWORD *)(v50 + 18688) - v11;
      if ( result >= 0x420 )
      {
        v49 = 0LL;
        v55 = 0LL;
        v19 = 0LL;
        ListEnd = 0LL;
        v20 = 0LL;
        ListEntry = 0LL;
        BugCheckParameter4 = 0LL;
        v56 = 0LL;
        v58 = v11;
        if ( MiDecreaseAvailablePages(v50, v11, 0x420uLL, 0) )
        {
          BugCheckParameter4 = v18[2];
          v56 = (__int64)v18;
          v20 = 48 * BugCheckParameter4 - 0x220000000000LL;
          ListEntry = (_SLIST_ENTRY *)v20;
          while ( 1 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
LABEL_61:
              v19 = v49;
              break;
            }
            ListEnd = (_SLIST_ENTRY *)v20;
            if ( !a2 && (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4), 1uLL);
            if ( dword_140E2FE0C == 1 )
            {
              LOBYTE(v22) = 1;
              v23 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
              v24 = (-85 * (unsigned __int8)((v20 + 0x220000000000LL) >> 4)) & 0x1F;
              v25 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v23 >> 5));
              if ( (unsigned __int64)(v24 + 1) > 0x20 )
              {
                if ( ((-85 * (unsigned __int8)((v20 + 0x220000000000LL) >> 4)) & 0x1F) != 0 )
                {
                  v27 = 32 - (v23 & 0x1F);
                  _InterlockedOr(v25++, ((1 << v27) - 1) << v24);
                  v22 = 1LL - v27;
                  if ( v22 >= 0x20 )
                  {
                    v28 = v22 >> 5;
                    v22 += -32LL * (v22 >> 5);
                    do
                    {
                      *v25++ = -1;
                      --v28;
                    }
                    while ( v28 );
                  }
                  if ( !v22 )
                    goto LABEL_36;
                }
                v26 = (1 << v22) - 1;
              }
              else
              {
                v26 = 1 << v24;
              }
              _InterlockedOr(v25, v26);
            }
LABEL_36:
            v29 = *(_DWORD *)(v20 + 32);
            if ( (_WORD)v29
              || (v29 & 0x200000) != 0
              || (v29 & 0x100000) != 0
              || (BYTE2(v29) & 7u) > 1
              || (v29 & 0x80000) != 0 && (BYTE2(v29) & 7) != 1
              || *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) != v50 )
            {
              KeBugCheckEx(
                0x4Eu,
                0x98uLL,
                0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4),
                *(unsigned int *)(v20 + 32),
                BugCheckParameter4);
            }
            v47 = *(_DWORD *)(v20 + 32);
            BYTE2(v47) = BYTE2(v47) & 0xF8 | 5;
            *(_DWORD *)(v20 + 32) = v47;
            if ( (v29 & 0x80000) != 0 )
              MiPageListCollision(v20);
            *(_QWORD *)(v20 + 24) &= 0xFFFFFF0000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v30 = *(_QWORD *)(v20 + 16);
            if ( qword_140E2D940 )
            {
              if ( (v30 & 0x10) != 0 )
                v30 &= ~0x10uLL;
              else
                v30 &= ~qword_140E2D940;
            }
            if ( HIDWORD(v30) == 4294967293 )
            {
              if ( v48 && (unsigned int)MiAddPageToHeatRanges(a4, BugCheckParameter4, 3) )
                MiIssuePageHeatList((__int64)a4);
            }
            else if ( !a2 )
            {
              ++v55;
            }
            v31 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
            MiUpdateLargePageCandidateValue(v50, v31, 3, 0, 0LL);
            BugCheckParameter4 = *(_QWORD *)v20 & 0xFFFFFFFFFFLL;
            if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
              v20 = 0LL;
            else
              v20 = 48 * BugCheckParameter4 - 0x220000000000LL;
            MiSetPfnSlist((__int64)ListEnd, a2);
            ++v49;
            v32 = 0LL;
            *v33 = v20;
            if ( (WORD1(v5) & 3) != 3 )
              v32 = v31 < 0x100000;
            ++*((_QWORD *)&v62 + v32);
            if ( !--v11 )
              goto LABEL_61;
          }
        }
        if ( v58 == v19 || (result = MiIncreaseAvailablePages(v50, v58 - v19), v19) )
        {
          if ( a4[1] )
            MiIssuePageHeatList((__int64)a4);
          *(_QWORD *)(v56 + 16) = BugCheckParameter4;
          if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
          {
            v34 = a1;
            MiUpdateZeroFreeBitmap(a1, v56, 0);
            *(_QWORD *)(v56 + 24) = 0x3FFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v20, 0x3FFFFFFFFFLL, 0);
            v34 = a1;
          }
          v35 = (_SLIST_HEADER *)(*v59 + v60);
          if ( ListEnd )
            v36 = InterlockedPushListSList(v35, ListEntry, ListEnd, v19);
          else
            v36 = RtlpInterlockedPushEntrySList(v35, ListEntry);
          if ( v36 )
            goto LABEL_82;
          LOBYTE(v37) = 1;
          v38 = (unsigned __int8)v5 % (unsigned int)dword_140E2D98C;
          v39 = (volatile signed __int32 *)(*(_QWORD *)(v34 + 16 * v54 + 14856) + 4 * ((unsigned __int64)v38 >> 5));
          if ( (unsigned __int64)(v38 & 0x1F) + 1 > 0x20 )
          {
            if ( (((unsigned __int8)v5 % (unsigned int)dword_140E2D98C) & 0x1F) != 0 )
            {
              v41 = v38 & 0x1F;
              _InterlockedOr(
                v39++,
                ((1 << (32 - v41)) - 1) << (((unsigned __int8)v5 % (unsigned int)dword_140E2D98C) & 0x1F));
              v37 = 1LL - (unsigned int)(32 - v41);
              if ( v37 >= 0x20 )
              {
                v42 = v37 >> 5;
                v37 += -32LL * (v37 >> 5);
                do
                {
                  *v39++ = -1;
                  --v42;
                }
                while ( v42 );
              }
              if ( !v37 )
                goto LABEL_82;
            }
            v40 = (1 << v37) - 1;
          }
          else
          {
            v40 = 1 << (v38 & 0x1F);
          }
          _InterlockedOr(v39, v40);
LABEL_82:
          v43 = -v19;
          _InterlockedAdd64((volatile signed __int64 *)v56, -v19);
          if ( v55 )
          {
            v44 = *(_QWORD *)(v34 + 8 * ((v5 >> 18) & 3) + 5120);
            *(_QWORD *)(v44 + 8LL * (unsigned __int8)v5) -= v55;
          }
          result = (unsigned __int64)v61;
          _InterlockedAdd64(v61, v43);
          _InterlockedAdd64((volatile signed __int64 *)(v34 + 8 * v54 + 3848), v43);
          if ( (unsigned __int8)MmNumberOfChannels > 1u )
          {
            result = v51;
            _InterlockedAdd64((volatile signed __int64 *)(v34 + 8 * (v54 + 2LL * v51) + 15152), v43);
          }
          if ( v19 )
          {
            v45 = &v62;
            do
            {
              if ( *(_QWORD *)v45 )
              {
                result = v10;
                _InterlockedAdd64((volatile signed __int64 *)(v34 + 8 * (v57 + 4LL * v10) + 3864), -*(_QWORD *)v45);
              }
              v46 = *((_QWORD *)v45 + 1);
              if ( v46 )
              {
                result = v57 + 4LL * (v10 + 1);
                _InterlockedAdd64((volatile signed __int64 *)(v34 + 8 * result + 3864), -v46);
              }
              v10 += 2;
              ++v45;
            }
            while ( (unsigned int)v10 < 2 );
          }
        }
      }
    }
  }
  return result;
}
