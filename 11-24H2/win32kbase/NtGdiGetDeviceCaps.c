/*
 * XREFs of NtGdiGetDeviceCaps @ 0x14001E030
 * Callers:
 *     <none>
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

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdi
  unsigned int DeviceCapsInternal; // ebx
  __int64 v9; // [rsp+20h] [rbp-39h] BYREF
  bool v10; // [rsp+28h] [rbp-31h]
  _QWORD v11[14]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v13; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)PsIsWin32KFilterEnabled()
    && (unsigned int)PsGetWin32KFilterSet() == 5
    && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v12);
    v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL);
    if ( v13 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v13, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v12);
      return DeviceCapsInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v12);
    return 0;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( !v11[0] )
  {
    EngSetLastError(6u);
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v11[0] + 48LL) + 40LL) & 0x8000;
  v10 = v5 == 0;
  v6 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  v9 = v6;
  if ( !v5 )
    GreAcquireSemaphoreShared<1,>(v6);
  v12 = *(_QWORD *)(v11[0] + 48LL);
  if ( !v12 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)&v9);
LABEL_10:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return 0;
  }
  DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v12, a2);
  if ( !v5 )
    GreReleaseSemaphoreShared<1,>(v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return DeviceCapsInternal;
}
