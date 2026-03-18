/*
 * XREFs of ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     HdevFromMonitor @ 0x1C0011FC0 (HdevFromMonitor.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0018FA8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C004D160 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MonitorFromHdev @ 0x1C005B370 (MonitorFromHdev.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     InitLoadResources @ 0x1C005D508 (InitLoadResources.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C00640F8 (ApiSetzzzUpdateCursorSizes.c)
 *     EnforceColorDependentSettings @ 0x1C0064130 (EnforceColorDependentSettings.c)
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C00A0634 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 zzzUpdateUserScreen(void)
{
  __int64 v0; // r14
  struct tagMONITOR **v1; // rdi
  struct tagMONITOR **v2; // rbx
  char v3; // dl
  int v4; // esi
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagMONITOR **v8; // rsi
  struct tagMONITOR **v9; // r15
  unsigned int v10; // eax
  unsigned int i; // ebx
  struct tagMONITOR *v12; // rax
  struct tagMONITOR *v13; // r9
  __int64 v14; // rbx
  unsigned __int16 v15; // si
  unsigned __int16 v16; // di
  __int64 v17; // rax
  __int64 j; // rcx
  int v19; // r14d
  int v20; // r9d
  int v21; // r10d
  int v22; // r11d
  int v23; // ebx
  _QWORD *k; // rdx
  _DWORD *v25; // r8
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  PVOID v32; // rdx
  __int64 v33; // rcx
  CInputConfig *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rbx
  int v41; // esi
  __int64 v42; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  HPALETTE v44; // rdi
  __int64 v45; // rdx
  __int64 m; // r8
  __int64 n; // r9
  unsigned __int8 DeviceCaps; // al
  __int16 v49; // r9
  __int128 v51; // [rsp+40h] [rbp-30h]
  __int128 v52; // [rsp+50h] [rbp-20h]

  v0 = *((_QWORD *)gpDispInfo + 2);
  v1 = (struct tagMONITOR **)((char *)gpDispInfo + 104);
  v2 = (struct tagMONITOR **)*((_QWORD *)gpDispInfo + 13);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
  v4 = 0;
  v5 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v5 = W32SetCurrentThreadDpiAwarenessContext(18);
    v4 = 1;
  }
  InitLoadResources(1, v6, v7);
  if ( v4 )
    W32SetCurrentThreadDpiAwarenessContext(v5);
  while ( v2 )
  {
    v8 = v2;
    v9 = v2 + 7;
    v2 = (struct tagMONITOR **)v2[7];
    v10 = HdevFromMonitor((__int64)v8);
    if ( v10 == -1 )
    {
      DestroyMonitor(v8);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v8, v10);
      v1 = v9;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v0 + 20); ++i )
  {
    if ( !MonitorFromHdev(*(_QWORD *)(56LL * i + v0 + 40)) )
    {
      v12 = SetMonitorData(0LL, i);
      v13 = v12;
      if ( v12 )
      {
        if ( *((_QWORD *)gpDispInfo + 13) )
        {
          *((_QWORD *)*(v1 - 2) + 2) = *((_QWORD *)v12 + 6);
          *v1 = v12;
        }
        else
        {
          tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
            (char *)gpDispInfo + 104,
            v12);
        }
        v1 = (struct tagMONITOR **)((char *)v13 + 56);
      }
    }
  }
  v14 = *((_QWORD *)gpDispInfo + 13);
  if ( !v14 || !*((_QWORD *)gpDispInfo + 12) )
    return 3221225495LL;
  v15 = *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL);
  v16 = v15;
  do
  {
    if ( v15 )
    {
      if ( v15 != *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL) )
      {
        v15 = 0;
        if ( qword_1C0296E28 )
        {
          if ( (int)qword_1C0296E28() >= 0 && qword_1C0296E30 )
            qword_1C0296E30();
        }
      }
    }
    v17 = *(_QWORD *)(v14 + 40);
    v14 = *(_QWORD *)(v14 + 56);
    if ( v16 >= *(_WORD *)(v17 + 60) )
      v16 = *(_WORD *)(v17 + 60);
  }
  while ( v14 );
  WPP_MAIN_CB.DeviceLock.Header.SignalState = v15;
  for ( j = *((_QWORD *)gpDispInfo + 13); j; j = *(_QWORD *)(j + 56) )
    *(_WORD *)(*(_QWORD *)(j + 40) + 62LL) = v16;
  ApiSetzzzUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v0 + 16) & 1) == 0;
  v19 = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 38) & 0x100;
  v51 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFD | (v19 != 0 ? 2 : 0);
  **(_DWORD **)gpDispInfo = 0;
  for ( k = (_QWORD *)*((_QWORD *)gpDispInfo + 13); k; k = (_QWORD *)k[7] )
  {
    v25 = (_DWORD *)k[5];
    if ( (v25[6] & 1) != 0 )
    {
      v26 = v25[7];
      if ( v23 < v26 )
        v26 = v23;
      v23 = v26;
      LODWORD(v51) = v26;
      v27 = v25[8];
      if ( v22 < v27 )
        v27 = v22;
      v22 = v27;
      DWORD1(v51) = v27;
      v28 = v25[9];
      if ( v21 > v28 )
        v28 = v21;
      v21 = v28;
      DWORD2(v51) = v28;
      v29 = v25[10];
      if ( v20 > v29 )
        v29 = v20;
      v20 = v29;
      HIDWORD(v51) = v29;
      ++**(_DWORD **)gpDispInfo;
      v25 = (_DWORD *)k[5];
    }
    if ( *((_DWORD *)gpsi + 555) )
    {
      v30 = v25[6];
      if ( v19 )
        v31 = v30 | 2;
      else
        v31 = v30 & 0xFFFFFFFD;
      v25[6] = v31;
    }
    else if ( (*(_DWORD *)(k[10] + 2140LL) & 0x100) != 0 )
    {
      v25[6] |= 2u;
      *((_DWORD *)gpDispInfo + 33) |= 2u;
    }
  }
  v32 = gpDispInfo;
  v52 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v33 = v51 - v52;
  if ( (_QWORD)v51 == (_QWORD)v52 )
    v33 = *((_QWORD *)&v51 + 1) - *((_QWORD *)&v52 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v23;
  *(_DWORD *)(*(_QWORD *)v32 + 28LL) = v22;
  *(_DWORD *)(*(_QWORD *)v32 + 32LL) = v21;
  *(_DWORD *)(*(_QWORD *)v32 + 36LL) = v20;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v33 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v34 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v34);
  v39 = SGDGetUserSessionState(v36, v35, v37, v38);
  memset((void *)(v39 + 14368), 0, 0x600uLL);
  if ( qword_1C0295F18 && (int)qword_1C0295F18() >= 0 && qword_1C0295F20 )
    qword_1C0295F20();
  SetOrCreateRectRgnIndirectPublic((HRGN *)gpDispInfo + 15, (struct _RECTL *)&gZero);
  if ( *((_QWORD *)gpDispInfo + 15) )
  {
    v40 = *((_QWORD *)gpDispInfo + 13);
    v41 = 0;
    while ( v40 )
    {
      v42 = *(_QWORD *)(v40 + 40);
      if ( (*(_DWORD *)(v42 + 24) & 1) != 0 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)(v42 + 28));
        v44 = (HPALETTE)RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v41 = GreCombineRgn(*((HRGN *)gpDispInfo + 15), *((HRGN *)gpDispInfo + 15), (HRGN)RectRgnIndirect, 2);
          GreDeleteObject(v44);
        }
      }
      v40 = *(_QWORD *)(v40 + 56);
    }
    *((_DWORD *)gpDispInfo + 33) = *((_DWORD *)gpDispInfo + 33) & 0xFFFFFFFE | (v41 == 2);
  }
  v45 = 0LL;
  if ( (*((_DWORD *)gpDispInfo + 33) & 1) == 0 )
    v45 = *((_QWORD *)gpDispInfo + 15);
  for ( m = grpWinStaList; m; m = *(_QWORD *)(m + 8) )
  {
    for ( n = *(_QWORD *)(m + 16); n; n = *(_QWORD *)(n + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(n + 8) + 24LL) + 40LL) + 168LL) = v45;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 14);
  DeviceCaps = GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v49 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v49;
  *((_WORD *)gpDispInfo + 64) = v49;
  if ( v19 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  if ( qword_1C0296E98 && (int)qword_1C0296E98() >= 0 && qword_1C0296EA0 )
    qword_1C0296EA0();
  return 0LL;
}
