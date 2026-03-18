/*
 * XREFs of ??1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ @ 0x140091684
 * Callers:
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x1400916EC (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140057EF4 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

void __fastcall USB4_POWERON_WORK_CONTEXT::~USB4_POWERON_WORK_CONTEXT(USB4_POWERON_WORK_CONTEXT *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 1);
}
