/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x140203E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400322F0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BD3C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?UnPair@CompositionSurfaceObject@@QEAAJ_N@Z @ 0x140079E68 (-UnPair@CompositionSurfaceObject@@QEAAJ_N@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x14009ADD0 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401B3220 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402E7614 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
  __int64 v16; // r9
  int v17; // eax
  unsigned __int8 v18; // r15
  CPushLock *v19; // rbx
  struct IPairedSurfaceObject *v20; // r12
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // [rsp+50h] [rbp-D8h] BYREF
  int v28; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-C8h]
  char v30; // [rsp+68h] [rbp-C0h]
  struct IPairedSurfaceObject *v31; // [rsp+70h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-B0h] BYREF
  DxgkCompositionObject *v33; // [rsp+80h] [rbp-A8h] BYREF
  void *v34; // [rsp+88h] [rbp-A0h]
  __int64 v35; // [rsp+90h] [rbp-98h]
  struct _KPROCESS *v36; // [rsp+98h] [rbp-90h]
  void *v37; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD *v38; // [rsp+A8h] [rbp-80h]
  _BYTE v39[16]; // [rsp+B0h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-68h] BYREF
  char v41; // [rsp+F0h] [rbp-38h]

  v3 = a2;
  v38 = a2;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2215);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2215);
  v33 = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  if ( !a1 || !v3 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1387;
    v7 = L"Invalid parameters. Returning 0x%I64x";
    goto LABEL_45;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1396;
    v7 = L"Invalid process context. Returning 0x%I64x";
LABEL_45:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v28);
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v39, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
  v8 = (*((_DWORD *)Current + 102) >> 2) & 1;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && v8 )
  {
    v27 = 0LL;
    LODWORD(v9) = DxgkGetSessionTokenManager(&v27);
    v10 = v27;
    v35 = v27;
    if ( (int)v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
      LODWORD(v9) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, &v33);
      v12 = v33;
      if ( (int)v9 >= 0 )
      {
        v31 = 0LL;
        v13 = 0LL;
        v36 = 0LL;
        Object = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 118));
        if ( SessionData )
        {
          LODWORD(v9) = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&Object);
          v13 = (struct _KPROCESS *)Object;
          v36 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v9) = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 1449;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
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
          v41 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v13);
          v17 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v12, &v31, &v37, v16);
          v9 = v17;
          if ( v17 >= 0 )
          {
            v18 = 0;
            v19 = (DxgkCompositionObject *)((char *)v12 + 48);
            v20 = v31;
            do
            {
              v21 = CPushLock::AcquireLockExclusive(v19);
              if ( v21 >= 0 )
              {
                v21 = CCompositionSurface::Pair((DxgkCompositionObject *)((char *)v12 + 40), v20);
                CPushLock::ReleaseLock(v19);
              }
              LODWORD(v9) = v21;
              if ( v21 == -1073740528 )
              {
                if ( v18 )
                {
                  LODWORD(v9) = -1073741823;
                  WdLogSingleEntry1(3LL, -1073741823LL);
                  WdLogGlobalForLineNumber = 1491;
                }
                else
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 1480;
                  CompositionSurfaceObject::UnPair(v12);
                  v18 = 1;
                }
              }
              else if ( v21 < 0 )
              {
                WdLogSingleEntry2(2LL, v21, v18);
                WdLogGlobalForLineNumber = 1497;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v21,
                  v18,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v20 + 16LL))(v20);
                v19 = (DxgkCompositionObject *)((char *)v12 + 48);
              }
            }
            while ( (_DWORD)v9 == -1073740528 );
            v31 = 0LL;
            v10 = v35;
            v13 = v36;
            v3 = v38;
          }
          else
          {
            WdLogSingleEntry1(2LL, v17);
            WdLogGlobalForLineNumber = 1467;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Fail on DxgkCreateRemoteCompositionSurfaceObjectForPairing. Returning 0x%I64x",
              v9,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          CPROCESSATTACHHELPER::Detach(&ApcState);
          v34 = v37;
        }
        if ( v13 )
        {
          ObfDereferenceObject(v13);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v12);
        v33 = 0LL;
      }
    }
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v27 = 0LL;
    }
    v5 = v34;
  }
  else
  {
    LODWORD(v9) = -1073741790;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *v3 = v5;
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v28);
  return (unsigned int)v9;
}
