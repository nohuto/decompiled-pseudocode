/*
 * XREFs of CmpReportNotifyHelper @ 0x14086F9E0
 * Callers:
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpReportNotifyForKcbStack @ 0x14086F944 (CmpReportNotifyForKcbStack.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     CmpTransIsTransActive @ 0x1404D9480 (CmpTransIsTransActive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpNotifyTriggerCheck @ 0x14086FE0C (CmpNotifyTriggerCheck.c)
 *     CmpCancelSubordinatePost @ 0x14086FEDC (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1408703F0 (CmpFreeSubordinatePost.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  _OWORD *v19; // rbp
  __int64 *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  PVOID **v24; // rcx
  PVOID *v25; // rax
  PVOID *v26; // rbx
  PVOID *result; // rax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  PVOID P; // [rsp+20h] [rbp-68h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-60h]
  _OWORD v41[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v43; // [rsp+98h] [rbp+10h]

  p_P = &P;
  P = &P;
  v8 = a1;
  v9 = *(__int16 *)(a1 + 2);
  _mm_lfence();
  if ( (int)v9 >= 2 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v9 - 16);
  else
    v10 = *(_QWORD *)(a1 + 8 * v9 + 8);
  CmLockHive(a2);
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  v12 = a2 + 1592;
LABEL_6:
  v13 = a5;
LABEL_7:
  while ( 1 )
  {
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      break;
    v14 = *(_QWORD *)(v12 + 32);
    if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000u) > (*(_DWORD *)(v10 + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(v12 + 48) & 0x3FFFFFFF) != 0 && ((*(_DWORD *)(v12 + 48) & 0x40000000) != 0 || v14 == v10) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v15) && (!v15 || (unsigned int)CmpTransIsTransActive(v15)) )
      {
        v16 = *(_QWORD *)(v12 + 32);
        v17 = v10;
        v18 = (*(_DWORD *)(v16 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(v10 + 8) >> 21) & 0x3FFu) > v18 )
        {
          do
            v17 = *(_QWORD *)(v17 + 72);
          while ( ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FFu) > v18 );
        }
        if ( v17 == v16 && (unsigned __int8)CmpNotifyTriggerCheck(v12, v8, a3) )
        {
          memset(v41, 0, 32);
          if ( !v13 )
          {
            *((_QWORD *)&v41[0] + 1) = v41;
            *(_QWORD *)&v41[0] = v41;
          }
          v19 = v41;
          if ( v13 )
            v19 = (_OWORD *)v13;
          ExAcquireFastMutexUnsafe(&CmpPostLock);
          v20 = (__int64 *)(v12 + 16);
          if ( (__int64 *)*v20 == v20 )
          {
            *(_DWORD *)(v12 + 48) |= 0x80000000;
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            goto LABEL_6;
          }
          *(_DWORD *)(v12 + 48) &= ~0x80000000;
          while ( 1 )
          {
            do
            {
LABEL_23:
              v21 = *v20;
              if ( (__int64 *)*v20 == v20 )
              {
                ExReleaseFastMutexUnsafe(&CmpPostLock);
                v13 = a5;
                v8 = a1;
                if ( !a5 )
                  CmpSignalDeferredPosts((_QWORD **)v19);
                goto LABEL_7;
              }
              if ( *(__int64 **)(v21 + 8) != v20 )
                goto LABEL_30;
              v22 = *(_QWORD *)v21;
              if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
                goto LABEL_30;
              *v20 = v22;
              *(_QWORD *)(v22 + 8) = v20;
              v23 = *(_DWORD *)(v21 + 56);
              if ( (v23 & 0x10000) == 0 )
              {
                v36 = v21;
                do
                {
                  v37 = *(_QWORD *)(v36 + 32);
                  *(_DWORD *)(v37 + 24) &= ~0x10000u;
                  v36 = v37 - 32;
                }
                while ( v36 != v21 );
                v23 = *(_DWORD *)(v21 + 56) | 0x10000;
                *(_DWORD *)(v21 + 56) = v23;
              }
              if ( (_WORD)v23 != 1 )
              {
                CmpCancelSubordinatePost(v21, &P);
                v24 = *(PVOID ***)(v21 + 48);
                if ( v24 )
                {
                  v25 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_30;
                  v24[1] = p_P;
                  *v24 = &P;
                  *v25 = v24;
                  p_P = (PVOID *)v24;
                  *(_QWORD *)(v21 + 48) = 0LL;
                }
              }
              v29 = (unsigned __int16)*(_DWORD *)(v21 + 56);
              if ( v29 == 4 )
                break;
              v34 = v29 - 1;
              if ( !v34 )
              {
                v38 = *(_QWORD *)(v21 + 64);
                *(_QWORD *)v21 = 0LL;
                *(_DWORD *)(v38 + 24) = 268;
                KeSetEvent(*(PRKEVENT *)(v21 + 64), 0, 0);
                goto LABEL_23;
              }
              v35 = v34 - 1;
              if ( !v35 )
              {
                KeInsertQueueApc(*(_QWORD *)(v21 + 64) + 16LL, 268LL, v21, 0);
                goto LABEL_23;
              }
            }
            while ( v35 != 1 );
            CmpFreeSubordinatePost(v21);
            v30 = *(_QWORD *)(v21 + 16);
            v31 = (_QWORD *)(v21 + 16);
            if ( *(_QWORD **)(v30 + 8) != v31 )
              goto LABEL_30;
            v32 = (_QWORD *)v31[1];
            if ( (_QWORD *)*v32 != v31 )
              goto LABEL_30;
            *v32 = v30;
            *(_QWORD *)(v30 + 8) = v32;
            v33 = (_QWORD *)*((_QWORD *)v19 + 1);
            if ( (_OWORD *)*v33 != v19 )
              goto LABEL_30;
            *v31 = v19;
            v31[1] = v33;
            *v33 = v31;
            *((_QWORD *)v19 + 1) = v31;
          }
        }
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
  __writecr8(v43);
  CmUnlockHive(a2);
  while ( 1 )
  {
    v26 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v28 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
LABEL_30:
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v28 + 8) = &P;
    ObDereferenceObjectDeferDelete(v26[2]);
    ExFreePoolWithTag(v26, 0);
  }
  return result;
}
