/*
 * XREFs of ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AD36C
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1402955E0 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x140290A00 (--0LeaveEnterCritShared@@QEAA@XZ.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD138 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     DwmSyncSignalGhost @ 0x1403243D0 (DwmSyncSignalGhost.c)
 */

HWND __fastcall xxxFrostCrashedWindow(PETHREAD **a1, HWND a2)
{
  PETHREAD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  const struct tagWND *v11; // r8
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    PsGetThreadProcessId(*a1[2]);
    PsGetThreadId(*a1[2]);
    v3 = *a1;
    v6 = (void *)ReferenceDwmApiPort(v5, v4);
    LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v13, v7);
    LODWORD(v6) = DwmSyncSignalGhost(v6);
    EnterSharedCrit(0LL, v13);
    LOBYTE(v8) = 1;
    v9 = HMValidateHandleNoSecure((__int64)v3, v8);
    if ( (int)v6 >= 0 && v9 && !(unsigned int)IsWindowBeingDestroyed(v9) )
      GetFrostProp(v11, v10);
  }
  return 0LL;
}
