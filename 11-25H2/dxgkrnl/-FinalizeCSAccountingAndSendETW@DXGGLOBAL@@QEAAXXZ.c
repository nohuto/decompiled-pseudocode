/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B6C0C
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403F72A0 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1401B6AFC (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ??1PDOBaseEnum@@QEAA@XZ @ 0x1401B6BD8 (--1PDOBaseEnum@@QEAA@XZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1401C5EF0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403F7160 (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-24h]
  unsigned __int64 *v4; // [rsp+28h] [rbp-20h]
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  PDOBaseEnum::PDOBaseEnum((PDOBaseEnum *)v2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2064), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 2232));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 2232),
    *((_QWORD *)this + 264),
    v3,
    v4);
  *((_DWORD *)this + 514) = 0;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  PDOBaseEnum::~PDOBaseEnum((PDOBaseEnum *)v2);
}
