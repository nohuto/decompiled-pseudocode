/*
 * XREFs of ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x140052728
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CFlipManagerSignal::SetFlipManagerObject(CFlipManagerSignal *this, struct FlipManagerObject *a2)
{
  NTSTATUS result; // eax

  result = ObReferenceObjectByPointer(a2, 3u, g_pDxgkCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 6) = a2;
  return result;
}
