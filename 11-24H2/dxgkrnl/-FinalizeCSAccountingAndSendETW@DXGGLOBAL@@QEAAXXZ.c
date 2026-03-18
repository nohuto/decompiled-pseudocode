/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B91BC
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403F1090 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1401B90AC (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ??1PDOBaseEnum@@QEAA@XZ @ 0x1401B9188 (--1PDOBaseEnum@@QEAA@XZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1401CB140 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403F0F5C (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-24h]
  unsigned __int64 *v4; // [rsp+28h] [rbp-20h]
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  PDOBaseEnum::PDOBaseEnum((PDOBaseEnum *)v2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2096), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 2264));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 2264),
    *((_QWORD *)this + 268),
    v3,
    v4);
  *((_DWORD *)this + 522) = 0;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  PDOBaseEnum::~PDOBaseEnum((PDOBaseEnum *)v2);
}
