/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x180036178 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx

  v2 = (__int64 *)*((_QWORD *)this + 68);
  for ( i = (__int64 *)*((_QWORD *)this + 67); i != v2; ++i )
    std::_Func_class<void,InputContext *>::operator()(*i, (__int64)a2);
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
