/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B46E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B2900 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B2FC8 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1401B3510 (-EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_E.c)
 *     ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1401B4C5C (-QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTAT.c)
 *     ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1401B4E30 (-ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMP.c)
 *     ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B5C9C (-UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  struct _KPROCESS *v7; // rdx
  DXGPROCESS *v8; // rax
  DXGPROCESS *v9; // rsi
  __int64 v10; // r8
  int *v11; // rdx
  int v12; // eax
  struct _KPROCESS *v13; // rdx
  int v14; // eax
  int v15; // eax
  struct _KPROCESS *v16; // rdx
  int v17; // eax
  struct _KPROCESS *v18; // rdx
  DXGPROCESS *v19; // rax
  DXGPROCESS *v20; // rsi
  int CompositionSurfaceCallback; // eax
  int v22; // eax
  struct _KPROCESS *v23; // rdx
  int v24; // eax
  struct _KPROCESS *v25; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v27; // rdx
  _BYTE v28[16]; // [rsp+20h] [rbp-99h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-89h] BYREF
  char v30; // [rsp+60h] [rbp-59h]
  int v31; // [rsp+68h] [rbp-51h] BYREF
  int v32; // [rsp+6Ch] [rbp-4Dh]
  int v33; // [rsp+70h] [rbp-49h]
  int v34; // [rsp+74h] [rbp-45h]
  int v35; // [rsp+78h] [rbp-41h] BYREF
  int v36; // [rsp+7Ch] [rbp-3Dh]
  int v37; // [rsp+80h] [rbp-39h]
  int v38; // [rsp+84h] [rbp-35h]
  __int64 v39; // [rsp+88h] [rbp-31h]
  int v40; // [rsp+90h] [rbp-29h] BYREF
  int StatsCallback; // [rsp+94h] [rbp-25h]
  int v42; // [rsp+98h] [rbp-21h]
  _BYTE v43[84]; // [rsp+9Ch] [rbp-1Dh] BYREF

  if ( a3 < 0xC )
  {
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 77;
    return 3221225485LL;
  }
  v6 = *((int *)a2 + 2);
  switch ( (_DWORD)v6 )
  {
    case 1:
      if ( a3 != 16 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 91;
        return 3221225485LL;
      }
      v24 = *((_DWORD *)a2 + 1);
      v25 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v38 = 0;
      v39 = 0LL;
      v36 = v24;
      v35 = 1886220131;
      v37 = 2;
      v30 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v25);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v31);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
      ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v20 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
        DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31);
      if ( !v20 )
        goto LABEL_46;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGPROCESS *)((char *)v20 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
      if ( *((_DWORD *)v20 + 10) != 1 )
      {
LABEL_45:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
        DXGPROCESS::ReleaseReference(v20);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31);
LABEL_46:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v31);
        CPROCESSATTACHHELPER::Detach(&ApcState);
        v11 = &v35;
        v10 = 24LL;
        goto LABEL_47;
      }
      CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                     this,
                                     v27,
                                     (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v35);
LABEL_44:
      v36 = CompositionSurfaceCallback;
      goto LABEL_45;
    case 3:
      if ( a3 != 16 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 100;
        return 3221225485LL;
      }
      v22 = *((_DWORD *)a2 + 1);
      v23 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v32 = v22;
      v31 = 1886220131;
      v33 = 4;
      v30 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v23);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v31);
LABEL_23:
      v32 = v14;
      CPROCESSATTACHHELPER::Detach(&ApcState);
      v10 = 16LL;
      v11 = &v31;
      goto LABEL_47;
    case 5:
      if ( a3 != 1344 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 109;
        return 3221225485LL;
      }
      v17 = *((_DWORD *)a2 + 1);
      v18 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v38 = 0;
      v39 = 0LL;
      v36 = v17;
      v35 = 1886220131;
      v37 = 6;
      v30 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v18);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v31);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
      v19 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v20 = v19;
      if ( v19 )
        DXGPROCESS::AcquireReference(v19);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31);
      if ( !v20 )
        goto LABEL_46;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGPROCESS *)((char *)v20 + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
      if ( *((_DWORD *)v20 + 10) != 1 )
        goto LABEL_45;
      CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                     this,
                                     a2,
                                     (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v35);
      goto LABEL_44;
    case 7:
      if ( a3 != 24 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 118;
        return 3221225485LL;
      }
      v15 = *((_DWORD *)a2 + 1);
      v16 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v32 = v15;
      v31 = 1886220131;
      v33 = 8;
      v30 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v16);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v31);
      goto LABEL_23;
    case 9:
      if ( a3 != 488 )
      {
        WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
        WdLogGlobalForLineNumber = 127;
        return 3221225485LL;
      }
      v12 = *((_DWORD *)a2 + 1);
      v13 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      v32 = v12;
      v31 = 1886220131;
      v33 = 10;
      v30 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v13);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v31);
      goto LABEL_23;
  }
  if ( (_DWORD)v6 != 11 )
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 143;
    return 3221225485LL;
  }
  if ( a3 != 16 )
  {
    WdLogSingleEntry3(3LL, v6, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 136;
    return 3221225485LL;
  }
  memset(v43, 0, sizeof(v43));
  v40 = 1886220131;
  v42 = 12;
  memset(&v43[4], 0, 0x50uLL);
  v7 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  StatsCallback = *((_DWORD *)a2 + 1);
  v30 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v7);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v31);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
  v8 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
  v9 = v8;
  if ( v8 )
    DXGPROCESS::AcquireReference(v8);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31);
  if ( v9 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGPROCESS *)((char *)v9 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    if ( *((_DWORD *)v9 + 10) == 1 )
      StatsCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
                        this,
                        a2,
                        (struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *)&v40);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
    DXGPROCESS::ReleaseReference(v9);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v31);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v31);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  v10 = 96LL;
  v11 = &v40;
LABEL_47:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v11, v10);
  return 0LL;
}
