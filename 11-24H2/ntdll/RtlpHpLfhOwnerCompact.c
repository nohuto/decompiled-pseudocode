/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180066280
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x180065FB0 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(unsigned __int64 a1, unsigned __int8 *a2, char *j)
{
  unsigned int v3; // r13d
  volatile __int64 *v6; // rdi
  __int64 i; // r15
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
  __int64 *v20; // r8
  int v21; // r14d
  unsigned __int64 *v22; // rdi
  __int64 *v23; // r8
  __int64 v24; // rax
  __int64 k; // rdi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int16 v28; // r9
  _WORD *v29; // rdx
  unsigned __int16 *v30; // r14
  __int64 v31; // r12
  volatile signed __int32 *v32; // rdx
  char *SchedulerSharedDataSlot; // r9
  volatile signed __int32 **v34; // rcx
  unsigned __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 **v38; // rax
  __int64 *v39; // r8
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  unsigned __int64 *v42; // rcx
  unsigned __int64 **v43; // rax
  unsigned __int64 **v44; // r8
  _QWORD *v45; // rax
  unsigned __int64 *v46; // r8
  unsigned __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v48; // [rsp+38h] [rbp-C8h]
  _DWORD v49[64]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (unsigned int)j;
  if ( (*a2 & 1) != 0 )
  {
    j = 0LL;
    v26 = 0;
    for ( i = (__int64)a2; v26 < *(unsigned __int8 *)(a1 + 64); ++v26 )
    {
      v27 = 0LL;
      v28 = *(_WORD *)(a1 + 2 * (((unsigned __int64)v26 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      if ( !(_DWORD)j )
        goto LABEL_57;
      v29 = v49;
      while ( *v29 != v28 )
      {
        v27 = (unsigned int)(v27 + 1);
        v29 += 2;
        if ( (unsigned int)v27 >= (unsigned int)j )
          goto LABEL_57;
      }
      if ( (unsigned int)v27 < (unsigned int)j )
      {
        ++HIWORD(v49[v27]);
      }
      else
      {
LABEL_57:
        v49[(_QWORD)j] = 0;
        LOWORD(v49[(_QWORD)j]) = v28;
        HIWORD(v49[(_QWORD)j]) = 1;
        j = (char *)(unsigned int)((_DWORD)j + 1);
      }
    }
    v6 = 0LL;
    if ( (_DWORD)j )
    {
      v30 = (unsigned __int16 *)v49;
      v31 = (unsigned int)j;
      do
      {
        v6 = (volatile __int64 *)(a1 + ((unsigned __int64)*v30 << 6));
        RtlpHpLfhOwnerCompact(a1, v6, v3);
        v30 += 2;
        --v31;
      }
      while ( v31 );
    }
  }
  else
  {
    v6 = (volatile __int64 *)a2;
    i = a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6);
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24 || *((unsigned __int8 **)a2 + 5) != a2 + 40 )
  {
    v8 = 7;
    if ( v3 )
      v8 = 3;
    v9 = (*a2 & 1) == 0;
    v47 = (unsigned __int64)&v47;
    v48 = &v47;
    if ( !v9 || !*((_WORD *)a2 + 2) )
    {
      v32 = (volatile signed __int32 *)(a2 + 16);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (char *)(unsigned int)((_DWORD)j + 1) )
        {
          v34 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (_QWORD)j];
          if ( !*v34 )
          {
            if ( v34 )
              *v34 = v32;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v32, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (unsigned __int64)(a2 + 16),
          (unsigned __int64)v32,
          j,
          SchedulerSharedDataSlot);
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
        && !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v17, 1, 0) )
      {
        v18 = *(unsigned __int16 *)(v17 + 18);
        if ( (_WORD)v18 || v18 + *(unsigned __int16 *)(v17 + 32) == *(unsigned __int16 *)(v17 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess((__int64 *)a1, v17, 1);
        if ( *(_WORD *)(v17 + 32) == *(_WORD *)(v17 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v17, 3, 0);
          v40 = v47;
          if ( *(unsigned __int64 **)(v47 + 8) != &v47 )
            goto LABEL_84;
          *(_QWORD *)v17 = v47;
          *(_QWORD *)(v17 + 8) = &v47;
          *(_QWORD *)(v40 + 8) = v17;
          v47 = v17;
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
        v35 = v19;
        v19 = *(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFFFF000uLL;
        v36 = *(unsigned __int16 *)(v35 + 18);
        if ( (_WORD)v36 || *(unsigned __int16 *)(v35 + 32) + v36 == *(unsigned __int16 *)(v35 + 34) )
          RtlpHpLfhSubsegmentDelayFreeProcess((__int64 *)a1, v35, 1);
        if ( *(_WORD *)(v35 + 32) == *(_WORD *)(v35 + 34) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v35, 3, 0);
          v41 = v47;
          if ( *(unsigned __int64 **)(v47 + 8) != &v47 )
            goto LABEL_84;
          *(_QWORD *)v35 = v47;
          *(_QWORD *)(v35 + 8) = &v47;
          *(_QWORD *)(v41 + 8) = v35;
          v47 = v35;
        }
        else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, (__int64 *)v35, 0, 0) )
        {
          RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v39, 3, 0);
          v46 = v48;
          if ( (unsigned __int64 *)*v48 != &v47 )
            goto LABEL_84;
          *(_QWORD *)(v35 + 8) = v48;
          *(_QWORD *)v35 = &v47;
          *v46 = v35;
          v48 = (unsigned __int64 *)v35;
        }
        if ( !v19 )
          goto LABEL_23;
      }
    }
    do
    {
LABEL_23:
      if ( (unsigned __int64 *)v47 == &v47 )
        goto LABEL_25;
      v20 = (__int64 *)v48;
      if ( *((_WORD *)v48 + 16) == *((_WORD *)v48 + 17) )
        goto LABEL_25;
      v42 = (unsigned __int64 *)*v48;
      if ( *(unsigned __int64 **)(*v48 + 8) != v48 )
        goto LABEL_84;
      v43 = (unsigned __int64 **)v48[1];
      if ( *v43 != v48 )
        goto LABEL_84;
      *v43 = v42;
      v42[1] = (unsigned __int64)v43;
    }
    while ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v20, 0, 0) );
    v45 = v48;
    if ( (unsigned __int64 *)*v48 != &v47 )
LABEL_84:
      __fastfail(3u);
    v44[1] = v48;
    *v44 = &v47;
    *v45 = v44;
    v48 = (unsigned __int64 *)v44;
LABEL_25:
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a2 + 2);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      v21 = 0;
    else
      v21 = 2;
    v22 = (unsigned __int64 *)v47;
    while ( v22 != &v47 )
    {
      v37 = (__int64)v22;
      v22 = (unsigned __int64 *)*v22;
      if ( v21 || *(_WORD *)(v37 + 32) != *(_WORD *)(v37 + 34) )
      {
        if ( (*(_BYTE *)(v37 + 51) & 1) != 0 )
          *(_BYTE *)(v37 + 51) &= ~1u;
      }
      else
      {
        if ( v22[1] != v37 )
          goto LABEL_84;
        v38 = *(unsigned __int64 ***)(v37 + 8);
        if ( *v38 != (unsigned __int64 *)v37 )
          goto LABEL_84;
        *v38 = v22;
        v22[1] = (unsigned __int64)v38;
        RtlpHpLfhSubsegmentFree(a1, v37, i);
      }
    }
    if ( (unsigned __int64 *)v47 != &v47 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(i + 16));
      v23 = (__int64 *)v47;
      do
      {
        if ( (unsigned __int64 *)v23[1] != &v47 )
          goto LABEL_84;
        v24 = *v23;
        if ( *(__int64 **)(*v23 + 8) != v23 )
          goto LABEL_84;
        v47 = *v23;
        *(_QWORD *)(v24 + 8) = &v47;
        RtlpHpLfhOwnerMoveSubsegment(a1, (char *)i, v23, 0, 0);
        v23 = (__int64 *)v47;
      }
      while ( (unsigned __int64 *)v47 != &v47 );
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(i + 16));
    }
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)a2 + 2);
      for ( k = *((_QWORD *)a2 + 3); (unsigned __int8 *)k != a2 + 24; k = *(_QWORD *)k )
      {
        if ( *(_BYTE *)(k + 39) != 1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, k, -1, (char *)1);
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)a2 + 2);
    }
  }
}
