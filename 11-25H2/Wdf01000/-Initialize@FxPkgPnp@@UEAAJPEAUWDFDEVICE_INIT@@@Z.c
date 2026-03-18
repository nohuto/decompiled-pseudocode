/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140050DA0
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400419B0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14004F320 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x14004087C (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x140051064 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140051248 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x140060C3C (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x14007521C (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z @ 0x14007B118 (-RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *v6; // r8
  _WDF_OBJECT_ATTRIBUTES *v7; // r9
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  char Raw; // al
  FxObject **p_m_Resources; // rbx
  int result; // eax
  int v12; // eax
  FxDevice *v13; // r8
  _WDF_OBJECT_ATTRIBUTES *v14; // r9
  FxObject *v15; // rcx
  int v16; // r14d
  unsigned int RefCount; // edx
  FxTagTracker *m_Lock; // rcx
  FxObject **p_m_ResourcesRaw; // rbx
  int v20; // eax
  FxObject *v21; // rcx
  int v22; // ebp
  unsigned int v23; // edx
  FxTagTracker *v24; // rcx
  int v25; // r10d
  ULONG Tag; // ecx
  void *v27; // rax
  FX_POOL **v28; // rax
  __m128i v29; // [rsp+30h] [rbp-38h]
  __m128i v30; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  p_m_QueryInterfaceLock->m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner != WdfTrue )
  {
    if ( PowerPolicyOwner == WdfFalse
      || (DeviceInit->InitType != FxDeviceInitTypePdo
        ? (Raw = DeviceInit->Fdo.Filter == 0)
        : (Raw = DeviceInit->Pdo.Raw),
          !Raw) )
    {
LABEL_6:
      p_m_Resources = &this->m_Resources;
      result = FxCmResList::_CreateAndInit(&this->m_Resources, m_Globals, v6, v7, 0);
      if ( result >= 0 )
      {
        v12 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, this->m_DeviceBase, 1u);
        v15 = *p_m_Resources;
        v16 = v12;
        if ( v12 < 0 )
        {
          FxObject::DeleteFromFailedCreate(v15);
          *p_m_Resources = 0LL;
          return v16;
        }
        else
        {
          RefCount = _InterlockedIncrement(&v15->m_Refcnt);
          if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
          {
            m_Lock = (FxTagTracker *)v15[-1].m_SpinLock.m_Lock;
            if ( m_Lock )
              FxTagTracker::UpdateTagHistory(
                m_Lock,
                this,
                598,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
                TagAddRef,
                RefCount);
          }
          p_m_ResourcesRaw = &this->m_ResourcesRaw;
          result = FxCmResList::_CreateAndInit(&this->m_ResourcesRaw, m_Globals, v13, v14, 0);
          if ( result >= 0 )
          {
            v20 = FxObject::Commit(*p_m_ResourcesRaw, 0LL, 0LL, this->m_DeviceBase, 1u);
            v21 = *p_m_ResourcesRaw;
            v22 = v20;
            if ( v20 < 0 )
            {
              FxObject::DeleteFromFailedCreate(v21);
              *p_m_ResourcesRaw = 0LL;
              return v22;
            }
            else
            {
              v23 = _InterlockedIncrement(&v21->m_Refcnt);
              if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
              {
                v24 = (FxTagTracker *)v21[-1].m_SpinLock.m_Lock;
                if ( v24 )
                  FxTagTracker::UpdateTagHistory(
                    v24,
                    this,
                    627,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
                    TagAddRef,
                    v23);
              }
              v25 = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
              if ( v25 >= 0 )
              {
                if ( this->m_PowerPolicyMachine.m_Owner )
                  FxPkgPnp::RegisterPowerPolicyCallbacks(this, &DeviceInit->PnpPower.PolicyEventCallbacks);
              }
              return v25;
            }
          }
        }
      }
      return result;
    }
  }
  Tag = m_Globals->Tag;
  v29.m128i_i64[0] = 0LL;
  v29.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v27 = retaddr;
  else
    v27 = 0LL;
  v30 = v29;
  v28 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v30, 0x3B8uLL, Tag, v27);
  if ( v28 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings((FxPowerPolicyOwnerSettings *)v28, this);
  this->m_PowerPolicyMachine.m_Owner = (FxPowerPolicyOwnerSettings *)v28;
  if ( !v28 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init((FxPowerPolicyOwnerSettings *)v28);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_6;
  }
  return result;
}
