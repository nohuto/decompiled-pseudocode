/*
 * XREFs of MNAllocPopup @ 0x140201FE0
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14020208C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x140202220 (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140264DF4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall MNAllocPopup(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (_DWORD)a1 || (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 67056) & 0x800000) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19856) + 32LL) )
      return 0LL;
    v2 = (void *)NSInstrumentation::CTypeIsolation<24576,96>::Allocate();
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(UserSessionState + 67056) |= 0x800000u;
    v2 = (void *)(W32GetUserSessionState(v6, v5) + 65832);
  }
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    if ( !(unsigned __int8)InitLookAsideRef<tagPOPUPMENU>(v2) )
    {
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v2);
      return 0LL;
    }
  }
  return v2;
}
