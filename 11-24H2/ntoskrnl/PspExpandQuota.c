/*
 * XREFs of PspExpandQuota @ 0x14027BC98
 * Callers:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 *     PsChargeProcessPoolQuota @ 0x1403E1A90 (PsChargeProcessPoolQuota.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14027BDAC (PspLockQuotaExpansion.c)
 *     MmRaisePoolQuota @ 0x14027BE20 (MmRaisePoolQuota.c)
 *     PspUnlockQuotaExpansion @ 0x14027CE78 (PspUnlockQuotaExpansion.c)
 *     PspReleaseReturnedQuota @ 0x1405E27C8 (PspReleaseReturnedQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandQuota(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int *v7; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  signed __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  char v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v19 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v19);
  v11 = *(_QWORD *)(a2 + 64);
  if ( a3 + a4 <= v11 )
  {
    LOBYTE(v10) = v19;
    PspUnlockQuotaExpansion(v7, v10);
    *a5 = v11;
    return 1;
  }
  v12 = *(_QWORD *)(a2 + 64);
  if ( *((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v7 + 3) == MmRaisePoolQuota )
    v13 = MmRaisePoolQuota(a1, v12, 0LL, &v20);
  else
    v13 = guard_dispatch_icall_no_overrides(a1, v12, 0LL, &v20);
  if ( v13 || PspReleaseReturnedQuota(a1, v7) && (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v11, 0LL, &v20) )
  {
    v15 = v20 - v11;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), v20 - v11);
    LOBYTE(v14) = v19;
    v17 = v15 + v16;
    PspUnlockQuotaExpansion(v7, v14);
    *a5 = v17;
    return 1;
  }
  LOBYTE(v14) = v19;
  PspUnlockQuotaExpansion(v7, v14);
  *a5 = v11;
  return 0;
}
