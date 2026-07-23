/*
 * XREFs of KiComputeThreadAffinity @ 0x1402A9724
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiUpdateThreadCpuSets @ 0x14048B9CC (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14031887C (KiUpdateNodeAffinitizedFlag.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x1403A1D94 (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v4; // rsi
  unsigned __int16 Size; // ax
  unsigned __int16 v6; // cx
  unsigned __int16 *v7; // rdx
  unsigned __int16 Count; // bx
  __int64 v9; // rax
  unsigned int v10; // edx
  $B38C3B1372D6E954799962D5DD404846 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  int v14; // r8d
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  unsigned __int16 *v17; // r9
  unsigned __int16 v18; // r10
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  __int64 v21; // rax
  unsigned __int16 *v22; // r9
  unsigned __int16 v23; // r8
  struct _KAFFINITY_EX *v24; // r10
  unsigned __int16 i; // dx
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // r8
  unsigned __int16 j; // cx
  unsigned __int64 v34; // rdx
  __int128 v35; // [rsp+28h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v36; // [rsp+38h] [rbp-D0h] BYREF

  v35 = 0LL;
  memset_0(&v36.8, 0, sizeof(v36.8));
  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    while ( 1 )
    {
      v4 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v4 = KiCpuSetSequence;
        if ( (KiCpuSetSequence & 1) == 0 )
          break;
        _mm_pause();
      }
      v36.Size = 32;
      memset_0(&v36.8, 0, sizeof(v36.8));
      Size = v36.Size;
      v6 = 0;
      v7 = *(unsigned __int16 **)(a1 + 552);
      v36.Reserved = 0;
      Count = *v7;
      if ( *v7 > v36.Size )
        Count = v36.Size;
      v36.Count = Count;
      if ( Count )
      {
        memmove(&v36.8, v7 + 4, 8LL * Count);
        Size = v36.Size;
        v6 = Count;
        Count = v36.Count;
      }
      if ( v6 < Size )
      {
        do
        {
          v9 = v6++;
          v36.Bitmap[v9] = 0LL;
        }
        while ( v6 < v36.Size );
        Count = v36.Count;
      }
      v10 = 0;
      if ( Count )
      {
        v11 = &v36.8;
        v12 = Count;
        do
        {
          v13 = v11->Bitmap[0];
          v11 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v11 + 8);
          v10 += __popcnt(v13);
          --v12;
        }
        while ( v12 );
        if ( v10 > 1 )
        {
          KiComputeCpuSetAffinity(a1, &v36, v11);
          Count = v36.Count;
          v14 = 0;
          v15 = v36.Size;
          v16 = 0;
          v17 = *(unsigned __int16 **)(a1 + 552);
          v18 = *v17;
          if ( *v17 < v36.Count )
            Count = *v17;
          if ( Count > v36.Size )
            Count = v36.Size;
          v36.Count = Count;
          if ( Count )
          {
            do
            {
              v30 = *(_QWORD *)&v17[4 * v16 + 4];
              v31 = (v30 & v36.Bitmap[v16]) == 0;
              v36.Bitmap[v16] &= v30;
              Count = v36.Count;
              if ( !v31 )
                v14 = 1;
              ++v16;
            }
            while ( v16 < v36.Count );
            v15 = v36.Size;
          }
          v36.Reserved = 0;
          if ( v16 < v15 )
          {
            do
            {
              v19 = v16++;
              v36.Bitmap[v19] = 0LL;
              v15 = v36.Size;
            }
            while ( v16 < v36.Size );
            Count = v36.Count;
          }
          if ( !v14 )
          {
            v36.Reserved = 0;
            Count = v18;
            v20 = 0;
            if ( v18 > v15 )
              Count = v15;
            v36.Count = Count;
            if ( Count )
            {
              memmove(&v36.8, v17 + 4, 8LL * Count);
              v15 = v36.Size;
              v20 = Count;
              Count = v36.Count;
            }
            if ( v20 < v15 )
            {
              do
              {
                v21 = v20++;
                v36.Bitmap[v21] = 0LL;
              }
              while ( v20 < v36.Size );
              Count = v36.Count;
            }
          }
        }
      }
      v22 = *(unsigned __int16 **)(a1 + 576);
      v23 = *v22;
      if ( *v22 >= Count )
      {
        v24 = *(struct _KAFFINITY_EX **)(a1 + 576);
        v23 = Count;
      }
      else
      {
        v24 = &v36;
      }
      for ( i = 0; i < v23; ++i )
      {
        if ( *(_QWORD *)&v22[4 * i + 4] != v36.Bitmap[i] )
        {
LABEL_43:
          KiCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), v22[1], &v36);
          v27 = *(unsigned int *)(a1 + 196);
          v28 = KiProcessorBlock[v27];
          if ( !(unsigned int)KeCheckProcessorAffinityEx(*(_QWORD *)(a1 + 576), v27) )
          {
            v32 = *(_QWORD *)(v2 + 184);
            for ( j = 0; j < Count; ++j )
            {
              v34 = v36.Bitmap[j];
              if ( v34 )
              {
                *((_QWORD *)&v35 + 1) = j;
                *(_QWORD *)&v35 = v34;
                goto LABEL_56;
              }
            }
            j = WORD4(v35);
LABEL_56:
            v27 = (unsigned __int16)((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64))KiReselectIdealProcessorAfterAffinityChange)(
                                      a1,
                                      &v35,
                                      v28,
                                      v32 + 16 + 2LL * j);
          }
          v29 = KiProcessorBlock[v27];
          *(_DWORD *)(a1 + 588) = v27;
          *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v29 + 208);
          KiUpdateSharedReadyQueueAffinityThread(v29, a1);
          KiUpdateNodeAffinitizedFlag(a1);
          v3 = 1;
          goto LABEL_39;
        }
      }
      while ( i < v24->Count )
      {
        if ( v24->Bitmap[i] )
          goto LABEL_43;
        ++i;
      }
LABEL_39:
      ;
    }
    while ( KiCpuSetSequence != v4 );
  }
  *(_QWORD *)(a1 + 568) = v4;
  return v3;
}
