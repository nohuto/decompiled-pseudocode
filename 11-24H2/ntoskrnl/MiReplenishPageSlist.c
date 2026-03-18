/*
 * XREFs of MiReplenishPageSlist @ 0x1404F40C0
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1403950D0 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 *     MiIncreaseAvailablePages @ 0x1403F66D0 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14042FDFC (MiPageListCollision.c)
 *     MiSetPfnSlist @ 0x14043F360 (MiSetPfnSlist.c)
 *     MiAddPageToHeatRanges @ 0x14043F904 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiUpdateZeroFreeBitmap @ 0x1404426F0 (MiUpdateZeroFreeBitmap.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1406B3940 (InterlockedPushListSList.c)
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
  BOOL v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  __int64 v26; // r11
  volatile signed __int32 *v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned __int64 v30; // rdx
  int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  ULONG_PTR v34; // rbp
  _BOOL8 v35; // rax
  __int64 *v36; // r10
  __int64 v37; // rdi
  union _SLIST_HEADER *v38; // rcx
  PSLIST_ENTRY v39; // rax
  unsigned __int64 v40; // r9
  unsigned int v41; // r10d
  volatile signed __int32 *v42; // rdx
  unsigned int v43; // r15d
  int v44; // r10d
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int128 *v48; // r8
  __int64 v49; // rdx
  int v50; // [rsp+30h] [rbp-C8h]
  int v51; // [rsp+34h] [rbp-C4h]
  __int64 v52; // [rsp+38h] [rbp-C0h]
  __int64 v53; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v54; // [rsp+4Ch] [rbp-ACh]
  struct _SLIST_ENTRY *ListEnd; // [rsp+50h] [rbp-A8h]
  struct _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-A0h]
  __int64 v57; // [rsp+60h] [rbp-98h]
  __int64 v58; // [rsp+68h] [rbp-90h]
  __int64 v59; // [rsp+70h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-78h]
  unsigned __int64 v61; // [rsp+88h] [rbp-70h]
  _QWORD *v62; // [rsp+90h] [rbp-68h]
  __int64 v63; // [rsp+98h] [rbp-60h]
  volatile signed __int64 *v64; // [rsp+A0h] [rbp-58h]
  __int128 v65; // [rsp+A8h] [rbp-50h] BYREF

  v5 = a3;
  v53 = *(_QWORD *)(a1 + 14984);
  v65 = 0LL;
  result = *(unsigned int *)(v53 + 4);
  if ( (result & 0x10) == 0 )
  {
    v57 = a2;
    v62 = (_QWORD *)(a1 + 8 * (a2 + 1868LL));
    v8 = (a3 >> 18) & 3;
    v63 = 16LL * (unsigned __int8)a3;
    v9 = *(unsigned __int16 *)(v63 + *v62);
    result = *(unsigned int *)(v53 + 16976);
    if ( v9 < result )
    {
      v10 = 0;
      v11 = (int)result - v9;
      if ( (HvlEnlightenments & 0x200000) != 0 )
      {
        v12 = (*a4 >> 3) - a4[1];
        v51 = 1;
        if ( v11 < v12 )
          v12 = v11;
        v11 = v12;
      }
      else
      {
        v51 = 0;
      }
      v13 = v11 + 64;
      v14 = a2 == 0;
      v54 = BYTE1(a3) & 1;
      v15 = BYTE1(a3) & 1;
      if ( v14 )
      {
        result = MiNodeFreeZeroPages(a1, v15, 524304);
        if ( result < v13 || *(_BYTE *)(v53 + 16101) )
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
      v64 = (volatile signed __int64 *)(v16 + v53);
      v17 = 0;
      if ( (unsigned __int8)MmNumberOfChannels > 1u )
        v17 = BYTE1(v5) & 1;
      v60 = (unsigned int)v8;
      v18 = (unsigned __int64 *)(*(_QWORD *)(a1
                                           + 8
                                           * (v8
                                            + 4
                                            * (v17
                                             + 2 * (v57 + 2 * ((((unsigned int)v5 >> 15) & 1) + 10LL * (WORD1(v5) & 3)))))
                                           + 992)
                               + 88LL * (unsigned __int8)v5);
      if ( v11 > *v18 )
        v11 = *v18;
      result = *(_QWORD *)(v53 + 18688) - v11;
      if ( result >= 0x420 )
      {
        v52 = 0LL;
        v58 = 0LL;
        v19 = 0LL;
        ListEnd = 0LL;
        v20 = 0LL;
        ListEntry = 0LL;
        BugCheckParameter4 = 0LL;
        v59 = 0LL;
        v61 = v11;
        v22 = MiDecreaseAvailablePages(v53, v11, 0x420uLL, 0);
        v23 = 32LL;
        if ( v22 )
        {
          BugCheckParameter4 = v18[2];
          v59 = (__int64)v18;
          v20 = 48 * BugCheckParameter4 - 0x220000000000LL;
          ListEntry = (struct _SLIST_ENTRY *)v20;
          while ( 1 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
LABEL_62:
              v19 = v52;
              break;
            }
            ListEnd = (struct _SLIST_ENTRY *)v20;
            if ( !a2 && (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
            {
              MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4), 1uLL);
              LODWORD(v23) = 32;
            }
            if ( dword_140E3004C == 1 )
            {
              LOBYTE(v24) = 1;
              v25 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
              v26 = (-85 * (unsigned __int8)((v20 + 0x220000000000LL) >> 4)) & 0x1F;
              v27 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v25 >> 5));
              if ( (unsigned __int64)(v26 + 1) <= 0x20 )
              {
                v28 = 1 << v26;
LABEL_35:
                _InterlockedOr(v27, v28);
                goto LABEL_36;
              }
              if ( ((-85 * (unsigned __int8)((v20 + 0x220000000000LL) >> 4)) & 0x1F) == 0 )
                goto LABEL_34;
              v29 = v23 - (v25 & 0x1F);
              _InterlockedOr(v27++, ((1 << v29) - 1) << v26);
              v24 = 1LL - v29;
              if ( v24 >= 0x20 )
              {
                v30 = v24 >> 5;
                v24 += -32LL * (v24 >> 5);
                do
                {
                  *v27++ = -1;
                  --v30;
                }
                while ( v30 );
              }
              if ( v24 )
              {
LABEL_34:
                v28 = (1 << v24) - 1;
                goto LABEL_35;
              }
            }
LABEL_36:
            v31 = *(_DWORD *)(v20 + 32);
            if ( (_WORD)v31
              || (v31 & 0x200000) != 0
              || (v31 & 0x100000) != 0
              || (BYTE2(v31) & 7u) > 1
              || (v31 & 0x80000) != 0 && (BYTE2(v31) & 7) != 1
              || *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) != v53 )
            {
              KeBugCheckEx(
                0x4Eu,
                0x98uLL,
                0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4),
                *(unsigned int *)(v20 + 32),
                BugCheckParameter4);
            }
            v50 = *(_DWORD *)(v20 + 32);
            BYTE2(v50) = BYTE2(v50) & 0xF8 | 5;
            *(_DWORD *)(v20 + 32) = v50;
            if ( (v31 & 0x80000) != 0 )
              MiPageListCollision((__int64 *)v20);
            *(_QWORD *)(v20 + 24) &= 0xFFFFFF0000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v32 = *(_QWORD *)(v20 + 16);
            if ( qword_140E2DB80 )
            {
              if ( (v32 & 0x10) != 0 )
                v32 &= ~0x10uLL;
              else
                v32 &= ~qword_140E2DB80;
            }
            if ( HIDWORD(v32) == 4294967293 )
            {
              if ( v51 && (unsigned int)MiAddPageToHeatRanges(a4, BugCheckParameter4, 3) )
                MiIssuePageHeatList(a4, v33);
            }
            else if ( !a2 )
            {
              ++v58;
            }
            v34 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
            MiUpdateLargePageCandidateValue(v53, v34, 3, 0, 0LL);
            BugCheckParameter4 = *(_QWORD *)v20 & 0xFFFFFFFFFFLL;
            if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
              v20 = 0LL;
            else
              v20 = 48 * BugCheckParameter4 - 0x220000000000LL;
            MiSetPfnSlist((__int64)ListEnd, a2);
            ++v52;
            v35 = 0LL;
            *v36 = v20;
            if ( (WORD1(v5) & 3) != 3 )
              v35 = v34 < 0x100000;
            ++*((_QWORD *)&v65 + v35);
            if ( !--v11 )
              goto LABEL_62;
            v23 = 32LL;
          }
        }
        if ( v61 == v19 || (result = MiIncreaseAvailablePages(v53, v61 - v19), v19) )
        {
          if ( a4[1] )
            MiIssuePageHeatList(a4, v23);
          *(_QWORD *)(v59 + 16) = BugCheckParameter4;
          if ( BugCheckParameter4 == 0x3FFFFFFFFFLL )
          {
            v37 = a1;
            MiUpdateZeroFreeBitmap(a1, v59, 0);
            *(_QWORD *)(v59 + 24) = 0x3FFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v20, 0x3FFFFFFFFFLL, 0);
            v37 = a1;
          }
          v38 = (union _SLIST_HEADER *)(*v62 + v63);
          if ( ListEnd )
            v39 = InterlockedPushListSList(v38, ListEntry, ListEnd, v19);
          else
            v39 = RtlpInterlockedPushEntrySList(v38, ListEntry);
          if ( v39 )
            goto LABEL_83;
          LOBYTE(v40) = 1;
          v41 = (unsigned __int8)v5 % (unsigned int)dword_140E2DBCC;
          v42 = (volatile signed __int32 *)(*(_QWORD *)(v37 + 16 * v57 + 14856) + 4 * ((unsigned __int64)v41 >> 5));
          if ( (unsigned __int64)(v41 & 0x1F) + 1 > 0x20 )
          {
            if ( (((unsigned __int8)v5 % (unsigned int)dword_140E2DBCC) & 0x1F) != 0 )
            {
              v44 = v41 & 0x1F;
              _InterlockedOr(
                v42++,
                ((1 << (32 - v44)) - 1) << (((unsigned __int8)v5 % (unsigned int)dword_140E2DBCC) & 0x1F));
              v40 = 1LL - (unsigned int)(32 - v44);
              if ( v40 >= 0x20 )
              {
                v45 = v40 >> 5;
                v40 += -32LL * (v40 >> 5);
                do
                {
                  *v42++ = -1;
                  --v45;
                }
                while ( v45 );
              }
              if ( !v40 )
                goto LABEL_83;
            }
            v43 = (1 << v40) - 1;
          }
          else
          {
            v43 = 1 << (v41 & 0x1F);
          }
          _InterlockedOr(v42, v43);
LABEL_83:
          v46 = -v19;
          _InterlockedAdd64((volatile signed __int64 *)v59, -v19);
          if ( v58 )
          {
            v47 = *(_QWORD *)(v37 + 8 * ((v5 >> 18) & 3) + 5120);
            *(_QWORD *)(v47 + 8LL * (unsigned __int8)v5) -= v58;
          }
          result = (unsigned __int64)v64;
          _InterlockedAdd64(v64, v46);
          _InterlockedAdd64((volatile signed __int64 *)(v37 + 8 * v57 + 3848), v46);
          if ( (unsigned __int8)MmNumberOfChannels > 1u )
          {
            result = v54;
            _InterlockedAdd64((volatile signed __int64 *)(v37 + 8 * (v57 + 2LL * v54) + 15152), v46);
          }
          if ( v19 )
          {
            v48 = &v65;
            do
            {
              if ( *(_QWORD *)v48 )
              {
                result = v10;
                _InterlockedAdd64((volatile signed __int64 *)(v37 + 8 * (v60 + 4LL * v10) + 3864), -*(_QWORD *)v48);
              }
              v49 = *((_QWORD *)v48 + 1);
              if ( v49 )
              {
                result = v60 + 4LL * (v10 + 1);
                _InterlockedAdd64((volatile signed __int64 *)(v37 + 8 * result + 3864), -v49);
              }
              v10 += 2;
              ++v48;
            }
            while ( (unsigned int)v10 < 2 );
          }
        }
      }
    }
  }
  return result;
}
