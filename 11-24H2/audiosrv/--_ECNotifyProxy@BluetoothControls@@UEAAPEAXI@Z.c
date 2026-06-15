/*
 * XREFs of ??_ECNotifyProxy@BluetoothControls@@UEAAPEAXI@Z @ 0x1800D2A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BluetoothControls::CNotifyProxy *__fastcall BluetoothControls::CNotifyProxy::`vector deleting destructor'(
        BluetoothControls::CNotifyProxy *this,
        char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
