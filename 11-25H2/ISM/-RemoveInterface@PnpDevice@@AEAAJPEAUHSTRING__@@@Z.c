/*
 * XREFs of ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E46E8
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800726C8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 */

__int64 __fastcall PnpDevice::RemoveInterface(PnpDevice *this, HSTRING string1)
{
  HSTRING v2; // rax
  bool v4; // zf
  int v5; // eax
  int v6; // eax
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HSTRING)*((_QWORD *)this + 4);
  if ( string1 )
  {
    if ( !v2 )
      return 1LL;
    result = 0;
    if ( WindowsCompareStringOrdinal(string1, v2, &result) < 0 )
      return 1LL;
    v4 = result == 0;
  }
  else
  {
    v4 = v2 == 0LL;
  }
  if ( !v4 )
    return 1LL;
  v5 = std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)this + 31);
  if ( !v5 )
    return 2147549183LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) >= 2 )
      return 2147549183LL;
  }
  else
  {
    *(GUID *)((char *)this + 72) = GUID_NULL;
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  PnpDevice::CloseInterface(this);
  return 0LL;
}
