/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x140045A14 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  char ShouldDelayRequest; // bp
  unsigned int v7; // esi
  char v8; // r8
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x200000uLL);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v3[1] = v3;
  *v3 = v3;
  ShouldDelayRequest = ACPIBuildProcessDelayedDependencyShouldDelayRequest((__int64)v3);
  v7 = ShouldDelayRequest != 0 ? 0x103 : 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v8 = 0;
  v9 = byte_140075488;
  v10 = byte_140075488;
  if ( v1 )
  {
    v11 = *(_QWORD *)(v1 + 8);
    v8 = v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x32u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v7,
      v8,
      v9,
      v10);
  if ( !ShouldDelayRequest )
    ACPIBuildCompleteGeneric(*(_QWORD *)(a1 + 56), v7, 0LL, a1);
  return v7;
}
