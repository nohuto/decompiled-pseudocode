/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x140041AC8
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400419B0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x140095330 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1400521E4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // si
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  FX_POOL **v8; // rax
  FX_POOL **v9; // rbx
  unsigned int v10; // ebx
  FxVerifierLock *v12; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  __m128i v16; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  if ( !this->m_EnumInfo )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v12 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    {
      FxVerifierLock::Lock(v12, &irql, a3);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    if ( !this->m_EnumInfo )
    {
      m_Globals = this->m_Globals;
      v7 = retaddr;
      v16.m128i_i64[0] = 0LL;
      v16.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v7 = 0LL;
      v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 0x88uLL, m_Globals->Tag, v7);
      v9 = v8;
      if ( v8 )
      {
        FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)v8);
        *((_DWORD *)v9 + 22) = 0;
        *((_WORD *)v9 + 46) = 0;
        *((_BYTE *)v9 + 94) = 0;
        v9[10] = 0LL;
        v9[7] = (FX_POOL *)(v9 + 6);
        v9[6] = (FX_POOL *)(v9 + 6);
        v9[9] = (FX_POOL *)(v9 + 8);
        v9[8] = (FX_POOL *)(v9 + 8);
        v9[5] = (FX_POOL *)FxWaitLockTransactionedList::`vftable';
        FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)(v9 + 12));
      }
      else
      {
        v9 = 0LL;
      }
      this->m_EnumInfo = (FxEnumerationInfo *)v9;
      if ( !v9 )
      {
        v10 = -1073741670;
        m_DeviceBase = this->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Du, WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
        goto LABEL_12;
      }
      KeInitializeEvent((PRKEVENT)v9, SynchronizationEvent, 1u);
      *((_BYTE *)v9 + 24) = 1;
      KeInitializeEvent((PRKEVENT)v9 + 4, SynchronizationEvent, 1u);
      *((_BYTE *)v9 + 120) = 1;
    }
    v10 = 0;
LABEL_12:
    FxNonPagedObject::Unlock(this, v4, v5);
    return v10;
  }
  return 0LL;
}
