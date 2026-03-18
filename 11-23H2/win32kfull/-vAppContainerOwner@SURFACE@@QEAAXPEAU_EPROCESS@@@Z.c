/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0134C60
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3, __int64 a4)
{
  struct _EPROCESS *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = a2;
  if ( !a2 || (unsigned int)UserIsProcessImmersiveAppContainer(a2) )
  {
    GreAcquireHmgrSemaphore(this, a2, a3, a4);
    if ( v4 )
    {
      v7 = HmgPentryFromPobj(this);
      *(_BYTE *)(v7 + 15) |= 0x80u;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = 0LL;
    GreAcquireHmgrSemaphore(this, a2, a3, a4);
  }
  v6 = HmgPentryFromPobj(this);
  *(_BYTE *)(v6 + 15) &= ~0x80u;
LABEL_4:
  *((_QWORD *)this + 80) = v4;
  GreReleaseHmgrSemaphore();
}
