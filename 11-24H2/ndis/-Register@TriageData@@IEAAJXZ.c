/*
 * XREFs of ?Register@TriageData@@IEAAJXZ @ 0x1400E4B78
 * Callers:
 *     ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140092030 (-Make@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140092274 (-Make@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140097F34 (-Make@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU-$TriageDataColle.c)
 *     ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x1400988D0 (-Make@-$ObjectTriageData@X@@SAJPEAXPEBU-$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140099D84 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400B792C (-Make@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU-$Triag.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400B7B70 (-Make@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU-$TriageDataC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall TriageData::Register(TriageData *this)
{
  int v3; // edx

  if ( this->m_registered )
    return 3221227288LL;
  if ( KeRegisterBugCheckReasonCallback(
         &this->m_callbackRecord,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)TriageData::BugcheckReasonCallbackRoutine,
         KbCallbackTriageDumpData,
         TriageData::s_componentName) )
  {
    this->m_registered = 1;
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        1,
        10,
        (struct _GUID *)&WPP_8ca2e1ba93e737954baa53d4a7df69b8_Traceguids);
    }
    return 3221225473LL;
  }
}
