/*
 * XREFs of ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C9620
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A3100 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140033390 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401C8D58 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CDriverStoreCopy::SetRootDirectory(
        CDriverStoreCopy *this,
        struct DXGADAPTER *a2,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a3)
{
  int v6; // eax
  __int64 v7; // rdx

  v6 = RtlStringCbCopyW((char *)this + 24, 0x208uLL, (char *)a3 + 60);
  *((_DWORD *)a3 + 4) = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)a3 + 4) = RtlStringCbCatW((unsigned __int16 *)this + 12, v7, (char *)L"\\");
    CDriverStoreCopy::InitializeSystem32Links(this, a2);
  }
}
