/*
 * XREFs of GreGetDeviceCaps @ 0x14001D350
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     EnforceColorDependentSettings @ 0x140146F10 (EnforceColorDependentSettings.c)
 * Callees:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14001D4C4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rbx
  unsigned int v8; // esi
  unsigned int DeviceCapsInternal; // ebx
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  bool v11; // [rsp+28h] [rbp-31h]
  _QWORD v12[16]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v14; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)PsIsWin32KFilterEnabled()
    && (unsigned int)PsGetWin32KFilterSet() == 5
    && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v13);
    v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL);
    if ( v14 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v14, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
      return DeviceCapsInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v12[0] + 48LL) + 40LL) & 0x8000;
  v11 = v5 == 0;
  v6 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  v10 = v6;
  if ( !v5 )
    GreAcquireSemaphoreShared<1,>(v6);
  v13 = *(_QWORD *)(v12[0] + 48LL);
  if ( !v13 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)&v10);
LABEL_7:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    return 0LL;
  }
  v8 = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v13, a2);
  if ( !v5 )
    GreReleaseSemaphoreShared<1,>(v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return v8;
}
