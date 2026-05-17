/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1800506A0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1800503D0 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E8930 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x18004D160 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004E450 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18004E800 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18004F304 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

unsigned __int64 *__fastcall RtlpHpLfhOwnerCompact(unsigned __int64 a1, unsigned __int8 *a2, unsigned __int64 j)
{
  unsigned int v3; // r13d
  volatile __int64 *v6; // rdi
  char *i; // r15
  unsigned __int64 *result; // rax
  char v9; // r12
  bool v10; // zf
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int16 v13; // cx
  __int16 v14; // dx
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int8 *v17; // r14
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rdi
  __int64 *v21; // r8
  int v22; // r14d
  unsigned __int64 *v23; // rdi
  __int64 *v24; // r8
  __int64 v25; // rax
  unsigned __int8 *k; // rdi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int16 v29; // r9
  _WORD *v30; // rdx
  unsigned __int16 *v31; // r14
  __int64 v32; // r12
  volatile signed __int32 *v33; // rdx
  char *SchedulerSharedDataSlot; // r9
  volatile signed __int32 **v35; // rcx
  unsigned __int64 v36; // r13
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 **v39; // rax
  __int64 *v40; // r8
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r8
  unsigned __int64 *v43; // rcx
  unsigned __int64 **v44; // rax
  unsigned __int64 **v45; // r8
  _QWORD *v46; // rax
  unsigned __int64 *v47; // r8
  unsigned __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v49; // [rsp+38h] [rbp-C8h]
  _DWORD v50[64]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = j;
  if ( (*a2 & 1) != 0 )
  {
    j = 0LL;
    v27 = 0;
    for ( i = (char *)a2; v27 < *(unsigned __int8 *)(a1 + 64); ++v27 )
    {
      v28 = 0LL;
      v29 = *(_WORD *)(a1 + 2 * (((unsigned __int64)v27 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      if ( !(_DWORD)j )
        goto LABEL_57;
      v30 = v50;
      while ( *v30 != v29 )
      {
        v28 = (unsigned int)(v28 + 1);
        v30 += 2;
        if ( (unsigned int)v28 >= (unsigned int)j )
          goto LABEL_57;
      }
      if ( (unsigned int)v28 < (unsigned int)j )
      {
        ++HIWORD(v50[v28]);
      }
      else
      {
LABEL_57:
        v50[j] = 0;
        LOWORD(v50[j]) = v29;
        HIWORD(v50[j]) = 1;
        j = (unsigned int)(j + 1);
      }
    }
    v6 = 0LL;
    if ( (_DWORD)j )
    {
      v31 = (unsigned __int16 *)v50;
      v32 = (unsigned int)j;
      do
      {
        v6 = (volatile __int64 *)(a1 + ((unsigned __int64)*v31 << 6));
        RtlpHpLfhOwnerCompact(a1, v6, v3);
        v31 += 2;
        --v32;
      }
      while ( v32 );
    }
  }
  else
  {
    v6 = (volatile __int64 *)a2;
    i = (char *)(a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6));
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24
    || (result = (unsigned __int64 *)(a2 + 40), (unsigned __int64 *)*result != result) )
  {
    v9 = 7;
    if ( v3 )
      v9 = 3;
    v10 = (*a2 & 1) == 0;
    v48 = (unsigned __int64)&v48;
    v49 = &v48;
    if ( !v10 || !*((_WORD *)a2 + 2) )
    {
      v33 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v35 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * j];
          if ( !*v35 )
          {
            if ( v35 )
              *v35 = v33;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v33, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (unsigned __int64)(a2 + 16),
          (unsigned __int64)v33,
          (_QWORD *)j,
          (unsigned __int64)SchedulerSharedDataSlot);
    }
    if ( ((unsigned __int8)~*a2 & ((v9 & 4) != 0)) != 0 )
    {
      v11 = 0LL;
      v12 = _InterlockedExchange64(v6 + 7, 0LL);
      v13 = v12;
      v14 = v12;
      v15 = v12 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v13 & 0xFFF) != 0 )
        v11 = v15;
      v16 = v14 & 0xFFF;
      if ( v16 )
        *(_WORD *)(v11 + 32) += v16;
    }
    v17 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    while ( v17 != a2 + 24 )
    {
      v18 = (unsigned __int64)v17;
      v17 = *(unsigned __int8 **)v17;
      if ( *(unsigned __int16 *)(v18 + 18) + *(unsigned __int16 *)(v18 + 32)
        || ((*a2 & 1) != 0 || (*((_QWORD *)a2 + 7) ^ v18) - 1 > 0xFFE)
        && !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v18, 1, 0) )
      {
        v19 = *(unsigned __int16 *)(v18 + 18);
        if ( (_WORD)v19 || v19 + *(unsigned __int16 *)(v18 + 32) == *(unsigned __int16 *)(v18 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess((__int64 *)a1, v18, 1);
        if ( *(_WORD *)(v18 + 32) == *(_WORD *)(v18 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v18, 3, 0);
          v41 = v48;
          if ( *(unsigned __int64 **)(v48 + 8) != &v48 )
            goto LABEL_84;
          *(_QWORD *)v18 = v48;
          *(_QWORD *)(v18 + 8) = &v48;
          *(_QWORD *)(v41 + 8) = v18;
          v48 = v18;
        }
        else if ( (v9 & 4) != 0
               && *(_BYTE *)(v18 + 39) == 1
               && *(_BYTE *)(v18 + 38)
               && ((*a2 & 1) != 0 || (*((_QWORD *)a2 + 7) ^ v18) - 1 > 0xFFE) )
        {
          RtlpHpLfhSubsegmentReformatAsMulti(a1, v18, 0);
        }
      }
    }
    v20 = _InterlockedExchange64((volatile __int64 *)a2 + 1, 0LL);
    if ( v20 )
    {
      while ( 1 )
      {
        v36 = v20;
        v20 = *(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFF000uLL;
        v37 = *(unsigned __int16 *)(v36 + 18);
        if ( (_WORD)v37 || *(unsigned __int16 *)(v36 + 32) + v37 == *(unsigned __int16 *)(v36 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess((__int64 *)a1, v36, 1);
        if ( *(_WORD *)(v36 + 32) == *(_WORD *)(v36 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v36, 3, 0);
          v42 = v48;
          if ( *(unsigned __int64 **)(v48 + 8) != &v48 )
            goto LABEL_84;
          *(_QWORD *)v36 = v48;
          *(_QWORD *)(v36 + 8) = &v48;
          *(_QWORD *)(v42 + 8) = v36;
          v48 = v36;
        }
        else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v36, 0, 0) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v40, 3, 0);
          v47 = v49;
          if ( (unsigned __int64 *)*v49 != &v48 )
            goto LABEL_84;
          *(_QWORD *)(v36 + 8) = v49;
          *(_QWORD *)v36 = &v48;
          *v47 = v36;
          v49 = (unsigned __int64 *)v36;
        }
        if ( !v20 )
          goto LABEL_23;
      }
    }
    do
    {
LABEL_23:
      if ( (unsigned __int64 *)v48 == &v48 )
        goto LABEL_25;
      v21 = (__int64 *)v49;
      if ( *((_WORD *)v49 + 16) == *((_WORD *)v49 + 17) )
        goto LABEL_25;
      v43 = (unsigned __int64 *)*v49;
      if ( *(unsigned __int64 **)(*v49 + 8) != v49 )
        goto LABEL_84;
      v44 = (unsigned __int64 **)v49[1];
      if ( *v44 != v49 )
        goto LABEL_84;
      *v44 = v43;
      v43[1] = (unsigned __int64)v44;
    }
    while ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v21, 0, 0) );
    v46 = v49;
    if ( (unsigned __int64 *)*v49 != &v48 )
LABEL_84:
      __fastfail(3u);
    v45[1] = v49;
    *v45 = &v48;
    *v46 = v45;
    v49 = (unsigned __int64 *)v45;
LABEL_25:
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive(a2 + 16);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      v22 = 0;
    else
      v22 = 2;
    v23 = (unsigned __int64 *)v48;
    while ( v23 != &v48 )
    {
      v38 = (__int64)v23;
      v23 = (unsigned __int64 *)*v23;
      if ( v22 || *(_WORD *)(v38 + 32) != *(_WORD *)(v38 + 34) )
      {
        if ( (*(_BYTE *)(v38 + 51) & 1) != 0 )
          *(_BYTE *)(v38 + 51) &= ~1u;
      }
      else
      {
        if ( v23[1] != v38 )
          goto LABEL_84;
        v39 = *(unsigned __int64 ***)(v38 + 8);
        if ( *v39 != (unsigned __int64 *)v38 )
          goto LABEL_84;
        *v39 = v23;
        v23[1] = (unsigned __int64)v39;
        RtlpHpLfhSubsegmentFree(a1, v38, (__int64)i);
      }
    }
    result = &v48;
    if ( (unsigned __int64 *)v48 != &v48 )
    {
      RtlAcquireSRWLockExclusive(i + 16);
      v24 = (__int64 *)v48;
      do
      {
        if ( (unsigned __int64 *)v24[1] != &v48 )
          goto LABEL_84;
        v25 = *v24;
        if ( *(__int64 **)(*v24 + 8) != v24 )
          goto LABEL_84;
        v48 = *v24;
        *(_QWORD *)(v25 + 8) = &v48;
        RtlpHpLfhOwnerMoveSubsegment(a1, i, v24, 0, 0);
        v24 = (__int64 *)v48;
      }
      while ( (unsigned __int64 *)v48 != &v48 );
      result = (unsigned __int64 *)RtlReleaseSRWLockExclusive(i + 16);
    }
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)a2 + 2);
      for ( k = (unsigned __int8 *)*((_QWORD *)a2 + 3); k != a2 + 24; k = *(unsigned __int8 **)k )
      {
        if ( k[39] != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, k, -1, 1uLL);
      }
      return (unsigned __int64 *)RtlReleaseSRWLockShared((volatile signed __int64 *)a2 + 2);
    }
  }
  return result;
}
