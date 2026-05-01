/*
 * XREFs of ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802F1744
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801BC370 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x18021FC64 (--1-$CLocalSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppVie.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802F1374 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x1802F5D40 (--1CAppViewManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTContainer_PolicyLocalMem::DestroyMem(void *a1)
{
  return LocalFree(a1) == 0LL;
}
