/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140159430
 * Callers:
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401C660C (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x140159B1C (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401C80F4 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HDEV a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _GRETHREAD *v5; // rax
  struct _GRETHREAD *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  __int64 v12; // rdi
  int v13; // r8d
  _DWORD *v14; // r8
  unsigned int i; // edx
  __int64 v16; // rcx
  struct _devicemodeW *v17; // rbp
  __int64 v18; // rcx
  unsigned int updated; // esi
  int v20; // r8d
  struct _GRETHREAD *v21; // rax
  bool v22; // zf
  struct _GRETHREAD *v24; // rax
  HDEV v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = a1;
  W32GetSessionState(a1);
  v4 = (struct _ERESOURCE *)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v4);
  v5 = GreGetCurrentThreadCrossSessionCheck();
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)v5;
    if ( (*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v7 & 0x10) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v7, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v11 = *((_BYTE *)v6 + 12);
    *((_BYTE *)v6 + 12) = v11 + 1;
    if ( !v11 )
      *(_QWORD *)v6 |= 0x10uLL;
  }
  v12 = *((_QWORD *)a1 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v12);
  if ( !*((_QWORD *)a1 + 323) )
  {
    WdLogSingleEntry1(4LL, 1LL);
    WdLogGlobalForLineNumber = 28968;
    goto LABEL_39;
  }
  if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation(*((struct tagGRAPHICS_DEVICE **)a1 + 321)) )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 28978;
LABEL_39:
    if ( v12 )
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v12);
    if ( v4 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v4, v13);
      v24 = GreGetCurrentThreadCrossSessionCheck();
      if ( v24 )
      {
        v22 = (*((_BYTE *)v24 + 12))-- == 1;
        if ( v22 )
          *(_QWORD *)v24 &= ~0x10uLL;
      }
      GreReleaseSemaphoreSharedInternal(v4);
    }
    return 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)a1 + 321);
  if ( (v14[40] & 0x6000008) != 0 )
  {
    WdLogSingleEntry1(4LL, 2LL);
    WdLogGlobalForLineNumber = 28990;
    goto LABEL_39;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((unsigned __int16 *)a2 + 10) )
      goto LABEL_36;
    v16 = 296LL * i;
    if ( v14[62] == *(_DWORD *)((char *)a2 + v16 + 80)
      && v14[60] == *(_DWORD *)((char *)a2 + v16 + 72)
      && v14[61] == *(_DWORD *)((char *)a2 + v16 + 76)
      && !_bittest64((const signed __int64 *)((char *)a2 + v16 + 56), 0x24u) )
    {
      break;
    }
  }
  v17 = *(struct _devicemodeW **)((char *)a2 + v16 + 304);
  if ( !v17 )
  {
LABEL_36:
    WdLogSingleEntry1(4LL, 29011LL);
    WdLogGlobalForLineNumber = 29011;
    goto LABEL_39;
  }
  if ( !DevmodeAutoRotateCompatible(v17, *((const struct _devicemodeW **)a1 + 323)) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 29021;
    goto LABEL_39;
  }
  updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v25, v17);
  if ( updated )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v18) + 88) + 1768LL)
                                                    + 1573008LL));
    DisplayScenarioJournalDisplayUniquenessIncremented();
    WdLogSingleEntry1(4LL, 4LL);
    WdLogGlobalForLineNumber = 29036;
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v4, v20);
    v21 = GreGetCurrentThreadCrossSessionCheck();
    if ( v21 )
    {
      v22 = (*((_BYTE *)v21 + 12))-- == 1;
      if ( v22 )
        *(_QWORD *)v21 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v4);
  }
  return updated;
}
