/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B7878 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x140372FA0 (DxgkFunctionalizePathsModality.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140260EDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x140261410 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x14031A62C (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1403733A4 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, int a2, bool a3)
{
  unsigned int v6; // ebx
  int active; // eax
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // eax
  int v19; // [rsp+28h] [rbp-29h] BYREF
  __int128 v20; // [rsp+30h] [rbp-21h]
  __int64 v21; // [rsp+40h] [rbp-11h]
  __int16 v22; // [rsp+48h] [rbp-9h]
  __int128 v23; // [rsp+50h] [rbp-1h]
  __int64 v24; // [rsp+60h] [rbp+Fh]
  __int64 v25; // [rsp+68h] [rbp+17h]
  char v26; // [rsp+70h] [rbp+1Fh]
  int v27; // [rsp+74h] [rbp+23h]
  int v28; // [rsp+78h] [rbp+27h]
  __int64 v29; // [rsp+7Ch] [rbp+2Bh]
  __int64 v30; // [rsp+88h] [rbp+37h]
  unsigned __int8 v31; // [rsp+D0h] [rbp+7Fh] BYREF

  v26 = 1;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0;
  v28 = 1;
  v29 = 0LL;
  v30 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v19, 8u);
  if ( (unsigned int)DxgIsRemoteSession() || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_3;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v19, a3);
  v6 = active;
  if ( active < 0 )
  {
    WdLogSingleEntry1(2LL, active);
    WdLogGlobalForLineNumber = 1389;
    goto LABEL_4;
  }
  if ( active == 255 )
  {
LABEL_3:
    v6 = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, a3);
  }
  else
  {
    if ( v25 )
      v9 = *(_WORD *)(v25 + 20);
    else
      v9 = 0;
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v9 <= v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1414;
    }
    v12 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)&v19, a2, a3);
    v6 = v12;
    if ( v12 >= 0 )
    {
      v31 = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v19, &v31);
      if ( !v31 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1432;
      }
      v15 = *((_QWORD *)this + 8);
      if ( v15 )
        v16 = *(_WORD *)(v15 + 20);
      else
        v16 = 0;
      if ( v25 )
        v17 = *(_WORD *)(v25 + 20);
      else
        v17 = 0;
      if ( v16 != v17 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1433;
      }
      v18 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v19, v13, v14);
      v6 = v18;
      if ( v18 >= 0 )
      {
        v6 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 1443;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 1419;
    }
  }
LABEL_4:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v19);
  return v6;
}
