/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403C6A70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1403C6D30 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403C6F88 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v19; // r15
  int v21; // r15d
  int v22; // r15d
  int v23; // r15d
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  void *v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[144]; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2431;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pContext != NULL", 2431LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v24[3] = a1;
      v24[4] = *((int *)a1 + 104);
      v24[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 2449;
    }
    else
    {
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    return v2;
  }
  else
  {
    if ( *((_QWORD *)a1 + 390) )
    {
      if ( a2[25] )
      {
        v25 = -1;
        EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v25);
        if ( EmergentSimulatedTarget < 0 )
        {
          WdLogSingleEntry3(3LL, *((int *)a1 + 104), *((unsigned int *)a1 + 103), EmergentSimulatedTarget);
          WdLogGlobalForLineNumber = 2473;
        }
        else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v25) >= 0
               && (*((_DWORD *)a1 + 111) & 1) != 0 )
        {
          a2[25] = 0;
        }
      }
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 390) + 104LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v11);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
      v16 = *(_QWORD **)(v11 + 120);
      v17 = (_QWORD *)v16[3];
      if ( v17 == v16 + 3 )
        NextTarget = 0LL;
      else
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v17 - 1);
      while ( NextTarget )
      {
        v19 = *((_QWORD *)NextTarget + 14);
        if ( v19 && !*((_DWORD *)NextTarget + 23) )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v19;
          WdLogGlobalForLineNumber = 2504;
          v26 = retaddr;
          v27 = 0LL;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v26);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
          v27 = v19;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v26);
          v21 = *(_DWORD *)(v19 + 280);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
          ++*(_DWORD *)a2;
          v22 = v21 - 1;
          if ( v22 && (v23 = v22 - 1) != 0 )
          {
            if ( v23 == 3 )
              ++*((_DWORD *)a2 + 2);
          }
          else
          {
            ++*((_DWORD *)a2 + 1);
          }
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v16, NextTarget);
      }
      if ( v16 )
        ReferenceCounted::Release((ReferenceCounted *)(v16 + 8));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    return 0LL;
  }
}
