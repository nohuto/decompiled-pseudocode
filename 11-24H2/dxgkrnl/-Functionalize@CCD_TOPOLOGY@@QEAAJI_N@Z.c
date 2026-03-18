/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B9E28 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x14031FD60 (DxgkFunctionalizePathsModality.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140267DDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x140268310 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x140320164 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140321A18 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, __int64 a3, __int64 a4)
{
  bool v6; // si
  unsigned int v7; // ebx
  int active; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rax
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // eax
  int v18; // [rsp+28h] [rbp-29h] BYREF
  __int128 v19; // [rsp+30h] [rbp-21h]
  __int64 v20; // [rsp+40h] [rbp-11h]
  __int16 v21; // [rsp+48h] [rbp-9h]
  __int128 v22; // [rsp+50h] [rbp-1h]
  __int64 v23; // [rsp+60h] [rbp+Fh]
  __int64 v24; // [rsp+68h] [rbp+17h]
  char v25; // [rsp+70h] [rbp+1Fh]
  int v26; // [rsp+74h] [rbp+23h]
  int v27; // [rsp+78h] [rbp+27h]
  __int64 v28; // [rsp+7Ch] [rbp+2Bh]
  __int64 v29; // [rsp+88h] [rbp+37h]
  unsigned __int8 v30; // [rsp+D0h] [rbp+7Fh] BYREF

  v25 = 1;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v26 = 0;
  v6 = a3;
  v27 = 1;
  v28 = 0LL;
  v29 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v18, 8LL, a3, a4);
  if ( (unsigned int)DxgIsRemoteSession() || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_3;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v18, v6);
  v7 = active;
  if ( active < 0 )
  {
    WdLogSingleEntry1(2LL, active);
    WdLogGlobalForLineNumber = 1389;
    goto LABEL_4;
  }
  if ( active == 255 )
  {
LABEL_3:
    v7 = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, v6);
  }
  else
  {
    if ( v24 )
      v10 = *(_WORD *)(v24 + 20);
    else
      v10 = 0;
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v10 <= v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1414;
    }
    v13 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)&v18, a2, v6);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v30 = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v18, &v30);
      if ( !v30 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1432;
      }
      v14 = *((_QWORD *)this + 8);
      if ( v14 )
        v15 = *(_WORD *)(v14 + 20);
      else
        v15 = 0;
      if ( v24 )
        v16 = *(_WORD *)(v24 + 20);
      else
        v16 = 0;
      if ( v15 != v16 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1433;
      }
      v17 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v18);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v7 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 1443;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 1419;
    }
  }
LABEL_4:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v18);
  return v7;
}
