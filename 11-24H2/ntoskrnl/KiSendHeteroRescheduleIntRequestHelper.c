/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x140297180 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14029D8F0 (KiCheckPreferredHeteroProcessor.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404457F0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r14
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  char v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  __int64 v19; // rdi
  volatile __int64 *v20; // r14
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  bool v28; // zf
  unsigned int v29; // ecx
  char v30; // al
  char v31; // al
  unsigned int v32; // edx
  unsigned __int16 *v33; // rsi
  unsigned __int64 *v34; // r8
  unsigned __int64 v35; // r9
  int v36; // edx
  char v38; // [rsp+30h] [rbp-30h]
  int v39; // [rsp+34h] [rbp-2Ch]
  int v40; // [rsp+38h] [rbp-28h]
  int v41; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-18h] BYREF
  __int128 v44; // [rsp+50h] [rbp-10h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+40h]

  v39 = -1;
  v40 = 0;
  v4 = a2;
  v6 = a3;
  v7 = a1;
  v8 = 0LL;
  v9 = 0;
  v44 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      _BitScanForward64(&v10, v7);
      v38 = v10;
      v45 = v7 ^ (1LL << v10);
      v11 = *((unsigned int *)qword_140F21E78 + 64 * *(unsigned __int8 *)(a4 + 208) + (int)v10);
      v12 = KiProcessorBlock[v11];
      v42 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v12 + 48) );
      }
      v4 = a2;
      v14 = *(_QWORD *)(v12 + 8);
      if ( (*(_BYTE *)(v12 + 35) & 1) == 0 || *(_QWORD *)(v12 + 16) )
      {
        v34 = 0LL;
        v35 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
        v36 = 0;
        v43 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v42 & 1) != 0 )
        {
          if ( (v42 & 1) == 1 )
          {
            v34 = (unsigned __int64 *)(*(_QWORD *)(v35 + 36440) + 8LL);
            v36 = **(unsigned __int8 **)(v35 + 36440);
          }
          if ( !v36 )
            goto LABEL_101;
        }
        else
        {
          v34 = &v43;
          v36 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v34[--v36] + 48), 0LL);
        while ( v36 );
        goto LABEL_101;
      }
      if ( *(_BYTE *)(v12 + 14521) )
        goto LABEL_92;
      v15 = *(_DWORD *)(v14 + 80);
      if ( v15 <= *(_DWORD *)(v14 + 84) )
        v15 = *(_DWORD *)(v14 + 84);
      if ( v15 < KiDynamicHeteroCpuPolicyExpectedCycles
        || !(unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v12 + 8), v12, 0LL) )
      {
        goto LABEL_92;
      }
      if ( a2 )
      {
        if ( (*(_DWORD *)(v14 + 120) & 0x1000) == 0 )
        {
          v8 |= 1LL << v38;
          if ( v39 == -1 || *(char *)(v14 + 195) > v39 )
          {
            v9 = 1;
            v39 = *(char *)(v14 + 195);
            v40 = v11;
          }
        }
        goto LABEL_92;
      }
      _InterlockedAdd16((volatile signed __int16 *)(v14 + 868), 1u);
      KiReleasePrcbLocksForIsolationUnit(&v42);
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v14 + 64) );
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            LODWORD(v20) = 0;
            if ( *(_BYTE *)(v14 + 388) == 1 )
              break;
            switch ( *(_BYTE *)(v14 + 388) )
            {
              case 2:
LABEL_34:
                v22 = *(unsigned int *)(v14 + 536);
                if ( (int)v22 >= 0 )
                {
                  v19 = KiProcessorBlock[v22];
                  KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v42);
                  if ( v14 == *(_QWORD *)(v19 + 8) )
                    goto LABEL_65;
                  if ( *(_BYTE *)(v14 + 388) == 2 && *(_DWORD *)(v14 + 536) == (_DWORD)v22 )
                    __fastfail(0x4Au);
                  goto LABEL_63;
                }
                break;
              case 3:
                v23 = *(unsigned int *)(v14 + 536);
                if ( (int)v23 >= 0 )
                {
                  v19 = KiProcessorBlock[v23];
                  KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v42);
                  if ( v14 == *(_QWORD *)(v19 + 16) )
                    goto LABEL_65;
                  if ( *(_BYTE *)(v14 + 388) == 3 && *(_DWORD *)(v14 + 536) == (_DWORD)v23 )
                    __fastfail(0x1Eu);
                  goto LABEL_63;
                }
                break;
              case 5:
                v21 = *(_BYTE *)(v14 + 112) & 7;
                if ( v21 == 1 || (unsigned __int8)(v21 - 3) <= 3u )
                  goto LABEL_65;
                goto LABEL_34;
              default:
                goto LABEL_65;
            }
          }
          v24 = *(unsigned int *)(v14 + 536);
          if ( (int)v24 < 0 )
            break;
          v19 = KiProcessorBlock[v24];
          KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v42);
          if ( *(_BYTE *)(v14 + 388) == 1 && *(_DWORD *)(v14 + 536) == (_DWORD)v24 )
            goto LABEL_65;
LABEL_63:
          KiReleasePrcbLocksForIsolationUnit(&v42);
        }
        v25 = (unsigned int)v24;
        LODWORD(v25) = v24 & 0x7FFFFFFF;
        v20 = *(volatile __int64 **)(KiProcessorBlock[v25] + 36424);
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *(_QWORD *)&v44 = 0LL;
          *((_QWORD *)&v44 + 1) = v20;
          if ( _InterlockedExchange64(v20, (__int64)&v44) )
            KxWaitForLockOwnerShip(&v44);
        }
        else
        {
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
          {
            do
              KeYieldProcessorEx(&v41);
            while ( *v20 );
          }
        }
        if ( *(_BYTE *)(v14 + 388) == 1 && *(_DWORD *)(v14 + 536) == (_DWORD)v24 )
          break;
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw(&v44);
          v26 = v44;
          if ( (_QWORD)v44 )
          {
LABEL_54:
            *(_QWORD *)&v44 = 0LL;
            v27 = *((_QWORD *)&v44 + 1);
            if ( (((unsigned __int8)v27 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v26 + 8),
                                                             *((__int64 *)&v44 + 1))) & 4) != 0 )
              KeWakeAddressAll(v26 + 8, v27, v16, v17);
          }
          else if ( (__int128 *)_InterlockedCompareExchange64(
                                  *((volatile signed __int64 **)&v44 + 1),
                                  0LL,
                                  (signed __int64)&v44) != &v44 )
          {
            v26 = KxWaitForLockChainValid(&v44);
            goto LABEL_54;
          }
        }
        else
        {
          _InterlockedAnd64(v20, 0LL);
        }
      }
      v19 = 0LL;
LABEL_65:
      _InterlockedAdd16((volatile signed __int16 *)(v14 + 868), 0xFFFFu);
      v28 = (unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline() == 0;
      v30 = *(_BYTE *)(v14 + 388);
      if ( v28 )
      {
        if ( v30 == 2 && !*(_BYTE *)(v19 + 14521) )
        {
          v29 = *(_DWORD *)(v14 + 80);
          if ( v29 <= *(_DWORD *)(v14 + 84) )
            v29 = *(_DWORD *)(v14 + 84);
          if ( v29 >= KiDynamicHeteroCpuPolicyExpectedCycles
            && (unsigned int)KiCheckPreferredHeteroProcessor(v14, v19, 0LL)
            && !_interlockedbittestandset((volatile signed __int32 *)(v14 + 120), 0xCu) )
          {
            goto LABEL_80;
          }
        }
      }
      else if ( v30 == 2 && !*(_BYTE *)(v19 + 14521) )
      {
        v29 = *(_DWORD *)(v14 + 80);
        if ( v29 <= *(_DWORD *)(v14 + 84) )
          v29 = *(_DWORD *)(v14 + 84);
        if ( v29 >= KiDynamicHeteroCpuPolicyExpectedCycles
          && (unsigned int)KiCheckPreferredHeteroProcessor(v14, v19, 0LL) )
        {
LABEL_80:
          v9 = 1;
          *(_BYTE *)(v19 + 14521) = 1;
          v31 = *(_BYTE *)(a4 + 13785);
          if ( !v31 )
          {
            *(_BYTE *)(a4 + 13785) = 1;
            *(_DWORD *)(a4 + 13788) = *(_DWORD *)(v19 + 36);
            goto LABEL_87;
          }
          if ( v31 == 1 )
          {
            v32 = *(_DWORD *)(a4 + 13788);
            if ( v32 == *(_DWORD *)(v19 + 36) )
              goto LABEL_87;
            v33 = (unsigned __int16 *)(a4 + 13792);
            *(_BYTE *)(a4 + 13785) = 2;
            KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 13792), v32);
          }
          else
          {
            v33 = (unsigned __int16 *)(a4 + 13792);
          }
          KeAddGroupAffinityEx(v33, *(unsigned __int8 *)(v19 + 208), *(_QWORD *)(v19 + 200));
        }
      }
LABEL_87:
      KiReleaseThreadStateLock(v29, v19, (unsigned int)&v42, (_DWORD)v20, (__int64)&v44);
      v4 = a2;
      *(_QWORD *)(v14 + 64) = 0LL;
LABEL_92:
      if ( v42 )
        KiReleasePrcbLocksForIsolationUnit(&v42);
LABEL_101:
      v7 = v45;
      if ( !v45 )
      {
        v6 = a3;
        break;
      }
    }
  }
  KiFlushSoftwareInterruptBatch(a4 + 13784);
  if ( v4 )
    *v4 = v8;
  if ( v6 )
    *v6 = KiProcessorBlock[v40];
  return v9;
}
