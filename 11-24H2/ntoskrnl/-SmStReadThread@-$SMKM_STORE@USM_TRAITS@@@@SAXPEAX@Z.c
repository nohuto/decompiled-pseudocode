/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140230604 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140230DA0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402E1CAC (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14044EA6C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 Context; // r15
  LONG result; // eax
  NTSTATUS v7; // eax
  _SLIST_ENTRY **v8; // rbx
  KIRQL v9; // al
  __int64 *v10; // rdx
  _SLIST_ENTRY *v11; // rsi
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 7328LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 7576LL) + 3000LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v1 + 920;
    Object[1] = v1 + 917;
    do
    {
      while ( 1 )
      {
        v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v7 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v8 = (_SLIST_ENTRY **)(v1 + 923);
        while ( 1 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc(v1 + 925);
          v10 = *(__int64 **)(v3 + 64);
          if ( v10 == (__int64 *)v8 )
          {
            v11 = 0LL;
          }
          else
          {
            v11 = *v8;
            *v8 = (_SLIST_ENTRY *)((unsigned __int64)(*v8)->Next & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v11 == (_SLIST_ENTRY *)v10 )
            {
              *v8 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
            }
          }
          KeReleaseSpinLock(v1 + 925, v9);
          if ( !v11 )
            break;
          SmFpAllocate((PEX_SPIN_LOCK)v4, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue((__int64)v1, (__int64)v11, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete((__int64)v1, v11, Issue);
          if ( *(_QWORD *)(v4 + 112) == v3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v4) )
          {
            if ( !*(_BYTE *)(v4 + 94) )
            {
              _InterlockedExchange64((volatile __int64 *)(v4 + 112), 0LL);
              KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
            }
          }
          else
          {
            SmAcquireReleaseCharges(*(_QWORD *)(v4 + 32), (unsigned __int64)*(unsigned __int16 *)(v4 + 102) << 12, 1LL);
          }
        }
      }
    }
    while ( v7 != 1 );
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  }
  return result;
}
