/*
 * XREFs of LdrpSendPostSnapNotifications @ 0x1800707A0
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x180004CE0 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180070DD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpSendDllNotifications @ 0x1800712E4 (LdrpSendDllNotifications.c)
 *     LdrpCheckModule @ 0x180071380 (LdrpCheckModule.c)
 *     AVrfDllLoadNotification @ 0x1800EC804 (AVrfDllLoadNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpSendPostSnapNotifications(__int64 a1)
{
  int Notification; // r12d
  void (__fastcall *v3)(__int64); // rsi
  unsigned int NtGlobalFlag; // ebp
  _BOOL8 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rcx

  Notification = 0;
  v3 = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v5 = g_pShimmedModuleList != 0LL;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    v6 = MEMORY[0x7FFE0330];
    v3 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               g_pfnSE_DllLoaded,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 != a1 )
  {
    v8 = NtGlobalFlag & 0x100;
    do
    {
      v9 = v7 - 160;
      if ( v8 )
      {
        Notification = AVrfDllLoadNotification(v7 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v7 - 160, v6, 0LL);
      if ( v3 && !g_ShimsLoading )
      {
        v3(v7 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v5 )
        LdrpCheckModule(*(void **)(v9 + 80));
      LdrpSendDllNotifications(v7 - 160, 1LL);
      v10 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      LdrpLogDllState(v10, v9 + 72, 5293LL);
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v7 != a1 );
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  return (unsigned int)Notification;
}
