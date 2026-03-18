/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14024740C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14027B074 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14027B810 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140459CBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rdi
  PSLIST_ENTRY Context; // r15
  LONG result; // eax
  NTSTATUS v9; // eax
  unsigned __int64 *v10; // rbx
  KIRQL v11; // al
  __int64 *v12; // rdx
  __int64 *v13; // rsi
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(KSPIN_LOCK **)a1;
  v5 = *(_QWORD *)a1 + 7328LL;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 7576LL) + 3000LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 12, a3);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)v3);
  *(_DWORD *)(a1 + 32) = Context == 0LL ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v3 + 920;
    Object[1] = v3 + 917;
    do
    {
      while ( 1 )
      {
        v9 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v9 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v10 = v3 + 923;
        while ( 1 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(v3 + 925);
          v12 = *(__int64 **)(v5 + 64);
          if ( v12 == (__int64 *)v10 )
          {
            v13 = 0LL;
          }
          else
          {
            v13 = (__int64 *)*v10;
            *v10 = *(_QWORD *)*v10 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v13 == v12 )
            {
              *v10 = 0LL;
              *(_QWORD *)(v5 + 64) = v5 + 56;
            }
            else
            {
              *v12 = *v12 & 7 | (8 * ((unsigned __int64)*v12 >> 3) - 8);
            }
          }
          KeReleaseSpinLock(v3 + 925, v11);
          if ( !v13 )
            break;
          SmFpAllocate((PEX_SPIN_LOCK)v6, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v3, v13, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v3, v13, Issue);
          if ( *(_QWORD *)(v6 + 112) == v5 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v6) )
          {
            if ( !*(_BYTE *)(v6 + 94) )
            {
              _InterlockedExchange64((volatile __int64 *)(v6 + 112), 0LL);
              KeSetEvent((PRKEVENT)(v6 + 8), 0, 0);
            }
          }
          else
          {
            SmAcquireReleaseCharges(*(_QWORD *)(v6 + 32), (unsigned __int64)*(unsigned __int16 *)(v6 + 102) << 12, 1, 1);
          }
        }
      }
    }
    while ( v9 != 1 );
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v3, Context);
  }
  return result;
}
