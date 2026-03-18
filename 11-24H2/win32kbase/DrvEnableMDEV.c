/*
 * XREFs of DrvEnableMDEV @ 0x140012A70
 * Callers:
 *     SafeEnableMDEV @ 0x140147E70 (SafeEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     UserNotifyDisplayChange @ 0x1400A3780 (UserNotifyDisplayChange.c)
 *     DrvDxgkDisplayOnOff @ 0x14013A5F0 (DrvDxgkDisplayOnOff.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x14023ABDC (IsDrvRealizeHalftonePaletteSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  HDEV v11; // rsi
  _QWORD *v12; // r15
  __int64 v13; // r12
  HSEMAPHORE v14; // rsi
  struct _GRETHREAD *v15; // rax
  struct _GRETHREAD *v16; // rdi
  __int64 v17; // rcx
  char v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // edx
  HSEMAPHORE v22; // rbx
  struct _GRETHREAD *v23; // rax
  bool v24; // zf
  HSEMAPHORE v25; // rbx
  struct _GRETHREAD *v26; // rax
  struct _GRETHREAD *v27; // rax
  unsigned int j; // ecx
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  int v32; // r8d
  int v33; // eax
  void (__fastcall *v34)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  void (__fastcall *v35)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD); // rax
  __int64 v36; // rdx
  void (__fastcall *v37)(__int64, __int64); // rax
  HSEMAPHORE v38; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v39[8]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *i; // [rsp+80h] [rbp+8h] BYREF
  __int64 v41; // [rsp+98h] [rbp+20h] BYREF

  v6 = 1;
  WdLogSingleEntry2(4LL, a1, a2);
  v8 = *(_QWORD **)a1;
  v9 = 0;
  WdLogGlobalForLineNumber = 19774;
  for ( i = v8; v9 < *(_DWORD *)(a1 + 20); ++v9 )
  {
    v10 = 56LL * v9;
    v11 = *(HDEV *)(v10 + a1 + 40);
    if ( a2 )
    {
      LOBYTE(v7) = 1;
      DrvDxgkDisplayOnOff(*(_QWORD *)(v10 + a1 + 40), v7, a3);
      DrvEnableDisplay(v11);
    }
  }
  v12 = *(_QWORD **)(W32GetSessionState() + 88);
  v13 = *v12 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v13);
  v14 = (HSEMAPHORE)v8[7];
  GreAcquireSemaphoreInternal(v14);
  v15 = GreGetCurrentThreadCrossSessionCheck();
  v16 = v15;
  if ( v15 )
  {
    v17 = *(_QWORD *)v15;
    if ( (*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v17 & 0x10) == 0 )
    {
      v31 = 0LL;
      v32 = 37;
      do
      {
        v33 = v31;
        if ( !_bittest64(&v17, v31) )
          v33 = v32;
        ++v31;
        v32 = v33;
      }
      while ( v31 < 0x40 );
      if ( v33 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v18 = *((_BYTE *)v16 + 12);
    *((_BYTE *)v16 + 12) = v18 + 1;
    if ( !v18 )
      *(_QWORD *)v16 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(v39, v12);
  v19 = v8[6];
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v19);
  SEMOBJ<10>::SEMOBJ<10>(&v38, v12);
  if ( a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v20 = v8[224];
  v41 = v20;
  if ( (*(_DWORD *)(v20 + 24) & 0x800) != 0 )
  {
    v34 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v8[357];
    if ( v34 )
      v34(v8[223], &v41, 0LL, 0LL, *(_DWORD *)(v20 + 28));
    else
      v6 = 0;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 20);
    if ( v21 > 1 )
    {
      for ( j = 0; j < v21; ++j )
      {
        v30 = *(_QWORD *)(56LL * j + a1 + 40);
        if ( (*(_DWORD *)(v30 + 2156) & 0x100) != 0 )
        {
          v35 = *(void (__fastcall **)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD))(v30 + 1752);
          v36 = *(_QWORD *)(v30 + 1792);
          i = (_QWORD *)v36;
          if ( v35 )
            v35(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 1784LL), &i, 0LL, 0LL, *(_DWORD *)(v36 + 28));
          else
            v6 = 0;
          if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
          {
            v37 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 888LL);
            if ( v37 )
              v37(v30, 1LL);
          }
          break;
        }
      }
    }
  }
  v22 = v38;
  if ( v38 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v38);
    v23 = GreGetCurrentThreadCrossSessionCheck();
    if ( v23 )
    {
      v24 = (*((_BYTE *)v23 + 18))-- == 1;
      if ( v24 )
        *(_QWORD *)v23 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v22);
  }
  if ( v19 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v19);
  v25 = v39[0];
  if ( v39[0] )
  {
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v39[0]);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v24 = (*((_BYTE *)v26 + 14))-- == 1;
      if ( v24 )
        *(_QWORD *)v26 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v25);
  }
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", v14);
    v27 = GreGetCurrentThreadCrossSessionCheck();
    if ( v27 )
    {
      v24 = (*((_BYTE *)v27 + 12))-- == 1;
      if ( v24 )
        *(_QWORD *)v27 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v14);
  }
  if ( v13 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
  if ( a2 )
    GreIncrementDisplaySettingsUniqueness();
  if ( (unsigned int)UserIsConsoleConnection() )
    UserNotifyDisplayChange();
  return v6;
}
