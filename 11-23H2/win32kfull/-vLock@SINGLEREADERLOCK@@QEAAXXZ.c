/*
 * XREFs of ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027F634
 * Callers:
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C006A498 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C006A944 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F5020 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0279B38 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SINGLEREADERLOCK::vLock(SINGLEREADERLOCK *this)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(void **)this;
  if ( v2 )
  {
    KeWaitForSingleObject(v2, UserRequest, 0, 0, 0LL);
    CurrentThread = KeGetCurrentThread();
    ++*((_DWORD *)this + 4);
    *((_QWORD *)this + 1) = CurrentThread;
  }
}
