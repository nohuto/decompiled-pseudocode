/*
 * XREFs of ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x140059040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcLq @ 0x1400593A4 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qqcq @ 0x14005950C (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_qqcqL @ 0x14005968C (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1400597F4 (WPP_IFR_SF_qqcqLd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::Dispatch(FxPkgPnp *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int level; // edi
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a5; // rcx
  FxPkgPnp_vtbl *v8; // rcx
  __int64 v9; // rax
  _FX_DRIVER_GLOBALS *v11; // rcx
  FxDeviceBase *v12; // r8
  const void *v13; // rcx
  FxDeviceBase *v14; // r8
  const void *v15; // rcx
  bool v16; // zf
  _FX_DRIVER_GLOBALS *v17; // rcx
  FxDeviceBase *v18; // r10
  const void *v19; // r8
  unsigned int Length; // r8d
  unsigned __int16 v21; // r9
  FxDeviceBase *v22; // r11
  const void *v23; // r10
  FxDeviceBase *v24; // r10
  const void *v25; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  _IRP *_a1; // [rsp+70h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  _a1 = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
    Irp = _a1;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  level = CurrentStackLocation->MinorFunction;
  if ( CurrentStackLocation->MajorFunction == 27 )
  {
    if ( level <= 5 )
    {
      if ( level == 5 || !(_BYTE)level || level == 1 || level == 2 || level == 3 )
        goto LABEL_21;
      v16 = level == 4;
    }
    else
    {
      switch ( level )
      {
        case 6u:
          goto LABEL_21;
        case 7u:
          m_DeviceBase = this->m_DeviceBase;
          _a5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_DeviceBase->m_ObjectSize )
            _a5 = 0LL;
          WPP_IFR_SF_qqcLq(
            this->m_Globals,
            (unsigned __int8)Irp,
            (unsigned int)m_DeviceBase,
            (unsigned __int16)CurrentStackLocation,
            traceGuid,
            _a5,
            m_DeviceBase->m_DeviceObject.m_DeviceObject,
            level,
            CurrentStackLocation->Parameters.Read.Length,
            Irp);
          goto LABEL_10;
        case 0x11u:
        case 0x14u:
LABEL_21:
          v12 = this->m_DeviceBase;
          v13 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v12->m_ObjectSize )
            v13 = 0LL;
          WPP_IFR_SF_qqcq(
            this->m_Globals,
            4u,
            0xCu,
            0x10u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v13,
            v12->m_DeviceObject.m_DeviceObject,
            level,
            Irp);
          goto LABEL_10;
      }
      v16 = level == 23;
    }
    if ( !v16 )
    {
      v17 = this->m_Globals;
      if ( !v17->FxVerboseOn )
      {
LABEL_11:
        v8 = this->__vftable;
        if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction <= 0x17u )
        {
          v9 = (__int64)v8->GetDispatchPnp(this);
          return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v9
                                                                + 8LL
                                                                * _a1->Tail.Overlay.CurrentStackLocation->MinorFunction))(
                   this,
                   &_a1);
        }
        return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v8->FireAndForgetIrp)(this, &_a1);
      }
      v18 = this->m_DeviceBase;
      v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18->m_ObjectSize )
        v19 = 0LL;
      WPP_IFR_SF_qqcq(
        v17,
        5u,
        0xCu,
        0x12u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v19,
        v18->m_DeviceObject.m_DeviceObject,
        level,
        Irp);
LABEL_10:
      Irp = _a1;
      goto LABEL_11;
    }
    goto LABEL_21;
  }
  if ( !(_BYTE)level )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v21 = 19;
    goto LABEL_42;
  }
  if ( level - 2 < 2 )
  {
    if ( CurrentStackLocation->Parameters.Create.Options )
    {
      v14 = this->m_DeviceBase;
      v15 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qqcqL(
        this->m_Globals,
        (unsigned __int8)Irp,
        (unsigned int)v14,
        (unsigned __int16)CurrentStackLocation,
        traceGuid,
        v15,
        v14->m_DeviceObject.m_DeviceObject,
        level,
        Irp,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
      goto LABEL_28;
    }
    Length = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v21 = 20;
LABEL_42:
    v22 = this->m_DeviceBase;
    v23 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22->m_ObjectSize )
      v23 = 0LL;
    WPP_IFR_SF_qqcqLd(
      this->m_Globals,
      (unsigned __int8)Irp,
      Length,
      v21,
      traceGuid,
      v23,
      v22->m_DeviceObject.m_DeviceObject,
      level,
      Irp,
      Length,
      Length - 1);
    goto LABEL_28;
  }
  v11 = this->m_Globals;
  if ( !v11->FxVerboseOn )
    goto LABEL_17;
  v24 = this->m_DeviceBase;
  v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v24->m_ObjectSize )
    v25 = 0LL;
  WPP_IFR_SF_qqcq(
    v11,
    5u,
    0xCu,
    0x16u,
    WPP_FxPkgPnp_cpp_Traceguids,
    v25,
    v24->m_DeviceObject.m_DeviceObject,
    level,
    Irp);
LABEL_28:
  Irp = _a1;
LABEL_17:
  v8 = this->__vftable;
  if ( Irp->Tail.Overlay.CurrentStackLocation->MinorFunction <= 3u )
  {
    v9 = (__int64)v8->GetDispatchPower(this);
    return (*(__int64 (__fastcall **)(FxPkgPnp *, _IRP **))(v9
                                                          + 8LL * _a1->Tail.Overlay.CurrentStackLocation->MinorFunction))(
             this,
             &_a1);
  }
  return ((__int64 (__fastcall *)(FxPkgPnp *, _IRP **))v8->FireAndForgetIrp)(this, &_a1);
}
