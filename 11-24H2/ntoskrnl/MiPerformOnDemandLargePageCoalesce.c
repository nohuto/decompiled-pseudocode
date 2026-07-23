/*
 * XREFs of MiPerformOnDemandLargePageCoalesce @ 0x1402640DC
 * Callers:
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiLargeCoalesceCandidatesExist @ 0x140264934 (MiLargeCoalesceCandidatesExist.c)
 *     MiAccumulateTimeBoundTime @ 0x140265384 (MiAccumulateTimeBoundTime.c)
 *     MiCheckLargePagesExist @ 0x1403137D8 (MiCheckLargePagesExist.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiProcessLargeCoalesceCandidates @ 0x140314284 (MiProcessLargeCoalesceCandidates.c)
 */

__int64 __fastcall MiPerformOnDemandLargePageCoalesce(__int64 a1, unsigned int a2, unsigned int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r11d
  struct _KTHREAD *CurrentThread; // r13
  int v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  int v15; // edi
  int v17; // eax
  int v18; // eax
  ULONG64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 QpcTimeStamp; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-28h]
  unsigned int v25; // [rsp+34h] [rbp-24h]
  int v26; // [rsp+38h] [rbp-20h]
  int v27; // [rsp+3Ch] [rbp-1Ch]
  __int64 v28; // [rsp+40h] [rbp-18h]
  _QWORD *v29; // [rsp+48h] [rbp-10h]
  unsigned __int64 v30; // [rsp+A0h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+50h]
  LONG SpareLong; // [rsp+B0h] [rbp+58h]
  unsigned int v33; // [rsp+B8h] [rbp+60h]

  v5 = a5;
  v6 = 0;
  v8 = a2;
  v28 = *(_QWORD *)(a1 + 16) + 57216LL * a3;
  v27 = 0;
  v23 = a1;
  v9 = *(_QWORD *)(v28 + 14976);
  v24 = a2;
  v25 = a3;
  v26 = a4;
  v29 = a5;
  if ( !v9 && (MiFlags & 0x30) != 0 || a5[6] >= a5[5] )
    return 0LL;
  v10 = 1;
  SpareLong = 0;
  v31 = 1;
  CurrentThread = 0LL;
  v12 = 0;
  v13 = a2;
  while ( 1 )
  {
    if ( v10 )
    {
      v31 = MiLargeCoalesceCandidatesExist(&v23, (unsigned int)v8);
      if ( v31 )
      {
        if ( !v12 )
        {
          v5[7] = KeQueryUnbiasedInterruptTimePrecise(&v30);
          v12 = 1;
          CurrentThread = KeGetCurrentThread();
          SpareLong = CurrentThread->WaitBlock[0].SpareLong;
        }
        v17 = MiProcessLargeCoalesceCandidates(a1, (unsigned int)v8, &v23);
        v10 = v31;
        v15 = v17;
        if ( v17 == -1073741267 )
          goto LABEL_19;
        if ( v17 != 261 )
          goto LABEL_8;
      }
    }
    v14 = v13 + 1;
    v33 = v14;
    if ( v14 == 3 )
    {
      v15 = 261;
      goto LABEL_8;
    }
    while ( v14 > (unsigned int)v8 )
    {
      v31 = MiLargeCoalesceCandidatesExist(&v23, v14);
      if ( !v31 )
        break;
      if ( !v12 )
      {
        v19 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        v12 = 1;
        a5[7] = v19;
        CurrentThread = KeGetCurrentThread();
        SpareLong = CurrentThread->WaitBlock[0].SpareLong;
      }
      v21 = MiProcessLargeCoalesceCandidates(a1, v14, &v23);
      v15 = v21;
      if ( v21 == -1073741267 )
      {
        ++v14;
      }
      else if ( v21 != 261 )
      {
        goto LABEL_8;
      }
      --v14;
    }
    v18 = MiCheckLargePagesExist(&v23);
    v13 = v33;
    if ( v18 <= 1 )
      break;
LABEL_19:
    v5 = a5;
  }
  v15 = 255;
LABEL_8:
  if ( v12 )
  {
    MiAccumulateTimeBoundTime(a5 + 5, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48 * (v8 + 344)));
  }
  if ( v15 == 258 )
  {
    if ( !CurrentThread || SpareLong == CurrentThread->WaitBlock[0].SpareLong )
      v20 = 48 * v8 + 16516;
    else
      v20 = 48 * v8 + 16520;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + v20));
  }
  else if ( v15 == 255 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48 * v8 + 16524));
    return 1;
  }
  return v6;
}
