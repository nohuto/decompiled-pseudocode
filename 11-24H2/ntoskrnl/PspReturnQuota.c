/*
 * XREFs of PspReturnQuota @ 0x14027CC50
 * Callers:
 *     PsReturnProcessQuota @ 0x14046CF18 (PsReturnProcessQuota.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     ObpChargeQuotaForObject @ 0x14096DFE0 (ObpChargeQuotaForObject.c)
 *     PsChargeSharedPoolQuota @ 0x1409779B0 (PsChargeSharedPoolQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x1409DFFA0 (PsReturnProcessPageFileQuota.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x14027CE78 (PspUnlockQuotaExpansion.c)
 *     MmReturnPoolQuota @ 0x14027CEF0 (MmReturnPoolQuota.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-58h]
  int *v26; // [rsp+38h] [rbp-50h]
  volatile signed __int32 *v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h]
  char v29; // [rsp+90h] [rbp+8h]
  KIRQL v30; // [rsp+A0h] [rbp+18h]

  v4 = a3;
  v6 = (__int64)a3 << 7;
  v8 = a1;
  v9 = a3;
  v29 = PspResourceFlags[8 * a3];
  v10 = (__int64 *)((char *)a1 + v6);
  _m_prefetchw((char *)a1 + v6);
  v11 = *(__int64 *)((char *)a1 + v6);
  v12 = *(__int64 *)((char *)a1 + v6 + 64);
  if ( *(__int64 *)((char *)a1 + v6 + 80) )
  {
    v13 = 56LL * a3;
    if ( v12 > v11 )
    {
      v14 = qword_140F05B28[v13 / 8];
      if ( v12 - v11 > v14 )
      {
        if ( v14 > a4 )
          v14 = a4;
        if ( v12 == _InterlockedCompareExchange64(v10 + 8, v12 - v14, v12)
          && _InterlockedExchangeAdd64(v10 + 9, v14) + v14 > qword_140F05B28[v13 / 8] )
        {
          v25 = _InterlockedExchange64(v10 + 9, 0LL);
          if ( v25 )
          {
            v26 = &PspQuotaExpansionDescriptors[v13 / 4];
            v20 = (KSPIN_LOCK *)&PspQuotaExpansionDescriptors[v13 / 4 + 4];
            v27 = (volatile signed __int32 *)v20;
            if ( PspQuotaExpansionDescriptors[v13 / 4] )
            {
              v30 = KeAcquireSpinLockRaiseToDpc(v20);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              v30 = 0;
              --CurrentThread->SpecialApcDisable;
              v24 = KeAbPreAcquire(v20, 0LL, 0LL);
              v28 = v24;
              if ( _interlockedbittestandset64(v27, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v27, v24, v27);
                v24 = v28;
              }
              if ( v24 )
                *(_BYTE *)(v24 + 10) = 1;
            }
            if ( *((__int64 (__fastcall **)(_QWORD, _QWORD))v26 + 4) == MmReturnPoolQuota )
              MmReturnPoolQuota((unsigned int)v4, v25);
            else
              guard_dispatch_icall_no_overrides((unsigned int)v4, v25, v21, v22);
            PspUnlockQuotaExpansion(v26, v30);
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
    if ( (v29 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 8 * v4 + 512), -(__int64)a4);
  }
  return result;
}
