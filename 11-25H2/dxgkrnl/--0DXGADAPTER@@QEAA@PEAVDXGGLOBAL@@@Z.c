/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x14018AEE0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x1400654D8 (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x140184828 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  __int64 v3; // rcx
  EVENT_TYPE v4; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 22) = 0;
  *((_DWORD *)DeferredContext + 23) = 44;
  *((_DWORD *)DeferredContext + 32) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_DWORD *)DeferredContext + 31) = 75;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 0;
  *(_QWORD *)(DeferredContext + 156) = 50LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 44) = 2;
  *((_DWORD *)DeferredContext + 50) = 0;
  DeferredContext[205] = 0;
  *(_QWORD *)(DeferredContext + 206) = 256LL;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  *((_DWORD *)DeferredContext + 60) = -1;
  *((_DWORD *)DeferredContext + 61) = -1;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_QWORD *)DeferredContext + 35) = 0LL;
  *((_DWORD *)DeferredContext + 751) = 1000;
  *((_QWORD *)DeferredContext + 376) = 0LL;
  DeferredContext[3017] = 0;
  *((_WORD *)DeferredContext + 1511) = 0;
  *((_DWORD *)DeferredContext + 758) = 0;
  *(_DWORD *)(DeferredContext + 3039) = 0;
  *(_WORD *)(DeferredContext + 3053) = 256;
  *((_WORD *)DeferredContext + 1529) = 0;
  *((_DWORD *)DeferredContext + 769) = 1;
  *((_DWORD *)DeferredContext + 770) = 1;
  *((_DWORD *)DeferredContext + 771) = 1;
  *((_DWORD *)DeferredContext + 772) = 1;
  *((_QWORD *)DeferredContext + 390) = 0LL;
  *((_QWORD *)DeferredContext + 391) = 0LL;
  *((_QWORD *)DeferredContext + 392) = 0LL;
  *((_DWORD *)DeferredContext + 804) = 0;
  *((_QWORD *)DeferredContext + 403) = 0LL;
  *((_QWORD *)DeferredContext + 404) = 0LL;
  *((_DWORD *)DeferredContext + 842) = 0;
  *((_DWORD *)DeferredContext + 843) = -1;
  *((_DWORD *)DeferredContext + 844) = -1;
  *(_QWORD *)(DeferredContext + 3380) = 0LL;
  *((_QWORD *)DeferredContext + 448) = 0LL;
  *(_DWORD *)(DeferredContext + 3661) = 0;
  *(_WORD *)(DeferredContext + 3665) = 256;
  *((_DWORD *)DeferredContext + 917) = 0;
  DXGSPINLOCK::DXGSPINLOCK((DXGSPINLOCK *)(DeferredContext + 3688));
  *((_QWORD *)DeferredContext + 463) = 0LL;
  *((_DWORD *)DeferredContext + 976) = 0;
  *((_DWORD *)DeferredContext + 998) = 0;
  *((_QWORD *)DeferredContext + 504) = 0LL;
  DeferredContext[4040] = 0;
  *((_QWORD *)DeferredContext + 538) = 0LL;
  *((_QWORD *)DeferredContext + 539) = 0LL;
  *((_QWORD *)DeferredContext + 540) = 0LL;
  *((_QWORD *)DeferredContext + 541) = 0LL;
  *((_QWORD *)DeferredContext + 542) = 0LL;
  *((_QWORD *)DeferredContext + 543) = 0LL;
  *((_DWORD *)DeferredContext + 1094) = -1;
  *((_QWORD *)DeferredContext + 544) = 0LL;
  *((_QWORD *)DeferredContext + 545) = 0LL;
  *((_DWORD *)DeferredContext + 1092) = 0;
  *((_DWORD *)DeferredContext + 1093) = 75;
  *((_QWORD *)DeferredContext + 549) = 0LL;
  *((_QWORD *)DeferredContext + 550) = 0LL;
  *((_QWORD *)DeferredContext + 553) = 0LL;
  *((_DWORD *)DeferredContext + 1108) = 0;
  DeferredContext[4632] = 0;
  *((_DWORD *)DeferredContext + 1159) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)(DeferredContext + 4664), 0);
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(DeferredContext + 4828) = 0LL;
  *((_QWORD *)DeferredContext + 600) = 32LL;
  DeferredContext[4808] = 0;
  *((_DWORD *)DeferredContext + 1209) = -1;
  *((_QWORD *)DeferredContext + 608) = 0LL;
  *((_QWORD *)DeferredContext + 609) = 0LL;
  *((_DWORD *)DeferredContext + 1220) = 0;
  *((_DWORD *)DeferredContext + 1221) = 1;
  *((_DWORD *)DeferredContext + 1230) = -1;
  *((_QWORD *)DeferredContext + 611) = 0LL;
  *((_QWORD *)DeferredContext + 612) = 0LL;
  *((_QWORD *)DeferredContext + 613) = 0LL;
  *((_QWORD *)DeferredContext + 614) = 0LL;
  *((_DWORD *)DeferredContext + 1231) = 1;
  *((_QWORD *)DeferredContext + 616) = 0LL;
  *((_QWORD *)DeferredContext + 617) = 0LL;
  *((_DWORD *)DeferredContext + 1236) = 0;
  *((_DWORD *)DeferredContext + 1237) = 1;
  *((_QWORD *)DeferredContext + 621) = 0LL;
  DeferredContext[5024] = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v4, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 256), NotificationEvent, 1u);
  memset(DeferredContext + 288, 0, 0x5B0uLL);
  memset(DeferredContext + 1744, 0, 0x160uLL);
  memset(DeferredContext + 2096, 0, 0xB8uLL);
  memset(DeferredContext + 2288, 0, 0x70uLL);
  memset(DeferredContext + 2400, 0, 0x250uLL);
  *(_OWORD *)(DeferredContext + 184) = 0LL;
  memset(DeferredContext + 3152, 0, 0x40uLL);
  KeInitializeEvent((PRKEVENT)DeferredContext + 129, NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)DeferredContext + 59);
  KeInitializeDpc((PRKDPC)DeferredContext + 60, (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 548);
  KeInitializeTimer((PKTIMER)(DeferredContext + 4496));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4560), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 578);
  *((_QWORD *)DeferredContext + 559) = DeferredContext;
  *((_QWORD *)DeferredContext + 558) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 556) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 560);
  *((_QWORD *)DeferredContext + 467) = DeferredContext + 3728;
  *((_QWORD *)DeferredContext + 466) = DeferredContext + 3728;
  *((_QWORD *)DeferredContext + 469) = DeferredContext + 3744;
  *((_QWORD *)DeferredContext + 468) = DeferredContext + 3744;
  *((_QWORD *)DeferredContext + 620) = DeferredContext + 4952;
  *((_QWORD *)DeferredContext + 619) = DeferredContext + 4952;
  *((_QWORD *)DeferredContext + 626) = DxgkDelayedEvictionThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 627) = DeferredContext;
  *((_QWORD *)DeferredContext + 624) = 0LL;
  return result;
}
