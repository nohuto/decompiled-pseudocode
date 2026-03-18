/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401A90D8
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402E5784 (InitCreateUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rbx
  char *v2; // rcx

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v0);
    v2 = *(char **)(UserSessionState + 18864);
    if ( v2 )
    {
      GreDeleteFastMutex(v2);
      *(_QWORD *)(UserSessionState + 18864) = 0LL;
    }
  }
}
