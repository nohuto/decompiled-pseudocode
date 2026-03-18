/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x14033DE0C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1401EE8A4 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022400C (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1403473B0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbp
  int HostHandle; // r14d
  int v9; // ebx
  struct DXGGLOBAL *v10; // rax
  struct DXGPROCESS *v11; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2887;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      2887LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (_DWORD)v2 )
  {
    if ( (*((_DWORD *)this + 103) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2);
      if ( HostHandle )
      {
        v9 = *((_DWORD *)Current + 122);
        v10 = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v10 + 206), v9, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v2);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2913;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 != m_cReference", 2913LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = DXGPROCESS::GetCurrent(v6);
  WdLogSingleEntry3(4LL, this, v2, v11);
  WdLogGlobalForLineNumber = 2921;
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
