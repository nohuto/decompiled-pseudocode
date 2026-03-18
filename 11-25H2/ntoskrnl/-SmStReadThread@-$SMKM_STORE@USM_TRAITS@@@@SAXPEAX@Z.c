/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1403489C4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140348CEC (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140349AFC (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140456864 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  __int64 v3; // rbp
  __int64 v4; // rdi
  PSLIST_ENTRY Context; // r15
  LONG result; // eax
  NTSTATUS v7; // eax
  unsigned __int64 *v8; // rbx
  KIRQL v9; // al
  __int64 *v10; // rdx
  __int64 *v11; // rsi
  int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 7328LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 7576LL) + 3000LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 12);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)v1);
  *(_DWORD *)(a1 + 32) = Context == 0LL ? 0xC000009A : 0;
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
        v8 = v1 + 923;
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
            v11 = (__int64 *)*v8;
            *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v11 == v10 )
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
          SmFpAllocate((volatile LONG *)v4, 3, (__int64)(v1 + 916), 0LL, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue((__int64)v1, (__int64)v11, (__int64)Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete((__int64)v1, (__int64)v11, Issue);
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
            SmAcquireReleaseCharges(
              *(_QWORD *)(v4 + 32),
              (unsigned __int64)*(unsigned __int16 *)(v4 + 102) << 12,
              1,
              1LL);
          }
        }
      }
    }
    while ( v7 != 1 );
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  }
  return result;
}
