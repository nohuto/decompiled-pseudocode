/*
 * XREFs of ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059CD0
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x180059574 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800597E8 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059D98 (-IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___ @ 0x18021C014 (Windows--Internal--ComTaskPool--QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall BroadcastDVRComponent::IsGameDVREnabled(BroadcastDVRComponent *this)
{
  char v2; // di
  __int64 v3; // rcx
  char v4; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  BroadcastDVRComponent *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 444);
  v4 = 0;
  if ( *((_BYTE *)this + 445) )
  {
    if ( BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(this) )
    {
      v3 = *((_QWORD *)this + 32);
      if ( v3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
          v4 = 1;
      }
    }
  }
  *((_BYTE *)this + 444) = v4;
  if ( v2 != v4 )
  {
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    Windows::Internal::ComTaskPool::QueueTask__lambda_2dbad27d1cbd48c28fba7ea818d34463___(
      v7,
      v6,
      *((unsigned int *)this + 60),
      &v8);
    if ( v8 )
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  }
  return *((_BYTE *)this + 444);
}
