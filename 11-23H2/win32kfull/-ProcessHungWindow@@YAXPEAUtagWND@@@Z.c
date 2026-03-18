/*
 * XREFs of ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F33B8
 * Callers:
 *     NtUserQueryWindow @ 0x1C006E2B0 (NtUserQueryWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleHungWindow @ 0x1C01555E0 (EditionHandleHungWindow.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3588 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F371C (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall ProcessHungWindow(struct tagWND *a1)
{
  __int64 v2; // rdx
  struct tagWND *v3; // rbx
  __int64 v4; // r8
  const struct tagTHREADINFO **v5; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  v3 = ShouldProcessHungWindow(a1);
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = (const struct tagTHREADINFO **)*((_QWORD *)v3 + 15);
      if ( !v5 || !IsHungWindow(v5) )
        break;
      v3 = (struct tagWND *)*((_QWORD *)v3 + 15);
    }
    _GhostOwnerWindowAndOwnees(v3);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6, v2, v4);
}
