/*
 * XREFs of MiProcessLargeCoalesceBitmapCandidates @ 0x140313370
 * Callers:
 *     MiProcessLargeCoalesceCandidates @ 0x140314284 (MiProcessLargeCoalesceCandidates.c)
 * Callees:
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiCoalesceFreeLargePages @ 0x140312724 (MiCoalesceFreeLargePages.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     MiCheckLargePagesExist @ 0x1403137D8 (MiCheckLargePagesExist.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 */

__int64 __fastcall MiProcessLargeCoalesceBitmapCandidates(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        _WORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  unsigned __int8 v10; // dl
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  int v15; // ebx
  char v16; // al
  unsigned __int8 v17; // r13
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r11
  _QWORD *v21; // rbx
  ULONG64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 QpcTimeStamp; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+20h]
  __int64 v28; // [rsp+90h] [rbp+28h]

  v10 = a7;
  v12 = a1;
  v27 = 261;
  v13 = a3;
  while ( (unsigned __int64)a4 <= a5 )
  {
    if ( (_DWORD)v13 == 2 )
    {
      v14 = *a4 & 0x1F;
    }
    else if ( (_DWORD)v13 == 1 )
    {
      v14 = (unsigned __int64)(unsigned __int16)*a4 >> 10;
    }
    else
    {
      v14 = (*(_DWORD *)a4 >> 19) & 0x3FF;
    }
    if ( v14 != MiLargePageCoalesceSizes[v13] )
      goto LABEL_6;
    if ( (unsigned int)v13 <= 1 )
    {
      v15 = MiCoalesceFreeLargePages(v12, a2, (int)v13 + 1, v10);
    }
    else
    {
      v15 = 0;
      if ( v10 == 2 )
        v16 = MiSafeLockPageAtDpc(a2);
      else
        v16 = MiSafeLockPage(a2);
      v17 = v16;
      if ( v16 == 17 )
        goto LABEL_21;
      v18 = 48 * a2 - 0x220000000000LL;
      v28 = v18;
      if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL)) == a1 )
      {
        v19 = MiCoalesceFreeSmallPages(a2, 0);
        v18 = v28;
        if ( (v19 & 2) != 0 )
          v15 = 1;
      }
      if ( a7 == 2 )
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        MiUnlockPage(v18, v17);
      v12 = a1;
    }
    if ( v15 )
    {
      MiRecordLargePageCandidate(v12, a2, (unsigned int)v13, 2LL);
      v27 = -1073741267;
    }
LABEL_21:
    if ( a8 )
    {
      if ( (unsigned int)MiCheckLargePagesExist(a8) <= 1 )
        return 255LL;
      v21 = *(_QWORD **)(v20 + 32);
      v22 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v21[6] += v22 - v21[7];
      v23 = v21[6];
      v21[7] = v22;
      if ( v23 >= v21[5] )
        return 258LL;
    }
    v12 = a1;
    v10 = a7;
LABEL_6:
    a2 += MiPageSizes[v13];
    a4 = (_WORD *)((char *)a4 + a6);
  }
  return v27;
}
