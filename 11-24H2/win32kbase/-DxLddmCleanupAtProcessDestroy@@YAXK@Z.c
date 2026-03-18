/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1400142C8 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     GreLockSprite @ 0x1400143C0 (GreLockSprite.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x140015580 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401CCD44 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  void (__fastcall *v5)(_QWORD, __int64); // rdi
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 SessionState; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v13);
  v2 = hdevEnumerate<1>(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 40) & 0x20001;
      v12 = v2;
      if ( v3 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v12) )
      {
        GreLockVisRgn(v2);
        GreLockSprite(v2, v4);
        GreAcquireSemaphore<8,PDEVOBJ>(v2);
        DxLddmPrimaryLockProcessDestroy((_DWORD *)v2, a1, &v11);
        v5 = *(void (__fastcall **)(_QWORD, __int64))(v2 + 2648);
        if ( v5 )
        {
          CurrentProcess = PsGetCurrentProcess();
          v5(*(_QWORD *)(v2 + 1784), CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
          WdLogGlobalForLineNumber = 1099;
        }
        GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          *(_QWORD *)(v2 + 48));
        SessionState = W32GetSessionState(v8, v7);
        GreReleaseSemaphoreExclusive<6,>(*(__int64 **)(SessionState + 88));
        GreUnlockVisRgn(v2);
      }
      v2 = hdevEnumerate<1>((PDEV *)v2);
    }
    while ( v2 );
    if ( v11 )
      DxLddmLogProcessPrimaryLockCount(v11);
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
}
