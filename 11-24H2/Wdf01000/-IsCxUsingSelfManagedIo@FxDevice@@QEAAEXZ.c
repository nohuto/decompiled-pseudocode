/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x140079D84
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x140044944 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  FxDevice *Flink; // rdx
  char v2; // r9
  __int64 i; // r8
  FxCxCallbackType smIoCallbackList[7]; // [rsp+0h] [rbp-18h]

  *(_DWORD *)smIoCallbackList = 184812290;
  Flink = (FxDevice *)this->m_CxDeviceInfoListHead.Flink;
  v2 = 0;
  *(_WORD *)&smIoCallbackList[4] = 3340;
  smIoCallbackList[6] = FxCxCallbackSmIoCleanup;
  while ( Flink != (FxDevice *)&this->m_CxDeviceInfoListHead && Flink && !v2 )
  {
    for ( i = 0LL; (unsigned int)i < 7; i = (unsigned int)(i + 1) )
    {
      if ( *((_QWORD *)&Flink->m_DeviceBase + (unsigned __int8)smIoCallbackList[i]) )
      {
        v2 = 1;
        break;
      }
    }
    Flink = (FxDevice *)Flink->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
  }
  return v2;
}
