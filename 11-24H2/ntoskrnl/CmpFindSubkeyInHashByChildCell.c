/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x14083F9C0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpIsKcbLockAllowed @ 0x140A0AC40 (CmpIsKcbLockAllowed.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR *a5)
{
  int v5; // esi
  int v6; // edi
  bool v8; // zf
  int v11; // r12d
  __int64 CellPaged; // rax
  __int16 v13; // cx
  unsigned __int8 *v14; // rbx
  int v15; // ebp
  WCHAR v16; // ax
  unsigned int v17; // ebx
  ULONG_PTR v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // ecx
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rdi
  signed __int64 *v23; // rbp
  char *v24; // rsi
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  ULONG_PTR v27; // rdi
  __int64 i; // rcx
  ULONG_PTR v29; // rdi
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 *v33; // rbx
  signed __int64 v34; // rax
  signed __int64 v35; // rdx
  __int64 v36; // rtt
  __int16 v38; // cx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  ULONG_PTR v41; // rcx
  __int16 v42; // cx
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // ax
  __int16 v46; // ax
  _WORD v47[2]; // [rsp+38h] [rbp-50h] BYREF
  int v48; // [rsp+3Ch] [rbp-4Ch]
  __int64 v49; // [rsp+40h] [rbp-48h]
  __int64 v50; // [rsp+90h] [rbp+8h] BYREF
  int v51; // [rsp+A0h] [rbp+18h] BYREF
  int v52; // [rsp+A4h] [rbp+1Ch]

  v5 = 0;
  v6 = *(_DWORD *)(BugCheckParameter2 + 16);
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v50 = *(_QWORD *)(BugCheckParameter3 + 1648);
  v11 = BugCheckParameter4;
  v51 = -1;
  v52 = 0;
  v48 = 0;
  *a5 = 0LL;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
  if ( !CellPaged )
    return 3221225626LL;
  v13 = *(_WORD *)(CellPaged + 72);
  v14 = (unsigned __int8 *)(CellPaged + 76);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    v15 = *(unsigned __int16 *)(CellPaged + 72);
    if ( *(_WORD *)(CellPaged + 72) )
    {
      do
      {
        v16 = *v14;
        if ( (unsigned __int8)v16 >= 0x61u )
        {
          if ( (unsigned __int8)v16 > 0x7Au )
            v16 = RtlUpcaseUnicodeChar(*v14);
          else
            v16 -= 32;
        }
        ++v14;
        v5 = v16 + 37 * v5;
        --v15;
      }
      while ( v15 );
    }
    v17 = v5 + 37 * v6;
  }
  else
  {
    v47[0] = *(_WORD *)(CellPaged + 72);
    v47[1] = v13;
    v49 = CellPaged + 76;
    v17 = 37 * v6 + CmpHashUnicodeComponent(v47);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v51);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v51);
  if ( !a2 || BugCheckParameter2 == a2 )
  {
    v18 = BugCheckParameter2;
    goto LABEL_22;
  }
  v19 = (*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF;
  v20 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
  if ( v19 > v20 )
  {
    v18 = a2;
    v21 = BugCheckParameter2;
  }
  else
  {
    if ( v19 >= v20 )
    {
      v42 = *(_WORD *)(BugCheckParameter2 + 186);
      if ( (v42 & 4) != 0 && (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
      {
        v18 = a2;
        v21 = BugCheckParameter2;
        goto LABEL_21;
      }
      if ( (v42 & 2) == 0 || (*(_DWORD *)(a2 + 184) & 0x40000) == 0 )
      {
        v44 = *(_WORD *)(BugCheckParameter2 + 66);
        if ( v44 > *(__int16 *)(a2 + 66) )
        {
          v18 = a2;
          v21 = BugCheckParameter2;
          goto LABEL_21;
        }
        if ( v44 >= *(__int16 *)(a2 + 66) && BugCheckParameter2 > a2 )
        {
          v18 = a2;
          v21 = BugCheckParameter2;
          goto LABEL_21;
        }
      }
    }
    v21 = a2;
    v18 = BugCheckParameter2;
  }
LABEL_21:
  CmpUnlockKcb(v21);
LABEL_22:
  CmpUnlockKcb(v18);
  v22 = *(_QWORD *)(BugCheckParameter2 + 32);
  v23 = (signed __int64 *)(*(_QWORD *)(v22 + 1648)
                         + 24
                         * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9))));
  v24 = (char *)KeAbPreAcquire((__int64)v23, 0LL);
  if ( _InterlockedCompareExchange64(v23, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v23, 0, v24, (__int64)v23);
  if ( v24 )
    v24[10] = 1;
  _m_prefetchw((const void *)(v22 + 4232));
  v25 = *(_DWORD *)(v22 + 4232);
  do
  {
    if ( !v25 )
      KeBugCheckEx(0x51u, 0x17uLL, v22, 9uLL, v17);
    v26 = v25;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4232), v25 + 1, v25);
  }
  while ( v26 != v25 );
  if ( !a2 || BugCheckParameter2 == a2 )
  {
    v27 = BugCheckParameter2;
    goto LABEL_31;
  }
  v39 = (*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF;
  v40 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
  if ( v39 <= v40 )
  {
    if ( v39 < v40 )
      goto LABEL_60;
    v43 = *(_WORD *)(BugCheckParameter2 + 186);
    if ( (v43 & 4) == 0 || (*(_DWORD *)(a2 + 184) & 0x20000) == 0 )
    {
      if ( (v43 & 2) == 0 || (*(_DWORD *)(a2 + 184) & 0x40000) == 0 )
      {
        v45 = *(_WORD *)(BugCheckParameter2 + 66);
        if ( v45 > *(__int16 *)(a2 + 66) )
        {
          v41 = a2;
          v27 = BugCheckParameter2;
          goto LABEL_61;
        }
        if ( v45 >= *(__int16 *)(a2 + 66) && BugCheckParameter2 > a2 )
        {
          v41 = a2;
          v27 = BugCheckParameter2;
          goto LABEL_61;
        }
      }
LABEL_60:
      v27 = a2;
      v41 = BugCheckParameter2;
LABEL_61:
      CmpLockKcbShared(v41);
      goto LABEL_31;
    }
  }
  v27 = BugCheckParameter2;
  CmpLockKcbShared(a2);
LABEL_31:
  CmpLockKcbShared(v27);
  for ( i = *(_QWORD *)(v50
                      + 24
                      * ((unsigned int)(*(_DWORD *)(BugCheckParameter3 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v17 == *(_DWORD *)i && v11 == *(_DWORD *)(i + 24) && BugCheckParameter3 == *(_QWORD *)(i + 16) )
    {
      v29 = i - 16;
      if ( BugCheckParameter2 == i - 16
        || (v30 = (*(_DWORD *)(v29 + 8) >> 21) & 0x3FF,
            v31 = (*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF,
            v31 <= v30)
        && (v31 < v30
         || ((v38 = *(_WORD *)(BugCheckParameter2 + 186), (v38 & 4) == 0) || (*(_DWORD *)(v29 + 184) & 0x20000) == 0)
         && ((v38 & 2) != 0 && (*(_DWORD *)(v29 + 184) & 0x40000) != 0
          || (v46 = *(_WORD *)(BugCheckParameter2 + 66), v46 <= *(__int16 *)(v29 + 66))
          && (v46 < *(__int16 *)(v29 + 66) || BugCheckParameter2 <= v29))) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v29, &v50) )
        {
          a2 = v29;
        }
        else
        {
          CmpUnlockKcb(a2);
          CmpLockKcbShared(v29);
        }
      }
      else
      {
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbShared(v29);
        a2 = BugCheckParameter2;
      }
      CmpLockKcbShared(a2);
      CmpReferenceKeyControlBlock(v29);
      *a5 = v29;
      CmpUnlockKcb(v29);
      break;
    }
  }
  v32 = *(_QWORD *)(BugCheckParameter2 + 32);
  v33 = (__int64 *)(*(_QWORD *)(v32 + 1648)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(v32 + 1656) - 1) & ((101027 * (v17 ^ (v17 >> 9))) ^ ((unsigned __int64)(101027 * (v17 ^ (v17 >> 9))) >> 9))));
  v33[1] = 0LL;
  _m_prefetchw(v33);
  v34 = *v33;
  v35 = *v33 - 16;
  if ( (*v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v35 = 0LL;
  if ( (v34 & 2) != 0 || (v36 = *v33, v36 != _InterlockedCompareExchange64(v33, v35, v34)) )
    ExfReleasePushLock(v33);
  KeAbPostRelease((ULONG_PTR)v33);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)v32);
  return 0LL;
}
