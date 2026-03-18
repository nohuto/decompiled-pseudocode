/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0
 * Callers:
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     SkipWindowOnMonitor @ 0x1400F6EBC (SkipWindowOnMonitor.c)
 *     IsSmallerThanScreen @ 0x1400F7364 (IsSmallerThanScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400F73EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     NtUserSetWindowShowState @ 0x14029F460 (NtUserSetWindowShowState.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  INT *v9; // rcx
  struct CHECKPOINT *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)((__int64 (*)(void))GetDispInfo)() == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 104);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_5;
    v14 = 0LL;
    v11 = CHECKPOINT::Get(a1);
    if ( v11 )
    {
      v9 = (INT *)&v14;
      v12 = *(_OWORD *)((char *)v11 + 20);
      v13 = *((_QWORD *)a1 + 5);
      v14 = v12;
      v8 = *(unsigned int *)(v13 + 288);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v9, a2, v8);
      goto LABEL_7;
    }
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v7 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_5:
      v8 = *((_QWORD *)a1 + 5);
      v9 = (INT *)(v8 + 88);
      if ( !a3 )
      {
        LODWORD(v8) = *(_DWORD *)(v8 + 288);
        return (struct tagMONITOR *)MonitorFromRect(v9, a2, v8);
      }
      v14 = *(_OWORD *)v9;
      v8 = *(unsigned int *)(v8 + 288);
LABEL_7:
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, _QWORD))LogicalToPhysicalDPIRect)(&v14, &v14, v8, 0LL);
      LODWORD(v8) = 18;
      v9 = (INT *)&v14;
      return (struct tagMONITOR *)MonitorFromRect(v9, a2, v8);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 104);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 104);
  return 0LL;
}
