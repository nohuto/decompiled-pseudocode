/*
 * XREFs of ?ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0BA0
 * Callers:
 *     NtUserConfigureActivationObject @ 0x14013A410 (NtUserConfigureActivationObject.c)
 * Callees:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0C08 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall ForegroundManagement::ConfigureActivationObject(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return CActivationObjectManager::ConfigureActivationObject(*(_QWORD *)(UserSessionState + 18920), a1, a2, a3, a4, a5);
}
