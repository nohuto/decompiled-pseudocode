/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1409D8040
 * Callers:
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpRequestFlushTimer @ 0x14024D0B4 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14024D154 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14024D1E0 (EtwpEnqueueAvailableBuffer.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     EtwpLockUnlockBufferList @ 0x1404189B8 (EtwpLockUnlockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140458490 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140479B7C (EtwpInitializeBufferHeader.c)
 *     HvlQueryStartedProcessors @ 0x1404F92F0 (HvlQueryStartedProcessors.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpFlushBuffer @ 0x1409D9A88 (EtwpFlushBuffer.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1409D9C98 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1409DA458 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  int v2; // ebp
  __int64 *v5; // r15
  int v6; // r14d
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rbp
  unsigned __int64 *v11; // rdi
  __int64 v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int32 v17; // eax
  signed __int64 i; // rcx
  signed __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  _QWORD **v23; // rdi
  __int64 v24; // rbx
  __int64 *v25; // r14
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int16 v32; // r12
  unsigned int v33; // r13d
  _QWORD *v34; // rbx
  unsigned __int16 v35; // ax
  _QWORD **v36; // rdi
  unsigned int v37; // ebp
  bool v38; // zf
  unsigned int v39; // edx
  _QWORD *v40; // r14
  __int64 v41; // r9
  unsigned int v42; // r15d
  char v43; // [rsp+20h] [rbp-1A8h]
  unsigned int v45; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 *v46; // [rsp+30h] [rbp-198h]
  _OWORD v47[2]; // [rsp+40h] [rbp-188h] BYREF
  __int128 v48; // [rsp+60h] [rbp-168h]
  __int128 v49; // [rsp+70h] [rbp-158h]
  __int64 v50; // [rsp+80h] [rbp-148h]
  _BYTE v51[256]; // [rsp+90h] [rbp-138h] BYREF

  v2 = a2;
  memset_0(v51, 0, sizeof(v51));
  if ( !*((_QWORD *)a1 + 100) && !*((_QWORD *)a1 + 45) )
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0LL);
    return 259LL;
  }
  v5 = (__int64 *)v51;
  if ( *((_QWORD *)a1 + 165) )
    v5 = (__int64 *)*((_QWORD *)a1 + 165);
  v43 = 0;
  v46 = v5;
  v6 = 0;
  if ( (a1[3] & 0x40000) != 0 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
    if ( v7 )
    {
      *v5 = v7;
      v6 = 1;
    }
    goto LABEL_43;
  }
  v8 = 1;
  if ( (a1[3] & 0x10000000) == 0 )
    v8 = KeNumberProcessors_0;
  v9 = v8 - 1;
  v10 = v8 - 1;
  if ( v8 - 1 >= 0 )
  {
    v11 = (unsigned __int64 *)v5;
    v12 = (__int64)(int)v9 << 6;
    while ( 1 )
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v13 = a1 + 32;
      }
      else
      {
        v14 = *((_QWORD *)a1 + 170);
        if ( v14 == EtwpHostSiloState )
        {
          if ( v9 >= (unsigned int)KeNumberProcessors_0 )
            v15 = 0LL;
          else
            v15 = KiProcessorBlock[v10];
          v13 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 35752) + 320LL) + 8LL * *a1);
        }
        else
        {
          v13 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 4416) + v12) + 8LL * *a1);
        }
      }
      v16 = *v13 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v16 )
        goto LABEL_40;
      if ( a2 )
        break;
      v22 = *(_QWORD *)((*v13 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v22 )
      {
        *v11 = v22;
        *(_QWORD *)(v16 + 32) = 0LL;
LABEL_39:
        ++v6;
        ++v11;
      }
LABEL_40:
      --v9;
      v12 -= 64LL;
      if ( --v10 < 0 )
      {
        v5 = v46;
        goto LABEL_42;
      }
    }
    v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), a1[1]);
    if ( v17 <= a1[1] )
      *(_DWORD *)(v16 + 4) = v17;
    _m_prefetchw(v13);
    for ( i = *v13; (v16 ^ i) <= 0xF; i = v19 )
    {
      v19 = _InterlockedCompareExchange64(v13, 0LL, i);
      if ( i == v19 )
        break;
    }
    v20 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v16 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v20 + 12), -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, v20);
      *v11 = v16;
    }
    else
    {
      if ( v20 )
      {
        do
        {
          v21 = *(_QWORD *)(v20 + 32);
          if ( v21 == v16 )
            break;
          v20 = *(_QWORD *)(v20 + 32);
        }
        while ( v21 );
      }
      *(_QWORD *)(v20 + 32) = 0LL;
      *v11 = v16;
      v43 = 1;
    }
    goto LABEL_39;
  }
LABEL_42:
  EtwpLockUnlockBufferList((__int64)a1);
  v2 = a2;
LABEL_43:
  v23 = 0LL;
  if ( v6 > 0 )
  {
    v24 = v6;
    v25 = &v5[v6 - 1];
    do
    {
      v26 = 0LL;
      v27 = 1LL;
      if ( (unsigned __int64)v24 > 1 )
      {
        v28 = 0LL;
        do
        {
          if ( *(_QWORD *)(v5[v27] + 16) > *(_QWORD *)(v5[v28] + 16) )
          {
            v26 = v27;
            v28 = v27;
          }
          ++v27;
        }
        while ( v27 < v24 );
      }
      v29 = v5[v26];
      v30 = *(_QWORD *)(v29 + 32);
      v5[v26] = v30;
      if ( !v30 )
      {
        --v24;
        v5[v26] = *v25--;
      }
      if ( *(int *)(v29 + 12) <= 0
        && (v31 = *(_DWORD *)(v29 + 4), v31 <= 0x48)
        && (v31 || *(_DWORD *)(v29 + 8) <= 0x48u) )
      {
        *(_WORD *)(v29 + 52) = 0;
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v29, 0LL);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v23;
        v23 = (_QWORD **)(v29 + 32);
      }
    }
    while ( v24 > 0 );
    v2 = a2;
  }
  v32 = 0;
  v33 = 0;
  if ( v23 )
  {
    v34 = *v23;
    v35 = v2 != 0;
    LODWORD(v46) = v2 != 0;
    do
    {
      if ( !v34 )
        v32 = v35;
      v36 = v23 - 4;
      if ( (a1[3] & 0x40000) == 0 )
      {
        v37 = a1[57];
        v38 = (a1[3] & 0x40000) == 0;
        v45 = 0;
        if ( v38 || (int)HvlQueryStartedProcessors(&v45, 0LL) < 0 )
        {
          v39 = 1;
          if ( (a1[3] & 0x10000000) == 0 )
            v39 = KeNumberProcessors_0;
        }
        else
        {
          v39 = v45;
        }
        if ( v37 < v39 )
          EtwpAllocateFreeBuffers((ULONG_PTR)a1, v39 - v37);
      }
      while ( *((_DWORD *)v36 + 3) )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
      v36[4] = 0LL;
      v40 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v40 = v36[8];
        v36[7] = 0LL;
        v36[8] = 0LL;
      }
      v42 = EtwpFlushBuffer(a1, v36, v32);
      v38 = (a1[3] & 0x40000) == 0;
      *((_WORD *)v36 + 26) = 0;
      if ( v38 )
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v36, 0LL);
      else
        guard_dispatch_icall_no_overrides(v42, v36, v40, v41);
      v23 = (_QWORD **)v34;
      if ( v34 )
        v34 = (_QWORD *)*v34;
      v35 = (unsigned __int16)v46;
      if ( v42 )
        v33 = v42;
    }
    while ( v23 );
    if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v43) )
      EtwpRequestFlushTimer((__int64)a1, 0LL);
  }
  else if ( v2 )
  {
    if ( (a1[204] & 8) != 0 )
    {
      memset(v47, 0, sizeof(v47));
      v50 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      EtwpInitializeBufferHeader((__int16 *)a1, v47);
      WORD2(v49) &= ~0x100u;
      EtwpResetBufferHeader((__int64)v47, 6);
      v38 = a1[86] == 0;
      WORD2(v49) = 1;
      HIDWORD(v48) = 3;
      LODWORD(v49) = 72;
      if ( (v38 || (int)EtwpRealtimeDeliverBuffer(a1, v47) < 0)
        && (a1[3] & 0x10000000) == 0
        && (a1[204] & 0x10000000) == 0 )
      {
        EtwpRealtimeSaveBuffer(a1, v47);
      }
    }
  }
  return v33;
}
