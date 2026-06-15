/*
 * XREFs of ?GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z @ 0x18006FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothMute::GetMute(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rsi
  PVOID Ptr; // rbx
  int v6; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+40h] [rbp+8h]

  v4 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  if ( LOBYTE(this[14].Ptr)
    && this[13].Ptr
    && (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)&this[14].Ptr + 1) )
  {
    Ptr = (PVOID)*((_QWORD *)this[13].Ptr + 15);
    if ( Ptr )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)Ptr + 8LL))(*((_QWORD *)this[13].Ptr + 15));
  }
  else
  {
    Ptr = this[15].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(this[15].Ptr);
  }
  v6 = (*(__int64 (__fastcall **)(PVOID, int *))(*(_QWORD *)Ptr + 80LL))(Ptr, a2);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v6);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v6;
  }
  else
  {
    LODWORD(v9) = *a2;
    BYTE4(v9) = 1;
    this[22].Ptr = v9;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return 0LL;
  }
}
