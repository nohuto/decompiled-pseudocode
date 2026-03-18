/*
 * XREFs of ?GetBasicDisplayParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x14027FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140096368 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  unsigned __int8 *v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int8 *v5; // rcx

  v2 = 0LL;
  v3 = **((_QWORD **)this + 3);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = (unsigned __int8 *)(v3 + 24);
  if ( v4 >= 0x80 )
    v2 = v5;
  return EDIDV1_ObtainMonitorBasicDisplayParams(v2, a2);
}
