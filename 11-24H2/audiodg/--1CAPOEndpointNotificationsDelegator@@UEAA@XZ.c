/*
 * XREFs of ??1CAPOEndpointNotificationsDelegator@@UEAA@XZ @ 0x14003BD0C
 * Callers:
 *     ??_ECDeviceGraphConnectionBuffer@@UEAAPEAXI@Z @ 0x14003BCD0 (--_ECDeviceGraphConnectionBuffer@@UEAAPEAXI@Z.c)
 *     ??_GCAPOEndpointNotificationsDelegator@@UEAAPEAXI@Z @ 0x14005F1C0 (--_GCAPOEndpointNotificationsDelegator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOEndpointNotificationsDelegator::~CAPOEndpointNotificationsDelegator(
        CAPOEndpointNotificationsDelegator *this)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
