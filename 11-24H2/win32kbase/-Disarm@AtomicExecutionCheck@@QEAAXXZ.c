/*
 * XREFs of ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400A0E38 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PostEvent @ 0x1402130E8 (PostEvent.c)
 *     PostThreadEvent @ 0x140213208 (PostThreadEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall AtomicExecutionCheck::Disarm(AtomicExecutionCheck *this)
{
  if ( *(_BYTE *)this )
  {
    --*(_DWORD *)(*((_QWORD *)this + 1) + 28LL);
    *((_QWORD *)this + 1) = 0LL;
    *(_BYTE *)this = 0;
  }
}
