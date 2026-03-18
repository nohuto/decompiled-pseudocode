/*
 * XREFs of NtDxgkVailConnect @ 0x140203500
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BD3C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401E7B5C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402000D0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402005A0 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x140200954 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1402011F0 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGVAILOBJECT *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int VmBusHostSubscribers; // eax
  __int64 v13; // rdi
  struct DXGVMBUSCHANNEL *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  PVOID v25; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v27; // eax
  struct DXGPROCESS *v28; // rsi
  int v29; // eax
  char v30; // al
  struct DXGGLOBAL *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+58h] [rbp-39h] BYREF
  __int64 v35; // [rsp+60h] [rbp-31h]
  char v36; // [rsp+68h] [rbp-29h]
  PVOID Object; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v38[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v39[16]; // [rsp+88h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp+7h] BYREF
  char v41; // [rsp+C8h] [rbp+37h]

  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2216;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2216);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2216);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    if ( *((_QWORD *)Current + 72) )
    {
      v7 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, (struct DXGVAILOBJECT *)((char *)v7 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
      if ( *((_QWORD *)v7 + 14) )
      {
        VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers(v7);
        LODWORD(v13) = VmBusHostSubscribers;
        if ( VmBusHostSubscribers == -1073740528 )
        {
          WdLogSingleEntry1(3LL, -1073740528LL);
          WdLogGlobalForLineNumber = 976;
        }
        else if ( VmBusHostSubscribers >= 0 )
        {
          if ( *((struct _KTHREAD **)v7 + 8) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 339;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_VailMutex.IsOwner()", 339LL, 0LL, 0LL, 0LL, 0LL);
          }
          v14 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)v7 + 14);
          LODWORD(v13) = -1073741823;
          if ( v14 )
            LODWORD(v13) = EnableVmBusChannel(v14, 0);
          if ( (int)v13 < 0 )
          {
            WdLogSingleEntry1(3LL, (int)v13);
            WdLogGlobalForLineNumber = 995;
            DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, VmBusHostSubscribers);
          WdLogGlobalForLineNumber = 982;
        }
      }
      else
      {
        LODWORD(v13) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 1004;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
      if ( (int)v13 >= 0 )
        ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v7 + 11);
      DxgkCompositionObject::Release(v7);
    }
    else if ( (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) )
      {
        Object = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        v21 = SessionData;
        if ( SessionData )
        {
          v24 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&Object);
          v25 = Object;
          v13 = v24;
          if ( v24 >= 0 )
          {
            v41 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v28 = DXGPROCESS::GetCurrent();
            if ( *((_BYTE *)v28 + 584) )
            {
              WdLogSingleEntry1(3LL, -1073740528LL);
              WdLogGlobalForLineNumber = 1064;
              LODWORD(v13) = -1073740528;
            }
            else
            {
              v29 = DXGSESSIONDATA::VailGuestConnect(v21);
              LODWORD(v13) = v29;
              if ( v29 >= 0 )
              {
                v30 = 1;
              }
              else
              {
                WdLogSingleEntry1(3LL, v29);
                v30 = 0;
                WdLogGlobalForLineNumber = 1074;
              }
              *((_BYTE *)v28 + 584) = v30;
            }
            CPROCESSATTACHHELPER::Detach(&ApcState);
          }
          else
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, v13);
            WdLogGlobalForLineNumber = 1047;
            v27 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v27,
              v13,
              0LL,
              0LL,
              0LL);
          }
          if ( v25 )
            ObfDereferenceObject(v25);
        }
        else
        {
          v22 = PsGetCurrentProcessSessionId();
          LODWORD(v13) = -1073741790;
          WdLogSingleEntry2(2LL, v22, -1073741790LL);
          WdLogGlobalForLineNumber = 1036;
          v23 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v23,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v13) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 1097;
      }
    }
    else
    {
      LODWORD(v13) = -1073741790;
      v31 = DXGGLOBAL::GetGlobal();
      WdLogSingleEntry4(
        3LL,
        -1073741790LL,
        *((_QWORD *)Current + 72) != 0LL,
        (*((_DWORD *)Current + 102) >> 2) & 1,
        *((_QWORD *)v31 + 120));
      WdLogGlobalForLineNumber = 1107;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
    KeLeaveCriticalRegion();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v34);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 931;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v34);
    }
    return 3221225485LL;
  }
}
