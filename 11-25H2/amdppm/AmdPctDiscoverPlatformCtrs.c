/*
 * XREFs of AmdPctDiscoverPlatformCtrs @ 0x140022920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     AmdPctCheckCounterDependency @ 0x1400226D0 (AmdPctCheckCounterDependency.c)
 *     AmdPctDiscoverCounters @ 0x1400227E4 (AmdPctDiscoverCounters.c)
 */

unsigned __int64 __fastcall AmdPctDiscoverPlatformCtrs(__int64 a1)
{
  bool v1; // zf
  char v3; // si
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 80) == 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( v1 )
  {
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)(a1 + 1240);
  v5 = 0LL;
  if ( v4 && !*(_QWORD *)(v4 + 32) )
    v5 = AmdPctDiscoverCounters(a1, (volatile signed __int64 *)(v4 + 32), 2u, 3u);
  v6 = *(_QWORD *)(a1 + 1080);
  if ( v6 && !*(_QWORD *)(v6 + 312) && v5 )
  {
    v5 |= AmdPctDiscoverCounters(a1, (volatile signed __int64 *)(v6 + 312), 0, 2u);
    *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 336LL) = 1;
    *(_DWORD *)(a1 + 1252) = 3;
  }
  v7 = AmdPctCheckCounterDependency(a1, v5);
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v7;
}
