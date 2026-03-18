/*
 * XREFs of rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01A81EC
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2CF0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00C9CF4 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01AFF50 (RIMCmAddContactSuppressionReasons.c)
 */

void __fastcall rimDisplayOffPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  char *v4; // rbx
  int v5; // esi
  PERESOURCE *v6; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-39h]
  char v8; // [rsp+28h] [rbp-31h] BYREF
  PVOID *v9; // [rsp+30h] [rbp-29h]
  char v10; // [rsp+38h] [rbp-21h]
  __int64 v11; // [rsp+40h] [rbp-19h]
  char v12; // [rsp+48h] [rbp-11h]
  _DWORD v13[16]; // [rsp+50h] [rbp-9h] BYREF

  memset(v13, 0, sizeof(v13));
  DomainLockRef = GetDomainLockRef(13);
  v4 = &v8;
  v8 = 0;
  v9 = &gDomainDummyLock;
  v11 = 0LL;
  v5 = 0;
  v12 = 0;
  v10 = 0;
  do
  {
    v6 = (PERESOURCE *)*((_QWORD *)v4 - 1);
    if ( v6 )
    {
      if ( *v4 )
        tagDomLock::LockExclusive(v6);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v6);
    }
    ++v5;
    v4 += 16;
  }
  while ( !v5 );
  v12 = 1;
  ApiSetGetPowerTransitionsState(v13);
  if ( !v13[0] && (*(_DWORD *)(a2 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  if ( v12 )
  {
    if ( DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
}
