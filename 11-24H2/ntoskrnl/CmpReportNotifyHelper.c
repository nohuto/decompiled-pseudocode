/*
 * XREFs of CmpReportNotifyHelper @ 0x14086CB10
 * Callers:
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpReportNotifyForKcbStack @ 0x14086CA6C (CmpReportNotifyForKcbStack.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     CmpTransIsTransActive @ 0x1404D1950 (CmpTransIsTransActive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmLockHive @ 0x140841F34 (CmLockHive.c)
 *     CmUnlockHive @ 0x140842A00 (CmUnlockHive.c)
 *     CmpNotifyTriggerCheck @ 0x14086CF78 (CmpNotifyTriggerCheck.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x14086DAAC (CmpAddToDelayedDeref.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rdi
  __int64 v13; // rbx
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
  __int64 v24; // rcx
  PVOID **v25; // rax
  PVOID *v26; // rcx
  PVOID *v27; // rbx
  PVOID *result; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  _QWORD *v35; // rdi
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  PVOID P; // [rsp+20h] [rbp-68h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-60h]
  _OWORD v45[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v47; // [rsp+98h] [rbp+10h]

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
  v47 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  v12 = a5;
  v13 = a2 + 1592;
LABEL_6:
  while ( 1 )
  {
    v13 = *(_QWORD *)v13;
    if ( !v13 )
      break;
    v14 = *(_QWORD *)(v13 + 32);
    if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000u) > (*(_DWORD *)(v10 + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(v13 + 48) & 0x3FFFFFFF) != 0 && ((*(_DWORD *)(v13 + 48) & 0x40000000) != 0 || v14 == v10) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v15) && (!v15 || (unsigned int)CmpTransIsTransActive(v15)) )
      {
        v16 = *(_QWORD *)(v13 + 32);
        v17 = v10;
        v18 = (*(_DWORD *)(v16 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(v10 + 8) >> 21) & 0x3FFu) > v18 )
        {
          do
            v17 = *(_QWORD *)(v17 + 72);
          while ( ((*(_DWORD *)(v17 + 8) >> 21) & 0x3FFu) > v18 );
        }
        if ( v17 == v16 && (unsigned __int8)CmpNotifyTriggerCheck(v13, v8, a3) )
        {
          memset(v45, 0, 32);
          if ( !v12 )
          {
            *((_QWORD *)&v45[0] + 1) = v45;
            *(_QWORD *)&v45[0] = v45;
          }
          v19 = v45;
          if ( v12 )
            v19 = (_OWORD *)v12;
          ExAcquireFastMutexUnsafe(&CmpPostLock);
          v20 = (__int64 *)(v13 + 16);
          if ( (__int64 *)*v20 == v20 )
          {
            *(_DWORD *)(v13 + 48) |= 0x80000000;
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            v8 = a1;
            continue;
          }
          *(_DWORD *)(v13 + 48) &= ~0x80000000;
          while ( 1 )
          {
            do
            {
LABEL_22:
              v21 = *v20;
              if ( (__int64 *)*v20 == v20 )
              {
                ExReleaseFastMutexUnsafe(&CmpPostLock);
                v12 = a5;
                v8 = a1;
                if ( !a5 )
                  CmpSignalDeferredPosts(v19);
                goto LABEL_6;
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
                v40 = v21;
                do
                {
                  v41 = *(_QWORD *)(v40 + 32);
                  *(_DWORD *)(v41 + 24) &= ~0x10000u;
                  v40 = v41 - 32;
                }
                while ( v40 != v21 );
                v23 = *(_DWORD *)(v21 + 56) | 0x10000;
                *(_DWORD *)(v21 + 56) = v23;
              }
              if ( (_WORD)v23 != 1 )
              {
                v24 = *(_QWORD *)(v21 + 32);
                if ( v24 != v21 + 32 )
                {
                  v30 = *(_QWORD *)(v24 - 32);
                  v31 = v24 - 32;
                  if ( *(_QWORD *)(v30 + 8) != v31 )
                    goto LABEL_30;
                  v32 = *(_QWORD **)(v31 + 8);
                  if ( *v32 != v31 )
                    goto LABEL_30;
                  *v32 = v30;
                  *(_QWORD *)(v30 + 8) = v32;
                  CmpAddToDelayedDeref(v31, &P);
                }
                v25 = *(PVOID ***)(v21 + 48);
                if ( v25 )
                {
                  v26 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_30;
                  v25[1] = p_P;
                  *v25 = &P;
                  *v26 = v25;
                  p_P = (PVOID *)v25;
                  *(_QWORD *)(v21 + 48) = 0LL;
                }
              }
              v33 = (unsigned __int16)*(_DWORD *)(v21 + 56);
              if ( v33 == 4 )
                break;
              v38 = v33 - 1;
              if ( !v38 )
              {
                v42 = *(_QWORD *)(v21 + 64);
                *(_QWORD *)v21 = 0LL;
                *(_DWORD *)(v42 + 24) = 268;
                KeSetEvent(*(PRKEVENT *)(v21 + 64), 0, 0);
                goto LABEL_22;
              }
              v39 = v38 - 1;
              if ( !v39 )
              {
                KeInsertQueueApc(*(_QWORD *)(v21 + 64) + 16LL, 268LL, v21, 0);
                goto LABEL_22;
              }
            }
            while ( v39 != 1 );
            CmpFreeSubordinatePost(v21);
            v34 = *(_QWORD *)(v21 + 16);
            v35 = (_QWORD *)(v21 + 16);
            if ( *(_QWORD **)(v34 + 8) != v35 )
              goto LABEL_30;
            v36 = (_QWORD *)v35[1];
            if ( (_QWORD *)*v36 != v35 )
              goto LABEL_30;
            *v36 = v34;
            *(_QWORD *)(v34 + 8) = v36;
            v37 = (_QWORD *)*((_QWORD *)v19 + 1);
            if ( (_OWORD *)*v37 != v19 )
              goto LABEL_30;
            *v35 = v19;
            v35[1] = v37;
            *v37 = v35;
            *((_QWORD *)v19 + 1) = v35;
          }
        }
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v47);
  __writecr8(v47);
  CmUnlockHive(a2);
  while ( 1 )
  {
    v27 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v29 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
LABEL_30:
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v29 + 8) = &P;
    ObDereferenceObjectDeferDelete(v27[2]);
    ExFreePoolWithTag(v27, 0);
  }
  return result;
}
