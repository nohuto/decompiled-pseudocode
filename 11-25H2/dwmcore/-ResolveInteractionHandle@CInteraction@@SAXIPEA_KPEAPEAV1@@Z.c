/*
 * XREFs of ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801AF804
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1801B0860 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x1802954EC (-BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z.c)
 */

void __fastcall CInteraction::ResolveInteractionHandle(unsigned int a1, unsigned __int64 *a2, struct CInteraction **a3)
{
  struct CInteraction *v6; // rbx
  struct CInteraction::HANDLE_ENTRY *Entry; // rax
  unsigned __int64 v8; // rdx
  struct CInteraction *v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v9 = 0LL;
    AcquireSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(a1);
    if ( Entry )
    {
      Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)&v9, *((_QWORD *)Entry + 1));
      v6 = v9;
      if ( v9 )
      {
        if ( a2 )
        {
          v8 = *a2;
          if ( *a2 )
          {
            if ( v8 < *((_QWORD *)v9 + 214) )
            {
              InputTraceLogging::GestureTargeting::BlockInteractionResolution(v9, v8);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
              v6 = v9;
            }
          }
        }
      }
    }
    *a3 = v6;
    ReleaseSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
  }
}
