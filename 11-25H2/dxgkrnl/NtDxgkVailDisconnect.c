/*
 * XREFs of NtDxgkVailDisconnect @ 0x140203A80
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
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x14007719C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401E7B5C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402005A0 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x140201340 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGVAILOBJECT *v7; // rbx
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  PVOID v15; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v17; // eax
  struct DXGPROCESS *v18; // r14
  int v19; // eax
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h]
  char v25; // [rsp+68h] [rbp-29h]
  PVOID Object[2]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v29; // [rsp+C0h] [rbp+2Fh]

  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2217);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2217);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( *((_QWORD *)Current + 72) )
    {
      v7 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v7 + 11);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)Object, (struct DXGVAILOBJECT *)((char *)v7 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v7);
      LODWORD(v8) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Object);
      DxgkCompositionObject::Release(v7);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      Object[0] = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      v11 = SessionData;
      if ( SessionData )
      {
        v14 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)Object);
        v15 = Object[0];
        v8 = v14;
        if ( v14 >= 0 )
        {
          v29 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object[0]);
          v18 = DXGPROCESS::GetCurrent();
          if ( *((_BYTE *)v18 + 584) )
          {
            v19 = DXGSESSIONDATA::VailGuestDisconnect(v11);
            LODWORD(v8) = v19;
            if ( v19 >= 0 )
            {
              v20 = 0;
            }
            else
            {
              WdLogSingleEntry1(3LL, v19);
              v20 = 1;
              WdLogGlobalForLineNumber = 1243;
            }
            *((_BYTE *)v18 + 584) = v20;
          }
          else
          {
            LODWORD(v8) = -2147483611;
            WdLogSingleEntry1(3LL, -2147483611LL);
            WdLogGlobalForLineNumber = 1232;
          }
          CPROCESSATTACHHELPER::Detach(&ApcState);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, v8);
          WdLogGlobalForLineNumber = 1214;
          v17 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v17,
            v8,
            0LL,
            0LL,
            0LL);
        }
        if ( v15 )
          ObfDereferenceObject(v15);
      }
      else
      {
        v12 = PsGetCurrentProcessSessionId();
        WdLogSingleEntry2(2LL, v12, -1073741790LL);
        WdLogGlobalForLineNumber = 1203;
        v13 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v13,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v8) = -1073741790;
      }
    }
    else
    {
      LODWORD(v8) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      WdLogGlobalForLineNumber = 1266;
    }
    KeLeaveCriticalRegion();
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v23);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1141;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v23);
    }
    return 3221225485LL;
  }
}
