/*
 * XREFs of MiComputeUnusedSegmentReduction @ 0x1403F7C6C
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiMarkPendingCommitRequests @ 0x1403F7DBC (MiMarkPendingCommitRequests.c)
 *     MiShouldTrimUnusedSegments @ 0x14049257C (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiComputeUnusedSegmentReduction(__int64 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  KIRQL v7; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx

  v3 = (volatile signed __int32 *)(a1 + 16888);
  *(_OWORD *)a3 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16888));
  v8 = *(_QWORD *)(a1 + 19264);
  v9 = *(_QWORD *)(a1 + 19608);
  v10 = *(_QWORD *)(a1 + 16864);
  v11 = *(_QWORD *)(a1 + 16880);
  MiReleaseSpinLockShared(v3, v7);
  v12 = v9;
  if ( v8 <= v9 )
    v12 = v8;
  if ( v12 > v10 && v9 == *(_QWORD *)(a1 + 16840) )
  {
    if ( (unsigned int)MiShouldTrimUnusedSegments(a1) )
    {
      *(_QWORD *)a3 = v11;
      v15 = *(_QWORD *)(a1 + 2088);
      if ( v15 > v14 )
      {
        v16 = (v15 - 0x100000) >> 12;
        if ( v12 > v16 && v12 - v16 > v11 )
          *(_QWORD *)a3 = v12 - v16;
      }
    }
  }
  if ( a2 == 3 )
  {
    *(_QWORD *)&v13 = qword_140E3CDE0;
    if ( qword_140E3D740 > (unsigned __int64)qword_140E3CDE0 )
    {
      *(_QWORD *)&v13 = qword_140E3CDC8;
      if ( qword_140E3D898 == qword_140E3CDC8 )
      {
        *(_QWORD *)&v13 = MiShouldTrimUnusedSegments(&MiSystemPartition);
        if ( (_DWORD)v13 )
        {
          *(_QWORD *)&v13 = 1000LL * *(_QWORD *)(a1 + 18512) / qword_140E3D450;
          if ( (_QWORD)v13 )
          {
            *(_QWORD *)&v13 = MiShouldTrimUnusedSegments(a1);
            if ( (_DWORD)v13 )
            {
              v13 = (unsigned __int64)qword_140E2CC18 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
              v21 = *((_QWORD *)&v13 + 1) + ((unsigned __int64)(qword_140E2CC18 - *((_QWORD *)&v13 + 1)) >> 1);
              *((_QWORD *)&v13 + 1) = *(_QWORD *)(a1 + 2088);
              v22 = v19 * (v21 >> 9);
              if ( *((_QWORD *)&v13 + 1) > v20 )
              {
                *(_QWORD *)&v13 = *((_QWORD *)&v13 + 1) - 0x100000LL;
                if ( v22 <= *((_QWORD *)&v13 + 1) - 0x100000LL )
                  *(_QWORD *)&v13 = v22;
                *(_QWORD *)(a3 + 8) = (*((_QWORD *)&v13 + 1) - (_QWORD)v13) >> 12;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v13 = MiMarkPendingCommitRequests(a1);
    *(_QWORD *)(a1 + 2792) = v13;
    if ( (_QWORD)v13 && v12 <= v9 && (unsigned __int64)v13 > v9 - v12 )
    {
      *(_QWORD *)&v13 = v12 - v9 + v13;
      if ( (unsigned __int64)v13 > v12 )
        *(_QWORD *)&v13 = v12;
      if ( (unsigned __int64)v13 > 0x100 )
      {
        v17 = v12 - v13;
        *(_QWORD *)&v13 = *(_QWORD *)a3;
        v18 = v17 + 256;
        if ( !*(_QWORD *)a3 || v18 < (unsigned __int64)v13 )
          *(_QWORD *)a3 = v18;
      }
    }
  }
  return v13;
}
