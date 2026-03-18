/*
 * XREFs of GreIncQuotaCount @ 0x140062A60
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14006233C (HMChangeOwnerPheProcessWorker.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x140062AA0 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

void __fastcall GreIncQuotaCount(struct _W32PROCESS *a1)
{
  HSEMAPHORE v2; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v2);
  HmgpIncProcessHandleCountEx(a1);
  SEMOBJ<20>::vUnlock(&v2);
}
