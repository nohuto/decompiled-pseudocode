/*
 * XREFs of MiComputeUnusedSegmentReduction @ 0x1403EDBDC
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiMarkPendingCommitRequests @ 0x1403EDD2C (MiMarkPendingCommitRequests.c)
 *     MiShouldTrimUnusedSegments @ 0x14048D3EC (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiComputeUnusedSegmentReduction(__int64 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  KIRQL v7; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx

  v3 = (volatile signed __int32 *)(a1 + 16888);
  *(_OWORD *)a3 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16888));
  v8 = *(_QWORD *)(a1 + 19264);
  v9 = *(_QWORD *)(a1 + 19608);
  v10 = *(_QWORD *)(a1 + 16864);
  v11 = *(_QWORD *)(a1 + 16880);
  MiReleaseSpinLockShared(v3, v7, v12, v13);
  v14 = v9;
  if ( v8 <= v9 )
    v14 = v8;
  if ( v14 > v10 && v9 == *(_QWORD *)(a1 + 16840) )
  {
    if ( (unsigned int)MiShouldTrimUnusedSegments(a1) )
    {
      *(_QWORD *)a3 = v11;
      v17 = *(_QWORD *)(a1 + 2088);
      if ( v17 > v16 )
      {
        v18 = (v17 - 0x100000) >> 12;
        if ( v14 > v18 && v14 - v18 > v11 )
          *(_QWORD *)a3 = v14 - v18;
      }
    }
  }
  if ( a2 == 3 )
  {
    *(_QWORD *)&v15 = qword_140E3CF20;
    if ( qword_140E3D880 > (unsigned __int64)qword_140E3CF20 )
    {
      *(_QWORD *)&v15 = qword_140E3CF08;
      if ( qword_140E3D9D8 == qword_140E3CF08 )
      {
        *(_QWORD *)&v15 = MiShouldTrimUnusedSegments(&MiSystemPartition);
        if ( (_DWORD)v15 )
        {
          *(_QWORD *)&v15 = 1000LL * *(_QWORD *)(a1 + 18512) / qword_140E3D590;
          if ( (_QWORD)v15 )
          {
            *(_QWORD *)&v15 = MiShouldTrimUnusedSegments(a1);
            if ( (_DWORD)v15 )
            {
              v15 = (unsigned __int64)qword_140E2CD58 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
              v23 = *((_QWORD *)&v15 + 1) + ((unsigned __int64)(qword_140E2CD58 - *((_QWORD *)&v15 + 1)) >> 1);
              *((_QWORD *)&v15 + 1) = *(_QWORD *)(a1 + 2088);
              v24 = v21 * (v23 >> 9);
              if ( *((_QWORD *)&v15 + 1) > v22 )
              {
                *(_QWORD *)&v15 = *((_QWORD *)&v15 + 1) - 0x100000LL;
                if ( v24 <= *((_QWORD *)&v15 + 1) - 0x100000LL )
                  *(_QWORD *)&v15 = v24;
                *(_QWORD *)(a3 + 8) = (*((_QWORD *)&v15 + 1) - (_QWORD)v15) >> 12;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v15 = MiMarkPendingCommitRequests(a1);
    *(_QWORD *)(a1 + 2792) = v15;
    if ( (_QWORD)v15 && v14 <= v9 && (unsigned __int64)v15 > v9 - v14 )
    {
      *(_QWORD *)&v15 = v14 - v9 + v15;
      if ( (unsigned __int64)v15 > v14 )
        *(_QWORD *)&v15 = v14;
      if ( (unsigned __int64)v15 > 0x100 )
      {
        v19 = v14 - v15;
        *(_QWORD *)&v15 = *(_QWORD *)a3;
        v20 = v19 + 256;
        if ( !*(_QWORD *)a3 || v20 < (unsigned __int64)v15 )
          *(_QWORD *)a3 = v20;
      }
    }
  }
  return v15;
}
