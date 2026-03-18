/*
 * XREFs of ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401CDFE8
 * Callers:
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CE8B0 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223770 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CDDC8 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x14036B980 (DpiGetPnpRegistryKeyName.c)
 */

void __fastcall CDriverStoreCopy::InitializeSystem32Links(CDriverStoreCopy *this, struct DXGADAPTER *a2)
{
  int PnpRegistryKeyName; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct _UNICODE_STRING *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 3LL, &v8);
  if ( PnpRegistryKeyName >= 0 )
  {
    v5 = CDriverStoreCopy::EnumSingleDriverKey(this, v8);
    if ( v5 >= 0 )
    {
      v6 = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 2LL, &v8);
      if ( v6 >= 0 )
      {
        v7 = CDriverStoreCopy::EnumSingleDriverKey(this, v8);
        if ( v7 < 0 )
        {
          WdLogSingleEntry1(3LL, v7);
          WdLogGlobalForLineNumber = 1143;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v6);
        WdLogGlobalForLineNumber = 1137;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 1130;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, PnpRegistryKeyName);
    WdLogGlobalForLineNumber = 1124;
  }
}
