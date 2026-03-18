/*
 * XREFs of ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514
 * Callers:
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14004721C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E09E4 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1401588DC (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401A7028 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1402182E0 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 */

__int64 __fastcall CActivationObjectManager::NotifySystemSateChanged(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx

  if ( a3 == 2 )
  {
    v8 = *(_QWORD *)(a2 + 72);
    goto LABEL_6;
  }
  if ( a3 == 3 )
  {
    v8 = 0LL;
LABEL_6:
    IVForegroundSync::ivSendForegroundUpdate(v8, *a4);
  }
  PsGetProcessId(*(PEPROCESS *)(a2 + 24));
  PsGetThreadId(*(PETHREAD *)(a2 + 32));
  UserSessionState = W32GetUserSessionState(v5);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 10);
}
