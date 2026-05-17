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

unsigned __int64 *__fastcall RtlpHpLfhOwnerCompact(unsigned __int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  volatile __int64 *v6; // rdi
  __int64 i; // r15
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
  int v21; // r8d
  int v22; // r14d
  unsigned __int64 *v23; // rdi
  unsigned __int64 *v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int8 *k; // rdi
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int16 v30; // r9
  _WORD *v31; // rdx
  unsigned __int16 *v32; // r14
  __int64 v33; // r12
  volatile signed __int32 *v34; // rdx
  char *SchedulerSharedDataSlot; // r9
  __int64 j; // r8
  volatile signed __int32 **v37; // rcx
  unsigned __int64 v38; // r13
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 **v41; // rax
  int v42; // r8d
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r8
  unsigned __int64 *v45; // rcx
  unsigned __int64 **v46; // rax
  unsigned __int64 **v47; // r8
  unsigned __int64 ***v48; // rax
  unsigned __int64 *v49; // r8
  unsigned __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v51; // [rsp+38h] [rbp-C8h]
  _DWORD v52[64]; // [rsp+40h] [rbp-C0h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    v27 = 0LL;
    v28 = 0;
    for ( i = (__int64)a2; v28 < *(unsigned __int8 *)(a1 + 64); ++v28 )
    {
      v29 = 0LL;
      v30 = *(_WORD *)(a1 + 2 * (((unsigned __int64)v28 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      if ( !(_DWORD)v27 )
        goto LABEL_57;
      v31 = v52;
      while ( *v31 != v30 )
      {
        v29 = (unsigned int)(v29 + 1);
        v31 += 2;
        if ( (unsigned int)v29 >= (unsigned int)v27 )
          goto LABEL_57;
      }
      if ( (unsigned int)v29 < (unsigned int)v27 )
      {
        ++HIWORD(v52[v29]);
      }
      else
      {
LABEL_57:
        v52[v27] = 0;
        LOWORD(v52[v27]) = v30;
        HIWORD(v52[v27]) = 1;
        v27 = (unsigned int)(v27 + 1);
      }
    }
    v6 = 0LL;
    if ( (_DWORD)v27 )
    {
      v32 = (unsigned __int16 *)v52;
      v33 = (unsigned int)v27;
      do
      {
        v6 = (volatile __int64 *)(a1 + ((unsigned __int64)*v32 << 6));
        RtlpHpLfhOwnerCompact(a1, v6, a3);
        v32 += 2;
        --v33;
      }
      while ( v33 );
    }
  }
  else
  {
    v6 = (volatile __int64 *)a2;
    i = a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6);
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24
    || (result = (unsigned __int64 *)(a2 + 40), (unsigned __int64 *)*result != result) )
  {
    v9 = 7;
    if ( a3 )
      v9 = 3;
    v10 = (*a2 & 1) == 0;
    v50 = (unsigned __int64)&v50;
    v51 = &v50;
    if ( !v10 || !*((_WORD *)a2 + 2) )
    {
      v34 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v37 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * j];
          if ( !*v37 )
          {
            if ( v37 )
              *v37 = v34;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v34, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a2 + 16);
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
        && !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v18, 1, 0) )
      {
        v19 = *(unsigned __int16 *)(v18 + 18);
        if ( (_WORD)v19 || v19 + *(unsigned __int16 *)(v18 + 32) == *(unsigned __int16 *)(v18 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess(a1, v18, 1LL);
        if ( *(_WORD *)(v18 + 32) == *(_WORD *)(v18 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v18, 3, 0);
          v43 = v50;
          if ( *(unsigned __int64 **)(v50 + 8) != &v50 )
            goto LABEL_84;
          *(_QWORD *)v18 = v50;
          *(_QWORD *)(v18 + 8) = &v50;
          *(_QWORD *)(v43 + 8) = v18;
          v50 = v18;
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
        v38 = v20;
        v20 = *(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFF000uLL;
        v39 = *(unsigned __int16 *)(v38 + 18);
        if ( (_WORD)v39 || *(unsigned __int16 *)(v38 + 32) + v39 == *(unsigned __int16 *)(v38 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess(a1, v38, 1LL);
        if ( *(_WORD *)(v38 + 32) == *(_WORD *)(v38 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v38, 3, 0);
          v44 = v50;
          if ( *(unsigned __int64 **)(v50 + 8) != &v50 )
            goto LABEL_84;
          *(_QWORD *)v38 = v50;
          *(_QWORD *)(v38 + 8) = &v50;
          *(_QWORD *)(v44 + 8) = v38;
          v50 = v38;
        }
        else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v38, 0, 0) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v42, 3, 0);
          v49 = v51;
          if ( (unsigned __int64 *)*v51 != &v50 )
            goto LABEL_84;
          *(_QWORD *)(v38 + 8) = v51;
          *(_QWORD *)v38 = &v50;
          *v49 = v38;
          v51 = (unsigned __int64 *)v38;
        }
        if ( !v20 )
          goto LABEL_23;
      }
    }
    do
    {
LABEL_23:
      if ( (unsigned __int64 *)v50 == &v50 )
        goto LABEL_25;
      v21 = (int)v51;
      if ( *((_WORD *)v51 + 16) == *((_WORD *)v51 + 17) )
        goto LABEL_25;
      v45 = (unsigned __int64 *)*v51;
      if ( *(unsigned __int64 **)(*v51 + 8) != v51 )
        goto LABEL_84;
      v46 = (unsigned __int64 **)v51[1];
      if ( *v46 != v51 )
        goto LABEL_84;
      *v46 = v45;
      v45[1] = (unsigned __int64)v46;
    }
    while ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, v21, 0, 0) );
    v48 = (unsigned __int64 ***)v51;
    if ( (unsigned __int64 *)*v51 != &v50 )
LABEL_84:
      __fastfail(3u);
    v47[1] = v51;
    *v47 = &v50;
    *v48 = v47;
    v51 = (unsigned __int64 *)v47;
LABEL_25:
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive(a2 + 16);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      v22 = 0;
    else
      v22 = 2;
    v23 = (unsigned __int64 *)v50;
    while ( v23 != &v50 )
    {
      v40 = (__int64)v23;
      v23 = (unsigned __int64 *)*v23;
      if ( v22 || *(_WORD *)(v40 + 32) != *(_WORD *)(v40 + 34) )
      {
        if ( (*(_BYTE *)(v40 + 51) & 1) != 0 )
          *(_BYTE *)(v40 + 51) &= ~1u;
      }
      else
      {
        if ( v23[1] != v40 )
          goto LABEL_84;
        v41 = *(unsigned __int64 ***)(v40 + 8);
        if ( *v41 != (unsigned __int64 *)v40 )
          goto LABEL_84;
        *v41 = v23;
        v23[1] = (unsigned __int64)v41;
        RtlpHpLfhSubsegmentFree(a1, v40, i);
      }
    }
    result = &v50;
    if ( (unsigned __int64 *)v50 != &v50 )
    {
      RtlAcquireSRWLockExclusive(i + 16);
      v24 = (unsigned __int64 *)v50;
      do
      {
        if ( (unsigned __int64 *)v24[1] != &v50 )
          goto LABEL_84;
        v25 = *v24;
        if ( *(unsigned __int64 **)(*v24 + 8) != v24 )
          goto LABEL_84;
        v50 = *v24;
        *(_QWORD *)(v25 + 8) = &v50;
        RtlpHpLfhOwnerMoveSubsegment(a1, i, (_DWORD)v24, 0, 0);
        v24 = (unsigned __int64 *)v50;
      }
      while ( (unsigned __int64 *)v50 != &v50 );
      result = (unsigned __int64 *)RtlReleaseSRWLockExclusive(i + 16);
    }
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared(a2 + 16);
      for ( k = (unsigned __int8 *)*((_QWORD *)a2 + 3); k != a2 + 24; k = *(unsigned __int8 **)k )
      {
        if ( k[39] != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, k, 0xFFFFFFFFLL, 1LL);
      }
      return (unsigned __int64 *)RtlReleaseSRWLockShared(a2 + 16);
    }
  }
  return result;
}
