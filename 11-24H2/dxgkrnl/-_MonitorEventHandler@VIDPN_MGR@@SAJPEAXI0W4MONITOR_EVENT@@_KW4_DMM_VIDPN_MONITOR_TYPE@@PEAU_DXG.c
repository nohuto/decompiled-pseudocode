/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14025CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038E00 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E324 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403D51C4 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1403EEE8C (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        signed int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // r12
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  struct HDXGMONITOR__ *v15; // r8
  unsigned int v16; // edx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r10
  unsigned int v22; // r11d
  int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // r14
  unsigned int *NextTarget; // r14
  __int64 v32; // r13
  int v33; // eax
  unsigned int v34; // eax
  signed int v36; // [rsp+30h] [rbp-20h] BYREF
  __int64 v37; // [rsp+38h] [rbp-18h]
  unsigned __int64 v38; // [rsp+40h] [rbp-10h]
  int v39; // [rsp+48h] [rbp-8h]

  v7 = a5;
  v8 = 0;
  v9 = a6;
  v11 = a4;
  v36 = a4;
  v37 = a5;
  LOBYTE(v39) = 1;
  v38 = __PAIR64__(a2, a6);
  if ( (unsigned int)a4 > 3 && (unsigned int)(a4 - 7) > 5 )
  {
    WdLogSingleEntry1(2LL, a4);
    WdLogGlobalForLineNumber = 6129;
LABEL_54:
    v8 = -1073741811;
    goto LABEL_85;
  }
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6148;
    }
    if ( !*(_QWORD *)(a1 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6149;
    }
    v13 = *(_QWORD *)(a1 + 3120);
    v14 = *(_QWORD *)(v13 + 104);
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 6160;
      v8 = -1071774923;
      goto LABEL_85;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, *(_QWORD *)(v13 + 104));
    if ( (int)v11 > 8 )
    {
      if ( (_DWORD)v11 == 9 )
      {
        if ( a2 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6371;
        }
        if ( !*(_DWORD *)(v14 + 536) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 3120),
            a2,
            9LL,
            v7,
            0,
            a7,
            v36,
            v37,
            v38,
            v39);
        goto LABEL_84;
      }
      if ( (_DWORD)v11 == 10 )
      {
        if ( a2 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6389;
        }
        v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
          *(_QWORD *)(a1 + 3120),
          a2,
          (unsigned int)v11,
          v7,
          1,
          a7,
          v36,
          v37,
          v38,
          v39);
LABEL_50:
        DxgkInvalidateQdcCache();
LABEL_84:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
        goto LABEL_85;
      }
      if ( (_DWORD)v11 != 11 )
      {
        if ( (_DWORD)v11 == 12 )
        {
          if ( a2 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6424;
          }
          v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 3120),
            a2,
            (unsigned int)v11,
            v7,
            0,
            a7,
            v36,
            v37,
            v38,
            v39);
          goto LABEL_84;
        }
LABEL_70:
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 6442;
        goto LABEL_53;
      }
      if ( a2 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6413;
      }
      v34 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
    }
    else
    {
      if ( (_DWORD)v11 != 8 )
      {
        if ( !(_DWORD)v11 )
          goto LABEL_19;
        if ( (_DWORD)v11 == 1 )
        {
          v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, 1);
          if ( !*(_DWORD *)(v14 + 536) )
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 3120),
              a2,
              (unsigned int)v11,
              v7,
              1,
              a7,
              v36,
              v37,
              v38,
              v39);
          goto LABEL_84;
        }
        if ( (_DWORD)v11 != 2 )
        {
          if ( (_DWORD)v11 != 3 )
          {
            if ( (_DWORD)v11 == 7 )
            {
LABEL_19:
              v16 = a2;
              if ( a2 == -1 )
              {
                if ( (_DWORD)v11 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6186;
                }
                v17 = (_QWORD *)(*(_QWORD *)(v14 + 120) + 24LL);
                if ( (_QWORD *)*v17 == v17 || *v17 == 8LL || (v16 = *(_DWORD *)(*v17 - 8LL + 24), v16 == -1) )
                {
                  WdLogSingleEntry1(2LL, v14);
                  WdLogGlobalForLineNumber = 6194;
                  DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
                  v8 = -1071774971;
                  goto LABEL_85;
                }
              }
              v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, v16, v15, v11);
              if ( !*(_DWORD *)(v14 + 536)
                && !(_DWORD)v11
                && !*(_BYTE *)(a1 + 3017)
                && (unsigned __int64)(v7 - 1) <= 4
                && v9 - 1 <= 2 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
                v20 = *(_QWORD *)(v14 + 120);
                v21 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v20, a2);
                if ( v21 )
                {
                  v23 = *(_DWORD *)(v14 + 544);
                  v24 = *(_DWORD *)(v14 + 540);
                  v25 = MEMORY[0xFFFFF78000000320];
                  *(_QWORD *)(v21 + 8LL * (*(_DWORD *)(v21 + 392) & 0x1F) + 136) = MEMORY[0xFFFFF78000000320];
                  v26 = *(_DWORD *)(v21 + 392) + 1;
                  *(_DWORD *)(v21 + 392) = v26;
                  if ( v23 )
                  {
                    v27 = v24;
                    v28 = 0LL;
                    v29 = v25 - v24;
                    if ( v25 > v27 )
                      v28 = v29;
                    if ( *(_QWORD *)(v21 + 8LL * (((_BYTE)v26 - (_BYTE)v23) & 0x1F) + 136) > v28
                      && *(_BYTE *)(v21 + 396) == (_BYTE)v22 )
                    {
                      *(_BYTE *)(v21 + 396) = 1;
                      v22 = 6;
                      v7 = 0LL;
                    }
                  }
                }
                ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                  *(_QWORD *)(a1 + 3120),
                  a2,
                  v22,
                  v7,
                  1,
                  a7,
                  v36,
                  v37,
                  v38,
                  v39);
                LOBYTE(v39) = 0;
                if ( v20 )
                  ReferenceCounted::Release((ReferenceCounted *)(v20 + 64));
              }
              goto LABEL_50;
            }
            goto LABEL_70;
          }
          if ( a2 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6285;
          }
          if ( *(_DWORD *)(v14 + 536) )
            goto LABEL_84;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
          v18 = *(_QWORD **)(v14 + 120);
          v19 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v18, a2);
          if ( v19 && *(_QWORD *)(v19 + 112) )
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 3120),
              a2,
              (unsigned int)v11,
              v7,
              0,
              a7,
              v36,
              v37,
              v38,
              v39);
LABEL_32:
          if ( v18 )
            ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
          goto LABEL_84;
        }
      }
      if ( (unsigned int)v7 > 3 )
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 6321;
LABEL_53:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
        goto LABEL_54;
      }
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 3120) + 16LL) + 3004LL) < 1105 && a2 == -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
        v18 = *(_QWORD **)(v14 + 120);
        v30 = (_QWORD *)v18[3];
        if ( v30 != v18 + 3 )
        {
          NextTarget = (unsigned int *)(v30 - 1);
          if ( NextTarget )
          {
            v32 = a7;
            do
            {
              v33 = VIDPN_MGR::PowerOnOffVidPnTarget(v14, 0xFFFFFFFFLL, (unsigned int)v11, (unsigned int)v7, v32);
              v8 = v33;
              if ( v33 < 0 )
              {
                WdLogSingleEntry2(2LL, NextTarget[6], v33);
                WdLogGlobalForLineNumber = 6359;
              }
              NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                             (DMMVIDEOPRESENTTARGETSET *)v18,
                                             (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
            }
            while ( NextTarget );
          }
        }
        goto LABEL_32;
      }
      v34 = VIDPN_MGR::PowerOnOffVidPnTarget(v14, a2, (unsigned int)v11, (unsigned int)v7, a7);
    }
    v8 = v34;
    goto LABEL_84;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6142;
  v8 = -1071775742;
LABEL_85:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v36);
  return v8;
}
