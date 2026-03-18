/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x14020A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140031B9C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BA58 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x14009CF68 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x14009D098 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401B57D0 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402D48DC (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v5; // r15
  struct DXGPROCESS *Current; // rbx
  const wchar_t *v7; // r9
  int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  DxgkCompositionObject *v12; // r13
  struct _KPROCESS *v13; // r12
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  int v16; // eax
  unsigned __int8 v17; // r15
  CPushLock *v18; // rbx
  struct IPairedSurfaceObject *v19; // r12
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // [rsp+50h] [rbp-D8h] BYREF
  int v27; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-C8h]
  char v29; // [rsp+68h] [rbp-C0h]
  struct IPairedSurfaceObject *v30; // [rsp+70h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-B0h] BYREF
  DxgkCompositionObject *v32; // [rsp+80h] [rbp-A8h] BYREF
  void *v33; // [rsp+88h] [rbp-A0h]
  __int64 v34; // [rsp+90h] [rbp-98h]
  struct _KPROCESS *v35; // [rsp+98h] [rbp-90h]
  void *v36; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD *v37; // [rsp+A8h] [rbp-80h]
  _BYTE v38[16]; // [rsp+B0h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-68h] BYREF
  char v40; // [rsp+F0h] [rbp-38h]

  v3 = a2;
  v37 = a2;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2215);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2215);
  v32 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  if ( !a1 || !v3 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1387;
    v7 = L"Invalid parameters. Returning 0x%I64x";
    goto LABEL_47;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1396;
    v7 = L"Invalid process context. Returning 0x%I64x";
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v27);
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v38, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  v8 = (*((_DWORD *)Current + 102) >> 2) & 1;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 124) && v8 )
  {
    v26 = 0LL;
    LODWORD(v9) = DxgkGetSessionTokenManager(&v26);
    v10 = v26;
    v34 = v26;
    if ( (int)v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
      LODWORD(v9) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, &v32);
      v12 = v32;
      if ( (int)v9 >= 0 )
      {
        v30 = 0LL;
        v13 = 0LL;
        v35 = 0LL;
        Object = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 122));
        if ( SessionData )
        {
          LODWORD(v9) = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&Object);
          v13 = (struct _KPROCESS *)Object;
          v35 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v9) = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 1449;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Fail to reference Dwm process. Returning 0x%I64x",
            -1073741790LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v9 >= 0 )
        {
          v40 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v13);
          v16 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v12, &v30, &v36);
          v9 = v16;
          if ( v16 >= 0 )
          {
            v17 = 0;
            v18 = (DxgkCompositionObject *)((char *)v12 + 48);
            v19 = v30;
            do
            {
              v20 = CPushLock::AcquireLockExclusive(v18);
              if ( v20 >= 0 )
              {
                v20 = CCompositionSurface::Pair((DxgkCompositionObject *)((char *)v12 + 40), v19);
                CPushLock::ReleaseLock(v18);
              }
              LODWORD(v9) = v20;
              if ( v20 == -1073740528 )
              {
                if ( v17 )
                {
                  LODWORD(v9) = -1073741823;
                  WdLogSingleEntry1(3LL, -1073741823LL);
                  WdLogGlobalForLineNumber = 1491;
                }
                else
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 1480;
                  if ( (int)CPushLock::AcquireLockExclusive(v18) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v12 + 40));
                    CPushLock::ReleaseLock(v18);
                  }
                  v17 = 1;
                }
              }
              else if ( v20 < 0 )
              {
                WdLogSingleEntry2(2LL, v20, v17);
                WdLogGlobalForLineNumber = 1497;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v20,
                  v17,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v19 + 16LL))(v19);
                v18 = (DxgkCompositionObject *)((char *)v12 + 48);
              }
            }
            while ( (_DWORD)v9 == -1073740528 );
            v30 = 0LL;
            v10 = v34;
            v13 = v35;
            v3 = v37;
          }
          else
          {
            WdLogSingleEntry1(2LL, v16);
            WdLogGlobalForLineNumber = 1467;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Fail on DxgkCreateRemoteCompositionSurfaceObjectForPairing. Returning 0x%I64x",
              v9,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          CPROCESSATTACHHELPER::Detach(&ApcState);
          v33 = v36;
        }
        if ( v13 )
        {
          ObfDereferenceObject(v13);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v12);
        v32 = 0LL;
      }
    }
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v26 = 0LL;
    }
    v5 = v33;
  }
  else
  {
    LODWORD(v9) = -1073741790;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *v3 = v5;
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v27);
  return (unsigned int)v9;
}
