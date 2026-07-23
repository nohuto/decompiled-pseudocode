/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1800100E0
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegAlloc @ 0x18000D080 (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlCSparseBitmapBitsClear @ 0x180011194 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x1800114DC (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180011684 (RtlpHeapLogRangeRelease.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F91C0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rbx
  char *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  volatile signed __int32 *v11; // rdx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  volatile signed __int32 **v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int16 v17; // dx
  int v18; // esi
  __int64 v19; // rsi
  char v20; // al
  char v21; // al
  __int64 v22; // rdx
  BOOLEAN v23; // cl
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rbx
  volatile signed __int64 *v28; // rsi
  signed __int64 v29; // rax
  struct _PEB *v30; // rax
  unsigned __int64 HeapDeCommitFreeBlockThreshold; // rcx
  unsigned int v32; // edx
  __int64 v33; // rsi
  unsigned __int64 v34; // r14
  __int64 *v35; // rcx
  unsigned __int64 v36; // r14
  unsigned int v37; // esi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  signed __int64 v46; // rdx
  signed __int64 v47; // rtt
  __int64 v48; // r15
  _QWORD *v49; // r9
  __int64 v50; // r8
  __int64 v51; // rax
  bool v52; // zf
  signed __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rcx
  signed __int64 v56; // rax
  _QWORD *v57; // rax
  char v59[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v60; // [rsp+38h] [rbp-91h] BYREF
  __int64 v61; // [rsp+40h] [rbp-89h] BYREF
  __int64 v62; // [rsp+48h] [rbp-81h] BYREF
  __int64 v63; // [rsp+50h] [rbp-79h] BYREF
  __int64 v64; // [rsp+58h] [rbp-71h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+60h] [rbp-69h] BYREF
  _EVENT_DATA_DESCRIPTOR v66; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v67; // [rsp+90h] [rbp-39h]
  __int64 v68; // [rsp+98h] [rbp-31h]
  __int64 *v69; // [rsp+A0h] [rbp-29h]
  __int64 v70; // [rsp+A8h] [rbp-21h]
  __int64 *v71; // [rsp+B0h] [rbp-19h]
  __int64 v72; // [rsp+B8h] [rbp-11h]
  __int64 *v73; // [rsp+C0h] [rbp-9h]
  __int64 v74; // [rsp+C8h] [rbp-1h]
  __int64 *v75; // [rsp+D0h] [rbp+7h]
  __int64 v76; // [rsp+D8h] [rbp+Fh]

  v4 = *(unsigned __int8 *)(a2 + 31) - a3;
  v6 = a2 + 32LL * a3;
  v59[0] = 0;
  if ( v4 - 1 > 1 )
  {
    v8 = (char *)(v6 + 56);
    v9 = v4 - 2;
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
    for ( i = 0; i < 8; ++i )
    {
      v14 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v14 )
      {
        if ( v14 )
          *v14 = v11;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v11, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((PVOID)(a1 + 64));
  v15 = *(_DWORD *)(a2 + 28);
  v16 = HIBYTE(v15);
  v17 = ~(_WORD)v15;
  v59[0] = -1;
  if ( v16 == v4 )
  {
    LOWORD(v18) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v18 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v18;
  }
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (v4 - 1) + v6 + 26) = v4 - 1;
  *(_WORD *)(v6 + 28) = ~(v17 - v18);
  *(_BYTE *)(v6 + 31) = v4;
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 24) &= 0xF3u;
  v19 = RtlpHpSegPageRangeCoalesce(a1, v6, 0LL, v59);
  v20 = *(_BYTE *)(a1 + 13);
  if ( (v20 & 0x10) != 0 && *(unsigned __int8 *)(v19 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v27 = (_QWORD *)(*(_QWORD *)a1 & v19);
    *(_DWORD *)v19 = -857879297;
    if ( v27 )
    {
      v42 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v43 = (_QWORD *)v27[1], (_QWORD *)*v43 != v27) )
        __fastfail(3u);
      *v43 = v42;
      *(_QWORD *)(v42 + 8) = v43;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v20 & 7) != 0 )
      v21 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (*(_QWORD *)a1 & v19) + ((v19 - (*(_QWORD *)a1 & v19)) >> 5 << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v19 + 31) << *(_BYTE *)(a1 + 8));
    else
      v21 = 4;
    *(_BYTE *)(v19 + 30) = v21;
    v22 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v22 )
      {
LABEL_67:
        v23 = 0;
        goto LABEL_23;
      }
      v22 ^= a1 + 96;
    }
    v23 = 0;
    if ( v22 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v19 + 28) < *(_DWORD *)(v22 + 28) )
        {
          v24 = *(_QWORD *)v22;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_67;
            v24 ^= v22;
          }
          if ( !v24 )
            goto LABEL_67;
        }
        else
        {
          v24 = *(_QWORD *)(v22 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v24 )
            {
LABEL_22:
              v23 = 1;
              break;
            }
            v24 ^= v22;
          }
          if ( !v24 )
            goto LABEL_22;
        }
        v22 = v24;
      }
    }
LABEL_23:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v22, v23, (PRTL_BALANCED_NODE)v19);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v19 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
    {
      v35 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
      if ( (unsigned int)dword_1801CE670 > 5 )
      {
        v60 = *(_QWORD *)(a1 + 56);
        v68 = 8LL;
        v67 = &v60;
        v61 = *v35;
        v69 = &v61;
        v62 = v35[1];
        v71 = &v62;
        v63 = v35[2];
        v73 = &v63;
        v64 = v35[3];
        v75 = &v64;
        v70 = 8LL;
        v72 = 8LL;
        v74 = 8LL;
        v76 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(
          (__int64)&dword_1801CE670,
          (unsigned __int8 *)dword_1801A43AB,
          v25,
          v26,
          7u,
          &v66);
      }
    }
    v27 = 0LL;
  }
  v28 = (volatile signed __int64 *)(a1 + 64);
  v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 1LL);
  if ( v29 != 1 )
  {
    do
    {
      v44 = 3LL;
      v45 = v29 & 6;
      if ( v45 != 2 )
        v44 = -1LL;
      v46 = v29 + v44;
      v47 = v29;
      v29 = _InterlockedCompareExchange64(v28, v46, v29);
    }
    while ( v47 != v29 );
    if ( v45 == 2 )
    {
      v48 = a1 + 64;
      while ( 1 )
      {
        while ( (v46 & 1) != 0 )
        {
          v56 = _InterlockedCompareExchange64(v28, v46 - 4, v46);
          v52 = v46 == v56;
          v46 = v56;
          if ( v52 )
            goto LABEL_26;
        }
        v49 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0uLL);
        v50 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v50 )
        {
          do
          {
            v57 = v49;
            v49 = (_QWORD *)*v49;
            v49[2] = v57;
            v50 = v49[1];
          }
          while ( !v50 );
          if ( v49 != (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v50;
        }
        if ( (*(_DWORD *)(v50 + 36) & 1) != 0 )
        {
          v51 = *(_QWORD *)(v50 + 16);
          if ( v51 )
            break;
        }
        v48 = 0LL;
        v53 = _InterlockedCompareExchange64(v28, 0LL, v46);
        v52 = v46 == v53;
        v46 = v53;
        if ( v52 )
          goto LABEL_69;
      }
      *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v51;
      *(_QWORD *)(v50 + 16) = 0LL;
      _InterlockedAnd64(v28, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_69:
        v54 = *(_QWORD *)(v50 + 16);
        v55 = *(_QWORD *)(v50 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v50 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v55, v48, v50, v49);
        v50 = v54;
      }
      while ( v54 );
    }
  }
LABEL_26:
  v30 = (struct _PEB *)NtCurrentTeb();
  HeapDeCommitFreeBlockThreshold = v30[3].HeapDeCommitFreeBlockThreshold;
  if ( HeapDeCommitFreeBlockThreshold )
  {
    v32 = 0;
    v33 = (unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v32 < 8 )
    {
      v34 = HeapDeCommitFreeBlockThreshold + 8LL * v32;
      v30 = (struct _PEB *)(*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL);
      if ( v30 == (struct _PEB *)v33 )
      {
        if ( v34 )
        {
          *(_BYTE *)v34 |= 2u;
          if ( *(char *)(v34 + 7) < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (__int64)(v34 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            LODWORD(v30) = NtSetInformationThread(
                             (HANDLE)0xFFFFFFFFFFFFFFFELL,
                             ThreadUpdateLockOwnership,
                             ThreadInformation,
                             0x10u);
          }
          *(_QWORD *)v34 = 0LL;
        }
        break;
      }
      ++v32;
    }
  }
  if ( v27 )
  {
    v36 = (unsigned int)-*(_DWORD *)a1;
    RtlCSparseBitmapBitsClear(&BaseAddress, 2 * (((unsigned __int64)v27 - qword_1801D0978) >> 20), 2 * (v36 >> 20));
    v37 = 2;
    v38 = 4LL * *(unsigned __int8 *)(a1 + 10);
    v39 = (unsigned __int64)&v27[v38];
    if ( &v27[v38] < v27 + 1024 )
    {
      do
      {
        v40 = (unsigned __int16)~*(_WORD *)(v39 + 28);
        v39 += 32 * ((unsigned __int64)*(unsigned int *)(v39 + 28) >> 24);
        v37 += v40;
      }
      while ( v39 < (unsigned __int64)(v27 + 1024) );
    }
    RtlpHpSegMgrRelease(a1);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v37);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1),
      -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
    LODWORD(v30) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v30 )
    {
      v30 = NtCurrentPeb();
      v41 = (__int64)v30->SharedData + 558;
    }
    else
    {
      v41 = 2147353480LL;
    }
    if ( *(_BYTE *)v41 )
      LODWORD(v30) = RtlpHeapLogRangeRelease(a1, v27, v36);
  }
  return (int)v30;
}
