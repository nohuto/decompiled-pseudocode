/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0
 * Callers:
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400117B8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400118C0 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140014484 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001FDC0 (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x14001FED0 (GreAcquireHmgrSemaphore.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400234A8 (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgnPublish @ 0x1400C21C0 (GreLockVisRgnPublish.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1401308E8 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401491F8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140198250 (--$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401995F0 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, a2, a3, a1);
  }
  return result;
}
