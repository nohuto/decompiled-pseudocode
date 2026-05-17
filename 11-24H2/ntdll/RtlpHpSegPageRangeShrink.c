/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1800544A0
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegAlloc @ 0x180051440 (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlCSparseBitmapBitsClear @ 0x180055554 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F7560 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

struct _PEB *__fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned __int64 i)
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
  unsigned __int8 v22; // cl
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rbx
  volatile signed __int64 *v27; // rsi
  signed __int64 v28; // rax
  struct _PEB *result; // rax
  unsigned __int64 HeapDeCommitFreeBlockThreshold; // rcx
  unsigned int v31; // edx
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 *v34; // rcx
  unsigned __int64 v35; // r14
  unsigned int v36; // esi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  int v39; // eax
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  signed __int64 v48; // rcx
  signed __int64 v49; // rdx
  signed __int64 v50; // rtt
  __int64 v51; // r15
  _QWORD *v52; // r9
  __int64 v53; // r8
  __int64 v54; // rax
  bool v55; // zf
  signed __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rcx
  signed __int64 v59; // rax
  _QWORD *v60; // rax
  char v61[8]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v62; // [rsp+38h] [rbp-91h] BYREF
  __int64 v63; // [rsp+40h] [rbp-89h] BYREF
  __int64 v64; // [rsp+48h] [rbp-81h] BYREF
  __int64 v65; // [rsp+50h] [rbp-79h] BYREF
  __int64 v66; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v67[2]; // [rsp+60h] [rbp-69h] BYREF
  char v68[32]; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v69; // [rsp+90h] [rbp-39h]
  __int64 v70; // [rsp+98h] [rbp-31h]
  __int64 *v71; // [rsp+A0h] [rbp-29h]
  __int64 v72; // [rsp+A8h] [rbp-21h]
  __int64 *v73; // [rsp+B0h] [rbp-19h]
  __int64 v74; // [rsp+B8h] [rbp-11h]
  __int64 *v75; // [rsp+C0h] [rbp-9h]
  __int64 v76; // [rsp+C8h] [rbp-1h]
  __int64 *v77; // [rsp+D0h] [rbp+7h]
  __int64 v78; // [rsp+D8h] [rbp+Fh]

  v4 = *(unsigned __int8 *)(a2 + 31) - (_DWORD)i;
  v6 = a2 + 32LL * (unsigned int)i;
  v7 = i;
  v61[0] = 0;
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
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
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
    RtlpAcquireSRWLockExclusiveContended(
      a1 + 64,
      (unsigned __int64)v11,
      (_QWORD *)i,
      (unsigned __int64)SchedulerSharedDataSlot);
  v14 = *(_DWORD *)(a2 + 28);
  v15 = HIBYTE(v14);
  v16 = ~(_WORD)v14;
  v61[0] = -1;
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
  v18 = RtlpHpSegPageRangeCoalesce(a1, v6, 0LL, v61);
  v19 = *(_BYTE *)(a1 + 13);
  if ( (v19 & 0x10) != 0 && *(unsigned __int8 *)(v18 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v26 = (_QWORD *)(*(_QWORD *)a1 & v18);
    *(_DWORD *)v18 = -857879297;
    if ( v26 )
    {
      v45 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v46 = (_QWORD *)v26[1], (_QWORD *)*v46 != v26) )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v45 + 8) = v46;
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
    RtlRbInsertNodeEx(a1 + 96, v21, v22, v18);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v18 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
    {
      v34 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
      if ( (unsigned int)dword_1801CC670 > 5 )
      {
        v62 = *(_QWORD *)(a1 + 56);
        v70 = 8LL;
        v69 = &v62;
        v63 = *v34;
        v71 = &v63;
        v64 = v34[1];
        v73 = &v64;
        v65 = v34[2];
        v75 = &v65;
        v66 = v34[3];
        v77 = &v66;
        v72 = 8LL;
        v74 = 8LL;
        v76 = 8LL;
        v78 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC670, byte_1801A2363, v24, v25, 7, (__int64)v68);
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
      v47 = 3LL;
      v48 = v28 & 6;
      if ( v48 != 2 )
        v47 = -1LL;
      v49 = v28 + v47;
      v50 = v28;
      v28 = _InterlockedCompareExchange64(v27, v49, v28);
    }
    while ( v50 != v28 );
    if ( v48 == 2 )
    {
      v51 = a1 + 64;
      while ( 1 )
      {
        while ( (v49 & 1) != 0 )
        {
          v59 = _InterlockedCompareExchange64(v27, v49 - 4, v49);
          v55 = v49 == v59;
          v49 = v59;
          if ( v55 )
            goto LABEL_26;
        }
        v52 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0uLL);
        v53 = *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v53 )
        {
          do
          {
            v60 = v52;
            v52 = (_QWORD *)*v52;
            v52[2] = v60;
            v53 = v52[1];
          }
          while ( !v53 );
          if ( v52 != (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v53;
        }
        if ( (*(_DWORD *)(v53 + 36) & 1) != 0 )
        {
          v54 = *(_QWORD *)(v53 + 16);
          if ( v54 )
            break;
        }
        v51 = 0LL;
        v56 = _InterlockedCompareExchange64(v27, 0LL, v49);
        v55 = v49 == v56;
        v49 = v56;
        if ( v55 )
          goto LABEL_69;
      }
      *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v54;
      *(_QWORD *)(v53 + 16) = 0LL;
      _InterlockedAnd64(v27, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_69:
        v57 = *(_QWORD *)(v53 + 16);
        v58 = *(_QWORD *)(v53 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v53 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v53 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v58, v51, v53, v52);
        v53 = v57;
      }
      while ( v57 );
    }
  }
LABEL_26:
  result = (struct _PEB *)NtCurrentTeb();
  HeapDeCommitFreeBlockThreshold = result[3].HeapDeCommitFreeBlockThreshold;
  if ( HeapDeCommitFreeBlockThreshold )
  {
    v31 = 0;
    v32 = (unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v31 < 8 )
    {
      v33 = HeapDeCommitFreeBlockThreshold + 8LL * v31;
      result = (struct _PEB *)(*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _PEB *)v32 )
      {
        if ( v33 )
        {
          *(_BYTE *)v33 |= 2u;
          if ( *(char *)(v33 + 7) < 0 )
          {
            v67[1] = 0LL;
            v67[0] = (__int64)(v33 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = (struct _PEB *)NtSetInformationThread(-2LL, 56LL, v67);
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
    RtlCSparseBitmapBitsClear(&unk_1801CE930, 2 * (((unsigned __int64)v26 - qword_1801CE928) >> 20), 2 * (v35 >> 20));
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
    RtlpHpSegMgrRelease(a1, v26, v36);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v36);
    v40 = -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v40);
    result = (struct _PEB *)RtlGetCurrentServiceSessionId(v40, v41, v42, v43);
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v44 = (__int64)result->SharedData + 558;
    }
    else
    {
      v44 = 2147353480LL;
    }
    if ( *(_BYTE *)v44 )
      return (struct _PEB *)RtlpHeapLogRangeRelease(a1, v26, v35);
  }
  return result;
}
