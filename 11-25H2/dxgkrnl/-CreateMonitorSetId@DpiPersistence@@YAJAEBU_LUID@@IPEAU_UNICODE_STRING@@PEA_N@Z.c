/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1403687B0
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140368638 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036FB0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400587C8 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402E9830 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x140366E60 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  DXGSESSIONDATA *SessionData; // r14
  unsigned int CurrentProcessSessionId; // eax
  const wchar_t *v12; // r9
  __int64 v13; // rax
  DXGPROCESS *Current; // rax
  __int64 v16; // rdi
  DXGSESSIONDATA **SessionViewFromSource; // r15
  _WORD *v18; // r13
  unsigned __int16 v19; // di
  unsigned __int16 v20; // si
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v22; // r13
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rax
  VIDPN_MGR *v27; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v29; // rdi
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  const wchar_t *v38; // rbx
  int v39; // eax
  __int16 v40; // di
  _QWORD *v41; // rax
  __int64 psz; // [rsp+28h] [rbp-D8h]
  __int64 psza; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v45[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46[3]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v48[2]; // [rsp+68h] [rbp-98h]
  unsigned int v49[2]; // [rsp+70h] [rbp-90h] BYREF
  STRSAFE_PCNZWCH v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  _BYTE v53[144]; // [rsp+90h] [rbp-70h] BYREF

  v51 = a3;
  LODWORD(v4) = 0;
  v5 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 213;
    LODWORD(v13) = PsGetCurrentProcessSessionId();
    v12 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    psz = -1073741811LL;
    v13 = (unsigned int)v13;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, v13, psz, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v9);
  v16 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    v12 = L"Failed to get current DXGPROCESS";
    v13 = 224LL;
    WdLogGlobalForLineNumber = 224;
    psz = 0LL;
    goto LABEL_3;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225506LL;
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, this, v5);
    if ( !SessionViewFromSource )
    {
      WdLogSingleEntry3(2LL, v5, this->HighPart, this->LowPart);
      LowPart = this->LowPart;
      psza = this->HighPart;
      WdLogGlobalForLineNumber = 250;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.",
        v5,
        psza,
        LowPart,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( a4 )
      LOBYTE(a4->Length) = 0;
    v18 = (_WORD *)v51;
    if ( (*(_BYTE *)(v51 + 2) & 1) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 261;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"io_MonitorId->MaximumLength % sizeof(WCHAR) == 0",
        261LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = *(_WORD *)(v51 + 2) >> 1;
    v20 = v19;
    v50 = *(STRSAFE_PCNZWCH *)(v51 + 8);
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    *(_QWORD *)v48 = PrimaryDisplaySource;
    if ( PrimaryDisplaySource )
    {
      v22 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( !v22 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 276;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 276LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( !*(_QWORD *)(v22 + 3120) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 277;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          277LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v23 = *(_QWORD *)(v22 + 412);
      *(_QWORD *)v49 = v23;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, (struct DXGADAPTER *const)v22, 0LL);
      v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
      v25 = v24;
      if ( v24 >= 0 )
      {
        if ( a4 )
          LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v22 + 3120)) != 0;
        v48[0] = *(_DWORD *)(*(_QWORD *)v48 + 16LL);
        v26 = *(_QWORD *)(v22 + 3120);
        v27 = *(VIDPN_MGR **)(v26 + 104);
        if ( v27 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, *(_QWORD *)(v26 + 104));
          *(_QWORD *)&v46[1] = 0LL;
          ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v27);
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v46[1], (__int64)ClientCommittedVidPnRef);
          if ( *(_QWORD *)&v46[1] )
          {
            v25 = *(_QWORD *)&v46[1] + 96LL;
            v30 = 0LL;
            v52 = *(_QWORD *)&v46[1] + 96LL;
            while ( 1 )
            {
              v46[0] = -1;
              v31 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)v25, v48[0], v30, v46);
              v4 = v31;
              if ( v31 < 0 )
                break;
              if ( v46[0] == -1 )
              {
                auto_rc<DMMVIDPN const>::reset((__int64 *)&v46[1], 0LL);
                DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
                v18 = (_WORD *)v51;
                goto LABEL_48;
              }
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v27 + 15) + 72LL));
              v36 = *((_QWORD *)v27 + 15);
              TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v36, v46[0]);
              if ( TargetById && *((_DWORD *)TargetById + 23) )
              {
                if ( v36 )
                  ReferenceCounted::Release((ReferenceCounted *)(v36 + 64));
              }
              else
              {
                if ( v36 )
                  ReferenceCounted::Release((ReferenceCounted *)(v36 + 64));
                v38 = v50;
                v45[0] = 0;
                if ( v20 && v20 != v19 )
                {
                  v39 = RtlStringCchCopyW((char *)v50, v20, (char *)L"^");
                  LODWORD(v25) = v39;
                  if ( v39 == -2147483643 )
                  {
                    LODWORD(v25) = -1073741789;
LABEL_46:
                    auto_rc<DMMVIDPN const>::reset((__int64 *)&v46[1], 0LL);
                    DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
                    goto LABEL_52;
                  }
                  if ( v39 < 0 )
                    goto LABEL_46;
                  --v20;
                  ++v38;
                }
                LODWORD(v25) = DpiPersistence::AppendMonitorId(
                                 (DpiPersistence *)v46[0],
                                 v49,
                                 (const struct _LUID *)v27,
                                 (struct VIDPN_MGR *)v20,
                                 v45,
                                 v38);
                if ( (int)v25 < 0 )
                  goto LABEL_46;
                v20 -= v45[0];
                v25 = v52;
                v50 = &v38[v45[0]];
              }
              ++v30;
            }
            v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
            v41[4] = v48[0];
            v41[3] = v30;
            v41[5] = v25;
            v41[6] = v4;
            WdLogGlobalForLineNumber = 349;
            auto_rc<DMMVIDPN const>::reset((__int64 *)&v46[1], 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
            LODWORD(v25) = v4;
          }
          else
          {
            v29 = (int)v49[1];
            WdLogSingleEntry2(2LL, (int)v49[1], (unsigned int)v23);
            WdLogGlobalForLineNumber = 325;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Client VidPN is not set on adapter 0x%I64x%08I64x (i.e. no user initiated mode changes took place yet)",
              v29,
              (unsigned int)v23,
              0LL,
              0LL,
              0LL);
            auto_rc<DMMVIDPN const>::reset((__int64 *)&v46[1], 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v47 + 40));
            LODWORD(v25) = -1071774884;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, (int)v49[1], (unsigned int)v23);
          WdLogGlobalForLineNumber = 308;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Specified display adapter 0x%I64x%08I64x does not have a valid VidPN manager associated with it",
            (int)v49[1],
            (unsigned int)v23,
            0LL,
            0LL,
            0LL);
          LODWORD(v25) = -1071774923;
        }
      }
      else
      {
        WdLogSingleEntry3(2LL, v24, (int)v49[1], (unsigned int)v23);
        WdLogGlobalForLineNumber = 288;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed (0x%I64x) to acquire shared access for adapter LUID: 0x%I64x%08I64x",
          v25,
          (int)v49[1],
          (unsigned int)v23,
          0LL,
          0LL);
      }
LABEL_52:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      return (unsigned int)v25;
    }
    else
    {
LABEL_48:
      v40 = v19 - v20;
      *v18 = 2 * v40;
      if ( !(2 * v40) )
      {
        LODWORD(v4) = -1073741637;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 415;
      }
      return (unsigned int)v4;
    }
  }
}
