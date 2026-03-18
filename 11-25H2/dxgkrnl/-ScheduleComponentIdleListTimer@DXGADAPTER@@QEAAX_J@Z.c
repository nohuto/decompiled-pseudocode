/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x14003E480
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x140036D38 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 3661) )
  {
    *((_BYTE *)this + 3661) = 1;
    KeSetTimer((PKTIMER)this + 59, (LARGE_INTEGER)-a2, (PKDPC)this + 60);
  }
}
