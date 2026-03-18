/*
 * XREFs of ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A6990
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1401A68A8 (--0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z.c)
 */

void __fastcall CActivationObjectManager::TrackForegroundChange::~TrackForegroundChange(
        CActivationObjectManager::TrackForegroundChange *this)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rax
  CActivationObjectManager::ActivationObjectDescriptor *v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  UserSessionState = W32GetUserSessionState(this);
  v3 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
         (CActivationObjectManager::ActivationObjectDescriptor *)v4,
         *(PEPROCESS **)(*(_QWORD *)(UserSessionState + 18920) + 32LL));
  *(_OWORD *)v1 = *(_OWORD *)v3;
  *(_QWORD *)(v1 + 16) = *((_QWORD *)v3 + 2);
}
