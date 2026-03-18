/*
 * XREFs of ACPIInitializeDDBs @ 0x1400C4B28
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 *     ACPIInitializeDDB @ 0x1400C72F4 (ACPIInitializeDDB.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  int v0; // ebx
  __int64 *i; // rdi

  v0 = 0;
  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        22,
        38,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    for ( i = (__int64 *)AcpiDynamicDataBlockTableList; i != &AcpiDynamicDataBlockTableList; i = (__int64 *)*i )
    {
      v0 = ACPIInitializeDDB(i);
      if ( v0 < 0 )
        return (unsigned int)v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return (unsigned int)v0;
}
