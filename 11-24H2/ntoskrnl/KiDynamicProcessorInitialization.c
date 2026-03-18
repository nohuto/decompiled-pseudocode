/*
 * XREFs of KiDynamicProcessorInitialization @ 0x1405B6BFC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405BD558 (KeOptimizeSpecCtrlSettings.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140B56770 (KeWriteProtectProcessorState.c)
 */

void __fastcall KiDynamicProcessorInitialization(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(unsigned int *)(a1 + 36);
  Affinity = 0LL;
  v3 = *((_DWORD *)KiGlobalState + v1);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << (v3 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeWriteProtectProcessorState(a1 - 384);
  LOBYTE(v4) = 1;
  KeOptimizeSpecCtrlSettings(v4);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
