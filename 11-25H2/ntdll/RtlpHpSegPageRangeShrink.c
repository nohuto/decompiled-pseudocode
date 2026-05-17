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

struct _PEB *__fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3)
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
  unsigned __int8 v23; // cl
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rbx
  volatile signed __int64 *v28; // rsi
  signed __int64 v29; // rax
  struct _PEB *result; // rax
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
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  signed __int64 v49; // rcx
  signed __int64 v50; // rdx
  signed __int64 v51; // rtt
  __int64 v52; // r15
  _QWORD *v53; // r9
  __int64 v54; // r8
  __int64 v55; // rax
  bool v56; // zf
  signed __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rcx
  signed __int64 v60; // rax
  _QWORD *v61; // rax
  char v62[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v63; // [rsp+38h] [rbp-91h] BYREF
  __int64 v64; // [rsp+40h] [rbp-89h] BYREF
  __int64 v65; // [rsp+48h] [rbp-81h] BYREF
  __int64 v66; // [rsp+50h] [rbp-79h] BYREF
  __int64 v67; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v68[2]; // [rsp+60h] [rbp-69h] BYREF
  char v69[32]; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v70; // [rsp+90h] [rbp-39h]
  __int64 v71; // [rsp+98h] [rbp-31h]
  __int64 *v72; // [rsp+A0h] [rbp-29h]
  __int64 v73; // [rsp+A8h] [rbp-21h]
  __int64 *v74; // [rsp+B0h] [rbp-19h]
  __int64 v75; // [rsp+B8h] [rbp-11h]
  __int64 *v76; // [rsp+C0h] [rbp-9h]
  __int64 v77; // [rsp+C8h] [rbp-1h]
  __int64 *v78; // [rsp+D0h] [rbp+7h]
  __int64 v79; // [rsp+D8h] [rbp+Fh]

  v4 = *(unsigned __int8 *)(a2 + 31) - a3;
  v6 = a2 + 32LL * a3;
  v62[0] = 0;
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
    RtlpAcquireSRWLockExclusiveContended(a1 + 64);
  v15 = *(_DWORD *)(a2 + 28);
  v16 = HIBYTE(v15);
  v17 = ~(_WORD)v15;
  v62[0] = -1;
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
  v19 = RtlpHpSegPageRangeCoalesce(a1, v6, 0LL, v62);
  v20 = *(_BYTE *)(a1 + 13);
  if ( (v20 & 0x10) != 0 && *(unsigned __int8 *)(v19 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v27 = (_QWORD *)(*(_QWORD *)a1 & v19);
    *(_DWORD *)v19 = -857879297;
    if ( v27 )
    {
      v46 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v47 = (_QWORD *)v27[1], (_QWORD *)*v47 != v27) )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
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
    RtlRbInsertNodeEx(a1 + 96, v22, v23, v19);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v19 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
    {
      v35 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
      if ( (unsigned int)dword_1801CE670 > 5 )
      {
        v63 = *(_QWORD *)(a1 + 56);
        v71 = 8LL;
        v70 = &v63;
        v64 = *v35;
        v72 = &v64;
        v65 = v35[1];
        v74 = &v65;
        v66 = v35[2];
        v76 = &v66;
        v67 = v35[3];
        v78 = &v67;
        v73 = 8LL;
        v75 = 8LL;
        v77 = 8LL;
        v79 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CE670, byte_1801A43AB, v25, v26, 7, (__int64)v69);
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
      v48 = 3LL;
      v49 = v29 & 6;
      if ( v49 != 2 )
        v48 = -1LL;
      v50 = v29 + v48;
      v51 = v29;
      v29 = _InterlockedCompareExchange64(v28, v50, v29);
    }
    while ( v51 != v29 );
    if ( v49 == 2 )
    {
      v52 = a1 + 64;
      while ( 1 )
      {
        while ( (v50 & 1) != 0 )
        {
          v60 = _InterlockedCompareExchange64(v28, v50 - 4, v50);
          v56 = v50 == v60;
          v50 = v60;
          if ( v56 )
            goto LABEL_26;
        }
        v53 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0uLL);
        v54 = *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v54 )
        {
          do
          {
            v61 = v53;
            v53 = (_QWORD *)*v53;
            v53[2] = v61;
            v54 = v53[1];
          }
          while ( !v54 );
          if ( v53 != (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v54;
        }
        if ( (*(_DWORD *)(v54 + 36) & 1) != 0 )
        {
          v55 = *(_QWORD *)(v54 + 16);
          if ( v55 )
            break;
        }
        v52 = 0LL;
        v57 = _InterlockedCompareExchange64(v28, 0LL, v50);
        v56 = v50 == v57;
        v50 = v57;
        if ( v56 )
          goto LABEL_69;
      }
      *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v55;
      *(_QWORD *)(v54 + 16) = 0LL;
      _InterlockedAnd64(v28, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_69:
        v58 = *(_QWORD *)(v54 + 16);
        v59 = *(_QWORD *)(v54 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v54 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v54 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v59, v52, v54, v53);
        v54 = v58;
      }
      while ( v58 );
    }
  }
LABEL_26:
  result = (struct _PEB *)NtCurrentTeb();
  HeapDeCommitFreeBlockThreshold = result[3].HeapDeCommitFreeBlockThreshold;
  if ( HeapDeCommitFreeBlockThreshold )
  {
    v32 = 0;
    v33 = (unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v32 < 8 )
    {
      v34 = HeapDeCommitFreeBlockThreshold + 8LL * v32;
      result = (struct _PEB *)(*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _PEB *)v33 )
      {
        if ( v34 )
        {
          *(_BYTE *)v34 |= 2u;
          if ( *(char *)(v34 + 7) < 0 )
          {
            v68[1] = 0LL;
            v68[0] = (__int64)(v34 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = (struct _PEB *)NtSetInformationThread(-2LL, 56LL, v68);
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
    RtlCSparseBitmapBitsClear(&unk_1801D0980, 2 * (((unsigned __int64)v27 - qword_1801D0978) >> 20), 2 * (v36 >> 20));
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
    RtlpHpSegMgrRelease(a1, v27, v37);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v37);
    v41 = -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v41);
    result = (struct _PEB *)RtlGetCurrentServiceSessionId(v41, v42, v43, v44);
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v45 = (__int64)result->SharedData + 558;
    }
    else
    {
      v45 = 2147353480LL;
    }
    if ( *(_BYTE *)v45 )
      return (struct _PEB *)RtlpHeapLogRangeRelease(a1, v27, v36);
  }
  return result;
}
