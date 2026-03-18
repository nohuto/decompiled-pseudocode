/*
 * XREFs of ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x14032BC30
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14004EA34 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1400DEEBC (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
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
