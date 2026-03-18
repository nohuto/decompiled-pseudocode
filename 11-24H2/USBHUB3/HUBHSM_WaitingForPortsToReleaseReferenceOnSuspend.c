/*
 * XREFs of HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x14000A6C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_DWORD *)(v1 + 2372);
  if ( v2 )
  {
    v3 = v1 + 2376;
    *(_DWORD *)(v1 + 2348) = v2;
    v4 = *(_QWORD *)(v1 + 2376);
    v5 = v4 - 248;
    if ( v1 + 2376 != v4 )
    {
      do
      {
        _InterlockedOr((volatile signed __int32 *)(v5 + 264), 4u);
        (*(void (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, 3042LL);
        v6 = *(_QWORD *)(v5 + 248);
        v5 = v6 - 248;
      }
      while ( v3 != v6 );
    }
  }
  else
  {
    HUBSM_AddEvent(v1 + 1280, 2058LL);
  }
  return 1000LL;
}
