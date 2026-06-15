/*
 * XREFs of ?OnNotify@CNotifyProxy@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothControls::CNotifyProxy::OnNotify(
        BluetoothControls::CNotifyProxy *this,
        __int64 a2,
        const struct _GUID *a3)
{
  return (*((__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))this + 3))(
           *((_QWORD *)this + 2) + *((int *)this + 8),
           a2,
           a3);
}
