/*
 * XREFs of DrvDisableMDEV @ 0x140089260
 * Callers:
 *     SafeDisableMDEV @ 0x140156D70 (SafeDisableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140021264 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087038 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087764 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087C14 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140089590 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, int a2, unsigned int a3)
{
  __int64 v5; // rcx
  HDEV v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  struct _ERESOURCE *v10; // rsi
  struct _GRETHREAD *v11; // rax
  struct _GRETHREAD *v12; // rdi
  __int64 v13; // rcx
  char v14; // cl
  __int64 v15; // r15
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rbp
  struct _ERESOURCE *v21; // rbx
  struct _GRETHREAD *v22; // rax
  bool v23; // zf
  struct _ERESOURCE *v24; // rbx
  struct _GRETHREAD *v25; // rax
  struct _GRETHREAD *v26; // rax
  __int64 result; // rax
  unsigned __int64 v28; // rdx
  int v29; // r8d
  int v30; // eax
  _QWORD *v31; // [rsp+20h] [rbp-58h]
  HDEV v32; // [rsp+28h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h]
  HSEMAPHORE v34; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+18h]
  HSEMAPHORE v36; // [rsp+98h] [rbp+20h] BYREF

  v35 = a3;
  WdLogSingleEntry2(4LL, a1, a2);
  v6 = *a1;
  v32 = *a1;
  WdLogGlobalForLineNumber = 20129;
  if ( a2 )
    GreSuspendDirectDraw(v6, 0);
  v7 = *(_QWORD **)(W32GetSessionState(v5) + 88);
  v31 = v7;
  v8 = *v7 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v8);
  v9 = *v7 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  v33 = *v7 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v33);
  v10 = (struct _ERESOURCE *)*((_QWORD *)v6 + 7);
  GreAcquireSemaphoreInternal(v10);
  v11 = GreGetCurrentThreadCrossSessionCheck();
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v13 & 0x10) == 0 )
    {
      v28 = 0LL;
      v29 = 37;
      do
      {
        v30 = v28;
        if ( !_bittest64(&v13, v28) )
          v30 = v29;
        ++v28;
        v29 = v30;
      }
      while ( v28 < 0x40 );
      if ( v30 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v14 = *((_BYTE *)v12 + 12);
    *((_BYTE *)v12 + 12) = v14 + 1;
    if ( !v14 )
      *(_QWORD *)v12 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(&v36, v7);
  v15 = *v7 + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v15);
  v16 = *((_QWORD *)v6 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v16);
  SEMOBJ<10>::SEMOBJ<10>(&v34, v31);
  v17 = DrvDisableMDEVChildren((struct _MDEV *)a1, a2, v35);
  v20 = v17;
  if ( v17 && a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v32, 1);
  v21 = (struct _ERESOURCE *)v34;
  if ( v34 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v34, v19);
    v22 = GreGetCurrentThreadCrossSessionCheck();
    if ( v22 )
    {
      v23 = (*((_BYTE *)v22 + 18))-- == 1;
      if ( v23 )
        *(_QWORD *)v22 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v21);
    v34 = 0LL;
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v16);
  if ( v15 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15,
      v19);
  v24 = (struct _ERESOURCE *)v36;
  if ( v36 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v36, v19);
    v25 = GreGetCurrentThreadCrossSessionCheck();
    if ( v25 )
    {
      v23 = (*((_BYTE *)v25 + 14))-- == 1;
      if ( v23 )
        *(_QWORD *)v25 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v24);
    v36 = 0LL;
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v10, v19);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v23 = (*((_BYTE *)v26 + 12))-- == 1;
      if ( v23 )
        *(_QWORD *)v26 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v10);
  }
  if ( v33 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v33,
      v19);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v9);
  if ( v8 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v8);
  if ( !(_DWORD)v20 && a2 )
    GreIncrementDisplaySettingsUniqueness(v18);
  WdLogSingleEntry1(5LL, v20);
  result = (unsigned int)v20;
  WdLogGlobalForLineNumber = 20191;
  return result;
}
