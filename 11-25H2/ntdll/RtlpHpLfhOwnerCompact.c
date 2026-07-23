/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18000C2E0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18000C010 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18000A090 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18000AF44 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180031BF0 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180033000 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(unsigned __int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  volatile __int64 *v6; // rdi
  _RTL_SRWLOCK *i; // r15
  char v8; // r12
  bool v9; // zf
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int16 v12; // cx
  __int16 v13; // dx
  unsigned __int64 v14; // rax
  int v15; // edx
  unsigned __int8 *v16; // r14
  unsigned __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdi
  int v20; // r8d
  int v21; // r14d
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int8 *k; // rdi
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int16 v29; // r9
  _WORD *v30; // rdx
  unsigned __int16 *v31; // r14
  __int64 v32; // r12
  volatile signed __int32 *v33; // rdx
  char *SchedulerSharedDataSlot; // r9
  __int64 j; // r8
  volatile signed __int32 **v36; // rcx
  unsigned __int64 v37; // r13
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 **v40; // rax
  int v41; // r8d
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r8
  unsigned __int64 *v44; // rcx
  unsigned __int64 **v45; // rax
  unsigned __int64 **v46; // r8
  unsigned __int64 ***v47; // rax
  unsigned __int64 *v48; // r8
  unsigned __int64 v49; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v50; // [rsp+38h] [rbp-C8h]
  _DWORD v51[64]; // [rsp+40h] [rbp-C0h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    v26 = 0LL;
    v27 = 0;
    for ( i = (_RTL_SRWLOCK *)a2; v27 < *(unsigned __int8 *)(a1 + 64); ++v27 )
    {
      v28 = 0LL;
      v29 = *(_WORD *)(a1 + 2 * (((unsigned __int64)v27 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      if ( !(_DWORD)v26 )
        goto LABEL_57;
      v30 = v51;
      while ( *v30 != v29 )
      {
        v28 = (unsigned int)(v28 + 1);
        v30 += 2;
        if ( (unsigned int)v28 >= (unsigned int)v26 )
          goto LABEL_57;
      }
      if ( (unsigned int)v28 < (unsigned int)v26 )
      {
        ++HIWORD(v51[v28]);
      }
      else
      {
LABEL_57:
        v51[v26] = 0;
        LOWORD(v51[v26]) = v29;
        HIWORD(v51[v26]) = 1;
        v26 = (unsigned int)(v26 + 1);
      }
    }
    v6 = 0LL;
    if ( (_DWORD)v26 )
    {
      v31 = (unsigned __int16 *)v51;
      v32 = (unsigned int)v26;
      do
      {
        v6 = (volatile __int64 *)(a1 + ((unsigned __int64)*v31 << 6));
        RtlpHpLfhOwnerCompact(a1, v6, a3);
        v31 += 2;
        --v32;
      }
      while ( v32 );
    }
  }
  else
  {
    v6 = (volatile __int64 *)a2;
    i = (_RTL_SRWLOCK *)(a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6));
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24 || *((unsigned __int8 **)a2 + 5) != a2 + 40 )
  {
    v8 = 7;
    if ( a3 )
      v8 = 3;
    v9 = (*a2 & 1) == 0;
    v49 = (unsigned __int64)&v49;
    v50 = &v49;
    if ( !v9 || !*((_WORD *)a2 + 2) )
    {
      v33 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v36 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * j];
          if ( !*v36 )
          {
            if ( v36 )
              *v36 = v33;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v33, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a2 + 16);
    }
    if ( ((unsigned __int8)~*a2 & ((v8 & 4) != 0)) != 0 )
    {
      v10 = 0LL;
      v11 = _InterlockedExchange64(v6 + 7, 0LL);
      v12 = v11;
      v13 = v11;
      v14 = v11 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v12 & 0xFFF) != 0 )
        v10 = v14;
      v15 = v13 & 0xFFF;
      if ( v15 )
        *(_WORD *)(v10 + 32) += v15;
    }
    v16 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    while ( v16 != a2 + 24 )
    {
      v17 = (unsigned __int64)v16;
      v16 = *(unsigned __int8 **)v16;
      if ( *(unsigned __int16 *)(v17 + 18) + *(unsigned __int16 *)(v17 + 32)
        || ((*a2 & 1) != 0 || (*((_QWORD *)a2 + 7) ^ v17) - 1 > 0xFFE)
        && !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v17, 1, 0) )
      {
        v18 = *(unsigned __int16 *)(v17 + 18);
        if ( (_WORD)v18 || v18 + *(unsigned __int16 *)(v17 + 32) == *(unsigned __int16 *)(v17 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess(a1, v17, 1LL);
        if ( *(_WORD *)(v17 + 32) == *(_WORD *)(v17 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v17, 3, 0);
          v42 = v49;
          if ( *(unsigned __int64 **)(v49 + 8) != &v49 )
            goto LABEL_84;
          *(_QWORD *)v17 = v49;
          *(_QWORD *)(v17 + 8) = &v49;
          *(_QWORD *)(v42 + 8) = v17;
          v49 = v17;
        }
        else if ( (v8 & 4) != 0
               && *(_BYTE *)(v17 + 39) == 1
               && *(_BYTE *)(v17 + 38)
               && ((*a2 & 1) != 0 || (*((_QWORD *)a2 + 7) ^ v17) - 1 > 0xFFE) )
        {
          RtlpHpLfhSubsegmentReformatAsMulti(a1, v17, 0);
        }
      }
    }
    v19 = _InterlockedExchange64((volatile __int64 *)a2 + 1, 0LL);
    if ( v19 )
    {
      while ( 1 )
      {
        v37 = v19;
        v19 = *(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFFFF000uLL;
        v38 = *(unsigned __int16 *)(v37 + 18);
        if ( (_WORD)v38 || *(unsigned __int16 *)(v37 + 32) + v38 == *(unsigned __int16 *)(v37 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess(a1, v37, 1LL);
        if ( *(_WORD *)(v37 + 32) == *(_WORD *)(v37 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v37, 3, 0);
          v43 = v49;
          if ( *(unsigned __int64 **)(v49 + 8) != &v49 )
            goto LABEL_84;
          *(_QWORD *)v37 = v49;
          *(_QWORD *)(v37 + 8) = &v49;
          *(_QWORD *)(v43 + 8) = v37;
          v49 = v37;
        }
        else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v37, 0, 0) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v41, 3, 0);
          v48 = v50;
          if ( (unsigned __int64 *)*v50 != &v49 )
            goto LABEL_84;
          *(_QWORD *)(v37 + 8) = v50;
          *(_QWORD *)v37 = &v49;
          *v48 = v37;
          v50 = (unsigned __int64 *)v37;
        }
        if ( !v19 )
          goto LABEL_23;
      }
    }
    do
    {
LABEL_23:
      if ( (unsigned __int64 *)v49 == &v49 )
        goto LABEL_25;
      v20 = (int)v50;
      if ( *((_WORD *)v50 + 16) == *((_WORD *)v50 + 17) )
        goto LABEL_25;
      v44 = (unsigned __int64 *)*v50;
      if ( *(unsigned __int64 **)(*v50 + 8) != v50 )
        goto LABEL_84;
      v45 = (unsigned __int64 **)v50[1];
      if ( *v45 != v50 )
        goto LABEL_84;
      *v45 = v44;
      v44[1] = (unsigned __int64)v45;
    }
    while ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v20, 0, 0) );
    v47 = (unsigned __int64 ***)v50;
    if ( (unsigned __int64 *)*v50 != &v49 )
LABEL_84:
      __fastfail(3u);
    v46[1] = v50;
    *v46 = &v49;
    *v47 = v46;
    v50 = (unsigned __int64 *)v46;
LABEL_25:
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a2 + 2);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      v21 = 0;
    else
      v21 = 2;
    v22 = (unsigned __int64 *)v49;
    while ( v22 != &v49 )
    {
      v39 = (__int64)v22;
      v22 = (unsigned __int64 *)*v22;
      if ( v21 || *(_WORD *)(v39 + 32) != *(_WORD *)(v39 + 34) )
      {
        if ( (*(_BYTE *)(v39 + 51) & 1) != 0 )
          *(_BYTE *)(v39 + 51) &= ~1u;
      }
      else
      {
        if ( v22[1] != v39 )
          goto LABEL_84;
        v40 = *(unsigned __int64 ***)(v39 + 8);
        if ( *v40 != (unsigned __int64 *)v39 )
          goto LABEL_84;
        *v40 = v22;
        v22[1] = (unsigned __int64)v40;
        RtlpHpLfhSubsegmentFree(a1, v39, (__int64)i);
      }
    }
    if ( (unsigned __int64 *)v49 != &v49 )
    {
      RtlAcquireSRWLockExclusive(i + 2);
      v23 = (unsigned __int64 *)v49;
      do
      {
        if ( (unsigned __int64 *)v23[1] != &v49 )
          goto LABEL_84;
        v24 = *v23;
        if ( *(unsigned __int64 **)(*v23 + 8) != v23 )
          goto LABEL_84;
        v49 = *v23;
        *(_QWORD *)(v24 + 8) = &v49;
        RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)i, (_DWORD)v23, 0, 0);
        v23 = (unsigned __int64 *)v49;
      }
      while ( (unsigned __int64 *)v49 != &v49 );
      RtlReleaseSRWLockExclusive(i + 2);
    }
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)a2 + 2);
      for ( k = (unsigned __int8 *)*((_QWORD *)a2 + 3); k != a2 + 24; k = *(unsigned __int8 **)k )
      {
        if ( k[39] != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, k, 0xFFFFFFFFLL, 1LL);
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)a2 + 2);
    }
  }
}
