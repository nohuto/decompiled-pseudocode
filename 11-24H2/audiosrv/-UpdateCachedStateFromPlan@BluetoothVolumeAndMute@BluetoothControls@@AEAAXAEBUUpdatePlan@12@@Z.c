/*
 * XREFs of ?UpdateCachedStateFromPlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAXAEBUUpdatePlan@12@@Z @ 0x1800D8628
 * Callers:
 *     ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC (-DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall BluetoothControls::BluetoothVolumeAndMute::UpdateCachedStateFromPlan(
        RTL_SRWLOCK *this,
        const struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *a2)
{
  RTL_SRWLOCK *v2; // rbx
  void *v5; // [rsp+30h] [rbp+8h]
  __int16 v6; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  v7 = v2;
  if ( *((_BYTE *)a2 + 56) )
  {
    BYTE1(v5) = 1;
    LOBYTE(v5) = *((_DWORD *)a2 + 13) != 0;
    BYTE4(v5) = 1;
    LOWORD(this[24].Ptr) = (_WORD)v5;
    LODWORD(v5) = *((_DWORD *)a2 + 12);
    this[23].Ptr = v5;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 12) - 0.0) & _xmm) >= 0.001 )
    {
      LODWORD(v5) = *((_DWORD *)a2 + 12);
      BYTE4(v5) = 1;
      this[22].Ptr = v5;
    }
  }
  if ( *((_BYTE *)a2 + 20) )
  {
    LODWORD(v5) = *(_DWORD *)a2;
    BYTE4(v5) = 1;
    this[23].Ptr = v5;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 0.0) & _xmm) >= 0.001 )
    {
      LODWORD(v5) = *(_DWORD *)a2;
      BYTE4(v5) = 1;
      this[22].Ptr = v5;
    }
  }
  if ( *((_BYTE *)a2 + 44) )
  {
    HIBYTE(v6) = 1;
    LOBYTE(v6) = *((_DWORD *)a2 + 6) != 0;
    LOWORD(this[24].Ptr) = v6;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
}
