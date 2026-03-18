/*
 * XREFs of ACPIBuildMissingChildren @ 0x140040DF0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1400165E0 (OSNotifyCreateDevice.c)
 *     AMLIIterateSiblingsNext @ 0x140040EE4 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x140040FA0 (AMLIGetFirstChild.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     OSNotifyCreateThermalZone @ 0x140052368 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreateProcessor @ 0x140063D1C (OSNotifyCreateProcessor.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  __int64 *i; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int ThermalZone; // eax
  int v8; // edx

  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
  {
    for ( i = (__int64 *)AMLIGetFirstChild(*(_QWORD *)(a1 + 760)); ; i = (__int64 *)AMLIIterateSiblingsNext(v2) )
    {
      v2 = (__int64)i;
      if ( !i )
        return 0LL;
      v3 = *i;
      if ( !*(_QWORD *)(v3 + 104) )
      {
        v4 = *(unsigned __int16 *)(v3 + 66) - 6;
        if ( v4 )
        {
          v5 = v4 - 4;
          if ( v5 )
          {
            v6 = v5 - 2;
            if ( v6 )
            {
              if ( v6 != 1 )
                continue;
              ThermalZone = OSNotifyCreateThermalZone(v2, 0x20000000000LL);
            }
            else
            {
              ThermalZone = OSNotifyCreateProcessor(v2, 0x20000000000LL);
            }
          }
          else
          {
            ThermalZone = OSNotifyCreateOperationRegion(v2);
          }
        }
        else
        {
          ThermalZone = OSNotifyCreateDevice(v2, 0x20000000000uLL);
        }
        if ( ThermalZone < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            22,
            24,
            (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
            ThermalZone,
            v2);
        }
      }
    }
  }
  return 0LL;
}
