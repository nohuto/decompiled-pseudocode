/*
 * XREFs of ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401F3FA0
 * Callers:
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224090 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromHostId(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  struct _KTHREAD *i; // r9
  unsigned int v7; // ebx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v9);
  for ( i = *this; i != (struct _KTHREAD *)this; i = *(struct _KTHREAD **)i )
  {
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a2
      && *((_DWORD *)i + 5) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)i + 6) == *((_DWORD *)a2 + 2) )
    {
      v7 = 0;
      *(_OWORD *)a3 = *(_OWORD *)((char *)i + 28);
      goto LABEL_9;
    }
  }
  v7 = -1073741275;
LABEL_9:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return v7;
}
