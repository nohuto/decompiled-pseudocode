/*
 * XREFs of ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800244A4
 * Callers:
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800242D0 (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x180024850 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ?StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800B3518 (-StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801A4898 (-StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18020B4B0 (-StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)SingleViewExperienceLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
