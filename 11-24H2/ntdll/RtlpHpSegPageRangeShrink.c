/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x18006A080
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegAlloc @ 0x180067020 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlCSparseBitmapBitsClear @ 0x18006B134 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x18006B47C (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006B624 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F1CB0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

int __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, char *i)
{
  int v4; // r14d
  __int64 v6; // rbx
  int v7; // esi
  char *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  volatile signed __int32 *v11; // rdx
  char *SchedulerSharedDataSlot; // r9
  volatile signed __int32 **v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int16 v16; // dx
  int v17; // esi
  __int64 v18; // rsi
  char v19; // al
  char v20; // al
  __int64 v21; // rdx
  BOOLEAN v22; // cl
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rbx
  volatile signed __int64 *v27; // rsi
  signed __int64 v28; // rax
  struct _PEB *v29; // rax
  unsigned __int64 HeapSegmentReserve; // rcx
  unsigned int v31; // edx
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 *v34; // rcx
  unsigned __int64 v35; // r14
  unsigned int v36; // esi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  signed __int64 v44; // rcx
  signed __int64 v45; // rdx
  signed __int64 v46; // rtt
  __int64 v47; // r15
  _QWORD *v48; // r9
  __int64 v49; // r8
  __int64 v50; // rax
  bool v51; // zf
  signed __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rcx
  signed __int64 v55; // rax
  _QWORD *v56; // rax
  char v58[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v59; // [rsp+38h] [rbp-91h] BYREF
  __int64 v60; // [rsp+40h] [rbp-89h] BYREF
  __int64 v61; // [rsp+48h] [rbp-81h] BYREF
  __int64 v62; // [rsp+50h] [rbp-79h] BYREF
  __int64 v63; // [rsp+58h] [rbp-71h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+60h] [rbp-69h] BYREF
  _EVENT_DATA_DESCRIPTOR v65; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v66; // [rsp+90h] [rbp-39h]
  __int64 v67; // [rsp+98h] [rbp-31h]
  __int64 *v68; // [rsp+A0h] [rbp-29h]
  __int64 v69; // [rsp+A8h] [rbp-21h]
  __int64 *v70; // [rsp+B0h] [rbp-19h]
  __int64 v71; // [rsp+B8h] [rbp-11h]
  __int64 *v72; // [rsp+C0h] [rbp-9h]
  __int64 v73; // [rsp+C8h] [rbp-1h]
  __int64 *v74; // [rsp+D0h] [rbp+7h]
  __int64 v75; // [rsp+D8h] [rbp+Fh]

  v4 = *(unsigned __int8 *)(a2 + 31) - (_DWORD)i;
  v6 = a2 + 32LL * (unsigned int)i;
  v7 = (int)i;
  v58[0] = 0;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v8 = (char *)(v6 + 56);
    v9 = (unsigned int)(v4 - 2);
    do
    {
      v10 = *v8;
      v8 += 32;
      *(v8 - 32) = v10 & 0xFE;
      --v9;
    }
    while ( v9 );
  }
  v11 = (volatile signed __int32 *)(a1 + 64);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (char *)(unsigned int)((_DWORD)i + 1) )
    {
      v13 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*v13 )
      {
        if ( v13 )
          *v13 = v11;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v11, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(a1 + 64, (unsigned __int64)v11, i, SchedulerSharedDataSlot);
  v14 = *(_DWORD *)(a2 + 28);
  v15 = HIBYTE(v14);
  v16 = ~(_WORD)v14;
  v58[0] = -1;
  if ( v15 == v4 )
  {
    LOWORD(v17) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = v7;
    v17 = v7 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v17;
  }
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + v6 + 26) = v4 - 1;
  *(_WORD *)(v6 + 28) = ~(v16 - v17);
  *(_BYTE *)(v6 + 31) = v4;
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 24) &= 0xF3u;
  v18 = RtlpHpSegPageRangeCoalesce(a1, v6, 0LL, v58);
  v19 = *(_BYTE *)(a1 + 13);
  if ( (v19 & 0x10) != 0 && *(unsigned __int8 *)(v18 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v26 = (_QWORD *)(*(_QWORD *)a1 & v18);
    *(_DWORD *)v18 = -857879297;
    if ( v26 )
    {
      v41 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v42 = (_QWORD *)v26[1], (_QWORD *)*v42 != v26) )
        __fastfail(3u);
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v19 & 7) != 0 )
      v20 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (*(_QWORD *)a1 & v18) + ((v18 - (*(_QWORD *)a1 & v18)) >> 5 << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v18 + 31) << *(_BYTE *)(a1 + 8));
    else
      v20 = 4;
    *(_BYTE *)(v18 + 30) = v20;
    v21 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v21 )
      {
LABEL_67:
        v22 = 0;
        goto LABEL_23;
      }
      v21 ^= a1 + 96;
    }
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v18 + 28) < *(_DWORD *)(v21 + 28) )
        {
          v23 = *(_QWORD *)v21;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_67;
            v23 ^= v21;
          }
          if ( !v23 )
            goto LABEL_67;
        }
        else
        {
          v23 = *(_QWORD *)(v21 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v23 )
            {
LABEL_22:
              v22 = 1;
              break;
            }
            v23 ^= v21;
          }
          if ( !v23 )
            goto LABEL_22;
        }
        v21 = v23;
      }
    }
LABEL_23:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v18);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v18 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
    {
      v34 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
      if ( (unsigned int)dword_1801CB670 > 5 )
      {
        v59 = *(_QWORD *)(a1 + 56);
        v67 = 8LL;
        v66 = &v59;
        v60 = *v34;
        v68 = &v60;
        v61 = v34[1];
        v70 = &v61;
        v62 = v34[2];
        v72 = &v62;
        v63 = v34[3];
        v74 = &v63;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 8LL;
        v75 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(
          (__int64)&dword_1801CB670,
          (unsigned __int8 *)dword_1801A1503,
          v24,
          v25,
          7u,
          &v65);
      }
    }
    v26 = 0LL;
  }
  v27 = (volatile signed __int64 *)(a1 + 64);
  v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 1LL);
  if ( v28 != 1 )
  {
    do
    {
      v43 = 3LL;
      v44 = v28 & 6;
      if ( v44 != 2 )
        v43 = -1LL;
      v45 = v28 + v43;
      v46 = v28;
      v28 = _InterlockedCompareExchange64(v27, v45, v28);
    }
    while ( v46 != v28 );
    if ( v44 == 2 )
    {
      v47 = a1 + 64;
      while ( 1 )
      {
        while ( (v45 & 1) != 0 )
        {
          v55 = _InterlockedCompareExchange64(v27, v45 - 4, v45);
          v51 = v45 == v55;
          v45 = v55;
          if ( v51 )
            goto LABEL_26;
        }
        v48 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0uLL);
        v49 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v49 )
        {
          do
          {
            v56 = v48;
            v48 = (_QWORD *)*v48;
            v48[2] = v56;
            v49 = v48[1];
          }
          while ( !v49 );
          if ( v48 != (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v49;
        }
        if ( (*(_DWORD *)(v49 + 36) & 1) != 0 )
        {
          v50 = *(_QWORD *)(v49 + 16);
          if ( v50 )
            break;
        }
        v47 = 0LL;
        v52 = _InterlockedCompareExchange64(v27, 0LL, v45);
        v51 = v45 == v52;
        v45 = v52;
        if ( v51 )
          goto LABEL_69;
      }
      *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v50;
      *(_QWORD *)(v49 + 16) = 0LL;
      _InterlockedAnd64(v27, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_69:
        v53 = *(_QWORD *)(v49 + 16);
        v54 = *(_QWORD *)(v49 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v49 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v49 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v54, v47, v49, v48);
        v49 = v53;
      }
      while ( v53 );
    }
  }
LABEL_26:
  v29 = (struct _PEB *)NtCurrentTeb();
  HeapSegmentReserve = v29[3].HeapSegmentReserve;
  if ( HeapSegmentReserve )
  {
    v31 = 0;
    v32 = (unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v31 < 8 )
    {
      v33 = HeapSegmentReserve + 8LL * v31;
      v29 = (struct _PEB *)(*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL);
      if ( v29 == (struct _PEB *)v32 )
      {
        if ( v33 )
        {
          *(_BYTE *)v33 |= 2u;
          if ( *(char *)(v33 + 7) < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (__int64)(v33 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            LODWORD(v29) = NtSetInformationThread(
                             (HANDLE)0xFFFFFFFFFFFFFFFELL,
                             ThreadUpdateLockOwnership,
                             ThreadInformation,
                             0x10u);
          }
          *(_QWORD *)v33 = 0LL;
        }
        break;
      }
      ++v31;
    }
  }
  if ( v26 )
  {
    v35 = (unsigned int)-*(_DWORD *)a1;
    RtlCSparseBitmapBitsClear(&BaseAddress, 2 * (((unsigned __int64)v26 - qword_1801CD918) >> 20), 2 * (v35 >> 20));
    v36 = 2;
    v37 = 4LL * *(unsigned __int8 *)(a1 + 10);
    v38 = (unsigned __int64)&v26[v37];
    if ( &v26[v37] < v26 + 1024 )
    {
      do
      {
        v39 = (unsigned __int16)~*(_WORD *)(v38 + 28);
        v38 += 32 * ((unsigned __int64)*(unsigned int *)(v38 + 28) >> 24);
        v36 += v39;
      }
      while ( v38 < (unsigned __int64)(v26 + 1024) );
    }
    RtlpHpSegMgrRelease(a1);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v36);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
      -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
    LODWORD(v29) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v29 )
    {
      v29 = NtCurrentPeb();
      v40 = (__int64)v29->SharedData + 558;
    }
    else
    {
      v40 = 2147353480LL;
    }
    if ( *(_BYTE *)v40 )
      LODWORD(v29) = RtlpHeapLogRangeRelease(a1, v26, v35);
  }
  return (int)v29;
}
