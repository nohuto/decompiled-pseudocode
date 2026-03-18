/*
 * XREFs of PspReturnQuota @ 0x1403C6990
 * Callers:
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     ObpFreeObject @ 0x14084AD10 (ObpFreeObject.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ObpChargeQuotaForObject @ 0x14089F240 (ObpChargeQuotaForObject.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x14091C6C0 (PsChargeSharedPoolQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x1409EC190 (PsReturnProcessPageFileQuota.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     PspUnlockQuotaExpansion @ 0x1403C6BB8 (PspUnlockQuotaExpansion.c)
 *     MmReturnPoolQuota @ 0x1403C6C30 (MmReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

signed __int64 __fastcall PspReturnQuota(__int64 *a1, ULONG_PTR a2, int a3, ULONG_PTR a4)
{
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 *v8; // r13
  ULONG_PTR v9; // r15
  volatile signed __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v16; // r9
  signed __int64 v17; // r8
  bool v18; // zf
  signed __int64 result; // rax
  KSPIN_LOCK *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v22; // rax
  __int64 v23; // [rsp+30h] [rbp-58h]
  int *v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v25; // [rsp+40h] [rbp-48h]
  __int64 *v26; // [rsp+48h] [rbp-40h]
  char v27; // [rsp+90h] [rbp+8h]
  KIRQL v28; // [rsp+A0h] [rbp+18h]

  v4 = a3;
  v6 = (__int64)a3 << 7;
  v8 = a1;
  v9 = a3;
  v27 = PspResourceFlags[8 * a3];
  v10 = (__int64 *)((char *)a1 + v6);
  _m_prefetchw((char *)a1 + v6);
  v11 = *(__int64 *)((char *)a1 + v6);
  v12 = *(__int64 *)((char *)a1 + v6 + 64);
  if ( *(__int64 *)((char *)a1 + v6 + 80) )
  {
    v13 = 56LL * a3;
    if ( v12 > v11 )
    {
      v14 = qword_140F05468[v13 / 8];
      if ( v12 - v11 > v14 )
      {
        if ( v14 > a4 )
          v14 = a4;
        if ( v12 == _InterlockedCompareExchange64(v10 + 8, v12 - v14, v12)
          && _InterlockedExchangeAdd64(v10 + 9, v14) + v14 > qword_140F05468[v13 / 8] )
        {
          v23 = _InterlockedExchange64(v10 + 9, 0LL);
          if ( v23 )
          {
            v24 = &PspQuotaExpansionDescriptors[v13 / 4];
            v20 = (KSPIN_LOCK *)&PspQuotaExpansionDescriptors[v13 / 4 + 4];
            v25 = v20;
            if ( PspQuotaExpansionDescriptors[v13 / 4] )
            {
              v28 = KeAcquireSpinLockRaiseToDpc(v20);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              v28 = 0;
              --CurrentThread->SpecialApcDisable;
              v22 = KeAbPreAcquire((__int64)v20, 0LL);
              v26 = v22;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v25, v22, (__int64)v25);
                v22 = v26;
              }
              if ( v22 )
                *((_BYTE *)v22 + 10) = 1;
            }
            if ( *((__int64 (__fastcall **)(_QWORD, _QWORD))v24 + 4) == MmReturnPoolQuota )
              MmReturnPoolQuota((unsigned int)v4, v23);
            else
              guard_dispatch_icall_no_overrides((unsigned int)v4, v23);
            PspUnlockQuotaExpansion(v24, v28);
          }
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      v16 = v11;
      if ( BugCheckParameter4 < v11 )
        v16 = BugCheckParameter4;
      v17 = 0LL;
      if ( BugCheckParameter4 < v11 )
        v17 = v11 - BugCheckParameter4;
      result = _InterlockedCompareExchange64(v10, v17, v11);
      v18 = v11 == result;
      v11 = result;
    }
    while ( !v18 );
    BugCheckParameter4 -= v16;
    if ( !BugCheckParameter4 )
      break;
    if ( v8 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v8 = &PspSystemQuotaBlock;
    v10 = (__int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v11 = *(__int64 *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v27 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 8 * v4 + 512), -(__int64)a4);
  }
  return result;
}
