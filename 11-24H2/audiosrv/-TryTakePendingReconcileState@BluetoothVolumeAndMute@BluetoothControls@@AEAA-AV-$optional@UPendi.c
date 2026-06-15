/*
 * XREFs of ?TryTakePendingReconcileState@BluetoothVolumeAndMute@BluetoothControls@@AEAA?AV?$optional@UPendingReconcileState@BluetoothVolumeAndMute@BluetoothControls@@@std@@XZ @ 0x1800D84FC
 * Callers:
 *     ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC (-DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::TryTakePendingReconcileState(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  __int128 v9; // xmm6
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  RTL_SRWLOCK *v16; // [rsp+90h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 168);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  v16 = v2;
  if ( *(_BYTE *)(a1 + 244) || *(_BYTE *)(a1 + 216) || *(_BYTE *)(a1 + 240) || *(_BYTE *)(a1 + 268) )
  {
    v5 = *(_OWORD *)(a1 + 196);
    BYTE4(v12) = 0;
    v6 = *(_OWORD *)(a1 + 212);
    BYTE12(v13) = 0;
    v7 = *(_OWORD *)(a1 + 228);
    LOBYTE(v14) = 0;
    v8 = *(_OWORD *)(a1 + 244);
    *(_WORD *)((char *)&v14 + 1) = 0;
    v9 = *(_OWORD *)(a1 + 260);
    BYTE3(v14) = 0;
    BYTE8(v15) = 0;
    BYTE12(v15) = 0;
    *(_OWORD *)(a1 + 196) = v11;
    *(_WORD *)((char *)&v15 + 13) = 0;
    HIBYTE(v15) = 0;
    *(_OWORD *)(a1 + 212) = v12;
    *(_BYTE *)(a2 + 80) = 1;
    *(_OWORD *)a2 = v5;
    *(_OWORD *)(a1 + 228) = v13;
    *(_OWORD *)(a2 + 16) = v6;
    *(_OWORD *)(a2 + 32) = v7;
    *(_OWORD *)(a1 + 244) = v14;
    *(_OWORD *)(a2 + 48) = v8;
    *(_OWORD *)(a1 + 260) = v15;
    *(_OWORD *)(a2 + 64) = v9;
  }
  else
  {
    *(_BYTE *)(a2 + 80) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
  return a2;
}
