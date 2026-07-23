/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1403EF420
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlFindLastBackwardRunClear @ 0x1402EA5D0 (RtlFindLastBackwardRunClear.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403C4918 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 *     MiOkToShrinkPageFiles @ 0x1403EF6CC (MiOkToShrinkPageFiles.c)
 *     MiReduceCommitLimits @ 0x140687600 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  __int16 v12; // ax
  KIRQL v13; // al
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // r11
  _RTL_BITMAP *v17; // r10
  unsigned __int64 v18; // r8
  char v19; // cl
  int v21; // ecx
  __int64 v22; // rax
  ULONG v23; // edi
  unsigned int *Buffer; // r10
  unsigned __int64 v25; // rdi
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  ULONG v28; // ebx
  unsigned int LastBackwardRunClear; // r14d
  ULONG v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  _RTL_BITMAP *v33; // rcx
  KIRQL v34; // al
  unsigned __int8 v35; // r15
  __int64 v36; // rbx
  unsigned int v37; // [rsp+30h] [rbp-39h]
  int v38; // [rsp+34h] [rbp-35h]
  unsigned int v39; // [rsp+38h] [rbp-31h]
  ULONG StartingRunIndex; // [rsp+3Ch] [rbp-2Dh] BYREF
  ULONG v41; // [rsp+40h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-21h]
  _DWORD *v43; // [rsp+50h] [rbp-19h]
  _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-11h] BYREF
  _RTL_BITMAP v45; // [rsp+68h] [rbp-1h] BYREF
  PRTL_BITMAP v46; // [rsp+78h] [rbp+Fh]
  PRTL_BITMAP v47; // [rsp+80h] [rbp+17h]
  unsigned __int8 v49; // [rsp+E8h] [rbp+7Fh]

  StartingRunIndex = 0;
  v41 = 0;
  v2 = 0;
  *(_QWORD *)(&BitMapHeader.SizeOfBitMap + 1) = 0LL;
  *(_QWORD *)(&v45.SizeOfBitMap + 1) = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  *(_QWORD *)&v45.SizeOfBitMap = 0LL;
  if ( v3 < 0x10 )
  {
    v8 = *(_DWORD *)(a1 + 36);
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    v42 = 0LL;
    v7 = v3 + 1;
  }
  else
  {
    if ( !(unsigned int)MiOkToShrinkPageFiles(*(_QWORD *)(v4 + 19264), *(_QWORD *)(v4 + 19608)) )
      return KeSetEvent((PRKEVENT)a1, 0, 0);
    v7 = *(_DWORD *)(v4 + 18520);
    v8 = 0x4000;
    v42 = 0x8000LL;
    v9 = (((v6 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v5;
    v2 = 1;
    v10 = v9 - 0x8000;
    v3 = 0;
  }
  v39 = v7;
  v38 = v2;
  v37 = v8;
  while ( v3 < v7 && v8 <= v10 )
  {
    v11 = *(_QWORD *)(v4 + 8LL * v3 + 18528);
    v12 = *(_WORD *)(v11 + 172);
    if ( ((v12 & 0x10) == 0 || !v2)
      && (v12 & 0x40) == 0
      && *(_DWORD *)v11 != *(_DWORD *)(v11 + 8)
      && *(_DWORD *)(v11 + 12) >= v8 )
    {
      v4 = *(_QWORD *)(v11 + 216);
      v43 = (_DWORD *)(v11 + 200);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 200));
      v14 = *(_QWORD *)(v11 + 80);
      v15 = *(_DWORD *)v11;
      v49 = v13;
      v16 = *(_QWORD *)(v14 + 16);
      v17 = (_RTL_BITMAP *)(v14 + 24);
      v18 = (unsigned __int64)(unsigned int)(*(_DWORD *)v11 - 1) >> 3;
      v46 = (PRTL_BITMAP)(v14 + 8);
      v19 = (v15 - 1) & 7;
      v47 = v17;
      if ( ((*(char *)(v18 + v16) >> v19) & 1) != 0 )
        goto LABEL_12;
      Buffer = v17->Buffer;
      if ( ((*((char *)Buffer + v18) >> v19) & 1) != 0 )
        goto LABEL_12;
      v25 = (unsigned int)(v15 - *(_DWORD *)(v11 + 8));
      if ( v10 < v25 )
        LODWORD(v25) = v10;
      v26 = (v15 - v25) & 0xFFFFFFE0;
      v27 = (unsigned __int64)v26 >> 5;
      BitMapHeader.SizeOfBitMap = v15 - v26;
      v45.SizeOfBitMap = v15 - v26;
      BitMapHeader.Buffer = (unsigned int *)(v16 + 4 * v27);
      v28 = v15 - v26 - 1;
      v45.Buffer = &Buffer[v27];
      LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v28, &StartingRunIndex);
      if ( LastBackwardRunClear > (unsigned int)v25 )
        LastBackwardRunClear = v25;
      v30 = RtlFindLastBackwardRunClear(&v45, v28, &v41);
      if ( LastBackwardRunClear > v30 )
        LastBackwardRunClear = v30;
      if ( !v38 )
        LastBackwardRunClear &= -v37;
      if ( !LastBackwardRunClear )
        goto LABEL_12;
      v21 = *(_DWORD *)v11;
      v22 = *(_QWORD *)(v11 + 208);
      v23 = *(_DWORD *)v11 - LastBackwardRunClear;
      if ( !v22 )
        goto LABEL_37;
      do
      {
        v31 = v22;
        v22 = *(_QWORD *)(v22 + 8);
      }
      while ( v22 );
      v32 = *(_DWORD *)(v31 - 8);
      if ( !v32 || v23 > v32 )
        goto LABEL_37;
      v23 = v32 + 1;
      if ( v32 + 1 < v32 )
        goto LABEL_12;
      LastBackwardRunClear = v21 - v23;
      if ( !v38 )
      {
        LastBackwardRunClear &= -v37;
        v23 = v21 - LastBackwardRunClear;
      }
      if ( !LastBackwardRunClear )
      {
LABEL_12:
        MiReleaseSpinLockExclusive(v43, v49);
      }
      else
      {
LABEL_37:
        v33 = v46;
        *(_DWORD *)v11 = v23;
        *(_DWORD *)(v11 + 12) -= LastBackwardRunClear;
        *(_DWORD *)(v11 + 20) -= LastBackwardRunClear;
        RtlSetBits(v33, v23, LastBackwardRunClear);
        RtlSetBits(v47, v23, LastBackwardRunClear);
        MiInvalidatePageFileBitmapsCache(v11, v23, LastBackwardRunClear, 0LL);
        MiReleaseSpinLockExclusive((_DWORD *)(v11 + 200), v49);
        v10 -= LastBackwardRunClear;
        if ( (*(_BYTE *)(v11 + 172) & 0x10) == 0 )
        {
          if ( !(unsigned int)MiChargeCommit(v4, LastBackwardRunClear + v42, 2) )
          {
            v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 200));
            *(_DWORD *)v11 = LastBackwardRunClear + v23;
            v35 = v34;
            *(_DWORD *)(v11 + 12) += LastBackwardRunClear;
            *(_DWORD *)(v11 + 20) += LastBackwardRunClear;
            v36 = *(_QWORD *)(v11 + 80);
            RtlClearBits((PRTL_BITMAP)(v36 + 8), v23, LastBackwardRunClear);
            RtlClearBits((PRTL_BITMAP)(v36 + 24), v23, LastBackwardRunClear);
            if ( v23 < *(_DWORD *)(v11 + 88) )
              *(_DWORD *)(v11 + 88) = v23;
            MiCoalescePageFileBitmapsCache(v11, 0, v23);
            MiReleaseSpinLockExclusive((_DWORD *)(v11 + 200), v35);
            return KeSetEvent((PRKEVENT)a1, 0, 0);
          }
          MiReduceCommitLimits(v4, LastBackwardRunClear, 0LL);
          MiReturnCommit(v4, LastBackwardRunClear + v42, 0);
        }
        *(_DWORD *)(a1 + 4LL * v3 + 40) = v23;
      }
    }
    v8 = v37;
    ++v3;
    v2 = v38;
    v7 = v39;
  }
  return KeSetEvent((PRKEVENT)a1, 0, 0);
}
