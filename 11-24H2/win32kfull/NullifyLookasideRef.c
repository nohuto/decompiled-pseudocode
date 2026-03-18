/*
 * XREFs of NullifyLookasideRef @ 0x140264DB0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140264D88 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 * Callees:
 *     <none>
 */

void __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v2; // zf
  void *CurrentWin32kStackRefLookAside; // rax

  *(_QWORD *)a1 = 0LL;
  v2 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v2 )
  {
    CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
    Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, a1);
  }
}
