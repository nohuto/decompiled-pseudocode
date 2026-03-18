/*
 * XREFs of EngAcquireSemaphoreShared @ 0x140021030
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140021054 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002115C (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x140021FD0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022160 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022378 (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreIsDisconnectDeviceAttached @ 0x140037DB8 (GreIsDisconnectDeviceAttached.c)
 *     GreSfmGetNotificationTokens @ 0x140087980 (GreSfmGetNotificationTokens.c)
 *     DxgkEngVisRgnUniq @ 0x1400F3650 (DxgkEngVisRgnUniq.c)
 * Callees:
 *     <none>
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared();
}
