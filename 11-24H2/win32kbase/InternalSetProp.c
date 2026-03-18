/*
 * XREFs of InternalSetProp @ 0x14019CC3C
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x140156DE8 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealInternalSetProp @ 0x140168EA0 (RealInternalSetProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3)
{
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
  return RealInternalSetProp(*(struct _KTHREAD ***)(a1 + 144), a2, a3, 32769);
}
