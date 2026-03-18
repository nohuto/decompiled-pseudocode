/*
 * XREFs of ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1401489D8
 * Callers:
 *     EditionHandleHungWindow @ 0x1401489A0 (EditionHandleHungWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x140244680 (NtUserQueryWindow.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x140148B98 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140148C3C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ProcessHungWindow(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  const struct tagWND *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v4);
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (const struct tagWND *)*((_QWORD *)v2 + 15);
      if ( !v3 || !IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    _GhostOwnerWindowAndOwnees(v2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
}
