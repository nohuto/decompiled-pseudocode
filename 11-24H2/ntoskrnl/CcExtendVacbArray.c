/*
 * XREFs of CcExtendVacbArray @ 0x1403ED180
 * Callers:
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     CcFreeUnusedVacbLevels @ 0x1403579AC (CcFreeUnusedVacbLevels.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x1403ED0D4 (CcCalculateVacbLevelLockCount.c)
 *     VacbLevelReference @ 0x1403ED150 (VacbLevelReference.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403EEF44 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAllocateVacbLevel @ 0x1404795EC (CcAllocateVacbLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r12d
  __int64 v5; // r14
  unsigned int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  char *PoolWithTag; // r13
  char *v12; // r15
  unsigned int v13; // esi
  int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // rax
  char *v17; // rcx
  char **i; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned int j; // eax
  KIRQL v23; // al
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  _QWORD *v26; // r14
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _DWORD *v29; // rax
  char *v30; // r8
  char *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r9
  char **v35; // r8
  _QWORD *v36; // [rsp+30h] [rbp-20h] BYREF
  _QWORD **v37; // [rsp+38h] [rbp-18h]
  __int64 v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+48h] [rbp-8h]
  int v40; // [rsp+4Ch] [rbp-4h]
  unsigned int v41; // [rsp+98h] [rbp+48h]
  unsigned int v42; // [rsp+A0h] [rbp+50h]

  v2 = 0;
  v40 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v38 = 0LL;
  v39 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v37 = &v36;
  v36 = &v36;
  if ( a2 > v5 )
  {
    if ( v5 < 0x2000000 )
    {
      v5 = a2;
      if ( a2 >= 0x2000000 )
        v5 = 0x2000000LL;
      if ( HIDWORD(v5) )
      {
        v6 = -1;
      }
      else if ( (unsigned int)v5 > 0x100000 )
      {
        v6 = 8 * ((unsigned int)v5 >> 18);
      }
      else
      {
        v6 = 32;
      }
      v41 = v6;
      if ( *(_DWORD *)(a1 + 36) )
      {
        v8 = -1;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 32);
        if ( v7 > 0x100000 )
          v8 = 8 * (v7 >> 18);
        else
          v8 = 32;
      }
      if ( v6 > v8 )
      {
        if ( v2 )
          v6 += (v6 + 15) & 0xFFFFFFF0;
        v9 = v6 + 8;
        if ( a2 < 0x2000000 )
          v9 = v6;
        v42 = v9;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x70566343u);
        if ( !PoolWithTag )
          return 3221225626LL;
        CcAcquireBcbLockAndVacbLock(v2, a1);
        v12 = *(char **)(a1 + 88);
        if ( v12 )
          memmove(PoolWithTag, *(const void **)(a1 + 88), v8);
        else
          v8 = 0;
        memset_0(&PoolWithTag[v8], 0, v41 - v8);
        if ( a2 >= 0x2000000 )
          *(_QWORD *)&PoolWithTag[v42 - 8] = 0LL;
        if ( v2 )
        {
          v16 = 0LL;
          v17 = &PoolWithTag[v41];
          if ( *(__int64 *)(a1 + 32) <= 0x200000 || !v12 )
          {
            for ( i = *(char ***)(a1 + 24); ; i = (char **)i[1] )
            {
              v19 = a1 + 16;
              if ( i == (char **)(a1 + 16) )
                goto LABEL_46;
              while ( v16 <= (__int64)*(i - 1) )
              {
                v30 = *i;
                if ( *((char ***)*i + 1) != i )
                  goto LABEL_50;
                *(_QWORD *)v17 = v30;
                v16 += 0x80000LL;
                *((_QWORD *)v17 + 1) = i;
                *((_QWORD *)v30 + 1) = v17;
                *i = v17;
                v17 += 16;
              }
            }
          }
          v31 = &v12[v8];
          do
          {
            v34 = *(_QWORD *)v31;
            v35 = (char **)*((_QWORD *)v31 + 1);
            if ( *(char **)(*(_QWORD *)v31 + 8LL) != v31 )
              goto LABEL_50;
            if ( *v35 != v31 )
              goto LABEL_50;
            *v35 = (char *)v34;
            *(_QWORD *)(v34 + 8) = v35;
            if ( *v35 != (char *)v34 )
              goto LABEL_50;
            *(_QWORD *)v17 = v34;
            v16 += 0x80000LL;
            *(_QWORD *)&PoolWithTag[v41 - (unsigned __int64)v8 - (_QWORD)v12 + 8 + (_QWORD)v31] = v35;
            v31 += 16;
            *v35 = v17;
            *(_QWORD *)(v34 + 8) = v17;
            v17 += 16;
          }
          while ( v16 < *(_QWORD *)(a1 + 32) );
          v19 = a1 + 16;
LABEL_46:
          while ( v16 < v5 )
          {
            v20 = *(_QWORD *)v19;
            if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
              goto LABEL_50;
            *(_QWORD *)v17 = v20;
            v16 += 0x80000LL;
            *((_QWORD *)v17 + 1) = v19;
            *(_QWORD *)(v20 + 8) = v17;
            *(_QWORD *)v19 = v17;
            v17 += 16;
          }
        }
        *(_QWORD *)(a1 + 88) = PoolWithTag;
        *(_QWORD *)(a1 + 32) = v5;
        CcReleaseBcbLockAndVacbLock(v2, a1);
        if ( v12 != (char *)(a1 + 56) && v12 )
          ExFreePoolWithTag(v12, 0);
      }
      *(_QWORD *)(a1 + 32) = v5;
    }
    if ( a2 > v5 )
    {
      v13 = 1;
      v14 = 25;
      if ( v5 > 0x2000000 )
      {
        do
        {
          v14 += 7;
          ++v13;
        }
        while ( v5 > 1LL << v14 );
      }
      v15 = v13;
      if ( (a2 - 1) >> v14 )
      {
        do
        {
          v14 += 7;
          ++v15;
        }
        while ( (a2 - 1) >> v14 );
        if ( v15 > v13 )
        {
          v23 = KeAcquireQueuedSpinLock(4uLL);
          if ( v15 >= CcMaxVacbLevelsSeen )
            CcMaxVacbLevelsSeen = v15 + 1;
          KeReleaseQueuedSpinLock(4uLL, v23);
          for ( j = v39; v15 - v13 > j; j = ++v39 )
          {
            v24 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
            if ( !v24 )
            {
              CcFreeUnusedVacbLevels((__int64)&v36);
              return 3221225626LL;
            }
            v21 = v37;
            if ( *v37 != &v36 )
              goto LABEL_50;
            v24[1] = v37;
            *v24 = &v36;
            *v21 = v24;
            v37 = (_QWORD **)v24;
          }
          CcAcquireBcbLockAndVacbLock(v2, a1);
          if ( v13 == 1 )
            CcCalculateVacbLevelLockCount(a1, *(_QWORD **)(a1 + 88));
          v25 = *(_QWORD **)(a1 + 88);
          if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v25, v13 - 1) )
          {
            while ( 1 )
            {
              v26 = v36;
              ++v13;
              if ( v36 == &v36 )
                KeBugCheckEx(0x34u, 0x1632uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
              v27 = *v36;
              if ( *(_QWORD **)(*v36 + 8LL) != v36 )
                break;
              v28 = (_QWORD *)v36[1];
              if ( (_QWORD *)*v28 != v36 )
                break;
              *v28 = v27;
              *(_QWORD *)(v27 + 8) = v28;
              --v39;
              memset_0(v26 + 1, 0, 0x400uLL);
              *v26 = 0LL;
              *v26 = *(_QWORD *)(a1 + 88);
              v29 = (_DWORD *)VacbLevelReference(a1, (__int64)v26, v13);
              ++*v29;
              *(_QWORD *)(a1 + 88) = v26;
              if ( v15 <= v13 )
                goto LABEL_63;
            }
LABEL_50:
            __fastfail(3u);
          }
          if ( v13 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          {
            *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(&v36, 0LL);
            v32 = v25[128];
            v33 = (_QWORD *)v25[255];
            *(_QWORD *)(v32 + 8) = v33;
            *v33 = v32;
            ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v25);
          }
LABEL_63:
          *(_QWORD *)(a1 + 32) = a2;
          CcReleaseBcbLockAndVacbLock(v2, a1);
        }
      }
      *(_QWORD *)(a1 + 32) = a2;
    }
  }
  CcFreeUnusedVacbLevels((__int64)&v36);
  return 0LL;
}
