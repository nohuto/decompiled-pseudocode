/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x140330C10 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404F0A84 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
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
  int v13; // ebx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  struct _KPRCB **v16; // rdx
  __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rdi
  volatile __int64 *v20; // r14
  __int64 *v21; // rcx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  unsigned __int64 v29; // rcx
  char v30; // al
  unsigned int v31; // eax
  unsigned int v32; // eax
  char v33; // al
  unsigned int v34; // edx
  unsigned __int16 *v35; // rsi
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // r9
  int v38; // edx
  char v40; // [rsp+30h] [rbp-30h]
  int v41; // [rsp+34h] [rbp-2Ch]
  int v42; // [rsp+38h] [rbp-28h]
  int v43; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-18h] BYREF
  __int128 v46; // [rsp+50h] [rbp-10h] BYREF
  __int64 v47; // [rsp+A0h] [rbp+40h]

  v41 = -1;
  v42 = 0;
  v4 = a2;
  v6 = a3;
  v7 = a1;
  v8 = 0LL;
  v9 = 0;
  v46 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      _BitScanForward64(&v10, v7);
      v40 = v10;
      v47 = v7 ^ (1LL << v10);
      v11 = *((unsigned int *)qword_140F216A8 + 64 * *(unsigned __int8 *)(a4 + 208) + (int)v10);
      v12 = KiProcessorBlock[v11];
      v44 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
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
        while ( *(_QWORD *)(v12 + 48) );
      }
      v4 = a2;
      v14 = *(_QWORD *)(v12 + 8);
      if ( (*(_BYTE *)(v12 + 35) & 1) == 0 || *(_QWORD *)(v12 + 16) )
      {
        v36 = 0LL;
        v37 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
        v38 = 0;
        v45 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v44 & 1) != 0 )
        {
          if ( (v44 & 1) == 1 )
          {
            v36 = (unsigned __int64 *)(*(_QWORD *)(v37 + 36440) + 8LL);
            v38 = **(unsigned __int8 **)(v37 + 36440);
          }
          if ( !v38 )
            goto LABEL_101;
        }
        else
        {
          v36 = &v45;
          v38 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v36[--v38] + 48), 0LL);
        while ( v38 );
        goto LABEL_101;
      }
      if ( *(_BYTE *)(v12 + 14521) )
        goto LABEL_92;
      v15 = *(_DWORD *)(v14 + 80);
      if ( v15 <= *(_DWORD *)(v14 + 84) )
        v15 = *(_DWORD *)(v14 + 84);
      if ( v15 < KiDynamicHeteroCpuPolicyExpectedCycles
        || !KiCheckPreferredHeteroProcessor(*(_QWORD *)(v12 + 8), v12, 0) )
      {
        goto LABEL_92;
      }
      if ( a2 )
      {
        if ( (*(_DWORD *)(v14 + 120) & 0x1000) == 0 )
        {
          v8 |= 1LL << v40;
          if ( v41 == -1 || *(char *)(v14 + 195) > v41 )
          {
            v9 = 1;
            v41 = *(char *)(v14 + 195);
            v42 = v11;
          }
        }
        goto LABEL_92;
      }
      _InterlockedAdd16((volatile signed __int16 *)(v14 + 868), 1u);
      KiReleasePrcbLocksForIsolationUnit((__int64 *)&v44);
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
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
        while ( *(_QWORD *)(v14 + 64) );
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            v20 = 0LL;
            if ( *(_BYTE *)(v14 + 388) == 1 )
              break;
            if ( *(_BYTE *)(v14 + 388) == 2 )
            {
LABEL_34:
              v23 = *(unsigned int *)(v14 + 536);
              if ( (int)v23 >= 0 )
              {
                v19 = KiProcessorBlock[v23];
                KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v44);
                if ( v14 == *(_QWORD *)(v19 + 8) )
                  goto LABEL_65;
                if ( *(_BYTE *)(v14 + 388) == 2 && *(_DWORD *)(v14 + 536) == (_DWORD)v23 )
                  __fastfail(0x4Au);
                goto LABEL_63;
              }
            }
            else
            {
              v21 = (__int64 *)((unsigned int)*(unsigned __int8 *)(v14 + 388) - 3);
              if ( *(_BYTE *)(v14 + 388) != 3 )
              {
                if ( *(_BYTE *)(v14 + 388) != 5 )
                  goto LABEL_65;
                v22 = *(_BYTE *)(v14 + 112) & 7;
                if ( v22 == 1 || (unsigned __int8)(v22 - 3) <= 3u )
                  goto LABEL_65;
                goto LABEL_34;
              }
              v24 = *(unsigned int *)(v14 + 536);
              if ( (int)v24 >= 0 )
              {
                v19 = KiProcessorBlock[v24];
                KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v44);
                if ( v14 == *(_QWORD *)(v19 + 16) )
                  goto LABEL_65;
                if ( *(_BYTE *)(v14 + 388) == 3 && *(_DWORD *)(v14 + 536) == (_DWORD)v24 )
                  __fastfail(0x1Eu);
                goto LABEL_63;
              }
            }
          }
          v25 = *(unsigned int *)(v14 + 536);
          v21 = KiProcessorBlock;
          if ( (int)v25 < 0 )
            break;
          v19 = KiProcessorBlock[v25];
          KiAcquirePrcbLocksForIsolationUnit(v19, 0, &v44);
          if ( *(_BYTE *)(v14 + 388) == 1 && *(_DWORD *)(v14 + 536) == (_DWORD)v25 )
            goto LABEL_65;
LABEL_63:
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v44);
        }
        v26 = (unsigned int)v25;
        LODWORD(v26) = v25 & 0x7FFFFFFF;
        v20 = *(volatile __int64 **)(KiProcessorBlock[v26] + 36424);
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *(_QWORD *)&v46 = 0LL;
          *((_QWORD *)&v46 + 1) = v20;
          v16 = (struct _KPRCB **)_InterlockedExchange64(v20, (__int64)&v46);
          if ( v16 )
            KxWaitForLockOwnerShip((struct _KPRCB *)&v46, v16);
        }
        else
        {
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *v20 );
          }
        }
        if ( *(_BYTE *)(v14 + 388) == 1 && *(_DWORD *)(v14 + 536) == (_DWORD)v25 )
          break;
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw(&v46);
          v27 = v46;
          if ( (_QWORD)v46 )
          {
LABEL_54:
            *(_QWORD *)&v46 = 0LL;
            v16 = (struct _KPRCB **)*((_QWORD *)&v46 + 1);
            if ( (((unsigned __int8)v16 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v27 + 8),
                                                             *((__int64 *)&v46 + 1))) & 4) != 0 )
              KeWakeAddressAll(v27 + 8, (__int64)v16);
          }
          else if ( (__int128 *)_InterlockedCompareExchange64(
                                  *((volatile signed __int64 **)&v46 + 1),
                                  0LL,
                                  (signed __int64)&v46) != &v46 )
          {
            v27 = KxWaitForLockChainValid((__int64 *)&v46);
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
      v28 = (unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v21, v16, v17) == 0;
      v30 = *(_BYTE *)(v14 + 388);
      if ( v28 )
      {
        if ( v30 == 2 && !*(_BYTE *)(v19 + 14521) )
        {
          v29 = *(unsigned int *)(v14 + 80);
          v31 = *(_DWORD *)(v14 + 84);
          if ( (unsigned int)v29 <= v31 )
            v29 = v31;
          if ( (unsigned int)v29 >= KiDynamicHeteroCpuPolicyExpectedCycles
            && KiCheckPreferredHeteroProcessor(v14, v19, 0)
            && !_interlockedbittestandset((volatile signed __int32 *)(v14 + 120), 0xCu) )
          {
            goto LABEL_80;
          }
        }
      }
      else if ( v30 == 2 && !*(_BYTE *)(v19 + 14521) )
      {
        v29 = *(unsigned int *)(v14 + 80);
        v32 = *(_DWORD *)(v14 + 84);
        if ( (unsigned int)v29 <= v32 )
          v29 = v32;
        if ( (unsigned int)v29 >= KiDynamicHeteroCpuPolicyExpectedCycles && KiCheckPreferredHeteroProcessor(v14, v19, 0) )
        {
LABEL_80:
          v9 = 1;
          *(_BYTE *)(v19 + 14521) = 1;
          v33 = *(_BYTE *)(a4 + 13785);
          if ( !v33 )
          {
            *(_BYTE *)(a4 + 13785) = 1;
            *(_DWORD *)(a4 + 13788) = *(_DWORD *)(v19 + 36);
            goto LABEL_87;
          }
          if ( v33 == 1 )
          {
            v34 = *(_DWORD *)(a4 + 13788);
            if ( v34 == *(_DWORD *)(v19 + 36) )
              goto LABEL_87;
            v35 = (unsigned __int16 *)(a4 + 13792);
            *(_BYTE *)(a4 + 13785) = 2;
            KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 13792), v34);
          }
          else
          {
            v35 = (unsigned __int16 *)(a4 + 13792);
          }
          KeAddGroupAffinityEx(v35, *(unsigned __int8 *)(v19 + 208), *(_QWORD *)(v19 + 200));
        }
      }
LABEL_87:
      KiReleaseThreadStateLock(v29, v19, (__int64 *)&v44, v20, (volatile signed __int64 **)&v46);
      v4 = a2;
      *(_QWORD *)(v14 + 64) = 0LL;
LABEL_92:
      if ( v44 )
        KiReleasePrcbLocksForIsolationUnit((__int64 *)&v44);
LABEL_101:
      v7 = v47;
      if ( !v47 )
      {
        v6 = a3;
        break;
      }
    }
  }
  KiFlushSoftwareInterruptBatch((char *)(a4 + 13784));
  if ( v4 )
    *v4 = v8;
  if ( v6 )
    *v6 = KiProcessorBlock[v42];
  return v9;
}
