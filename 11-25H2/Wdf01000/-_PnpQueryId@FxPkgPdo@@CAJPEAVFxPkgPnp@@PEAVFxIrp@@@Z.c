/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400173A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x14006F500 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  signed int Status; // ebx
  unsigned int _a3; // ebp
  FxDeviceBase *m_DeviceBase; // rsi
  __int64 v8; // rax
  size_t v9; // r15
  void *v10; // rax
  unsigned __int64 v11; // rbx
  FxDeviceBase *v12; // rdx
  unsigned __int16 v13; // r9
  const wchar_t *m_Lock; // rbx
  size_t v15; // rsi
  void *Pool2; // rax
  unsigned __int64 v17; // r15
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdx
  unsigned int globals; // [rsp+38h] [rbp-30h]

  m_Globals = This->m_Globals;
  Status = Irp->m_Irp->IoStatus.Status;
  _a3 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( _a3 )
  {
    if ( _a3 == 1 || _a3 == 2 )
    {
      if ( _a3 == 1 )
        m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
      else
        m_Lock = *(const wchar_t **)&This[1].m_PnpState.ByEnum;
      if ( m_Lock )
        v15 = FxCalculateTotalMultiSzStringSize(m_Lock);
      else
        v15 = 4LL;
      Pool2 = (void *)ExAllocatePool2(256LL, v15, m_Globals->Tag);
      v17 = (unsigned __int64)Pool2;
      if ( !Pool2 )
        goto LABEL_12;
      if ( m_Lock )
        memmove(Pool2, m_Lock, v15);
      Irp->m_Irp->IoStatus.Information = v17;
LABEL_24:
      Status = 0;
      return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
    }
    if ( _a3 != 3 && _a3 != 5 )
    {
LABEL_25:
      if ( Status >= 0 )
        return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
      goto LABEL_13;
    }
    if ( _a3 == 3 )
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_NPLock.m_DbgFlagIsInitialized;
    else
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsAddress;
  }
  else
  {
    m_DeviceBase = This[1].m_DeviceBase;
  }
  if ( !m_DeviceBase )
    goto LABEL_25;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v8) );
  v9 = 2 * v8 + 2;
  v10 = (void *)ExAllocatePool2(256LL, v9, m_Globals->Tag);
  v11 = (unsigned __int64)v10;
  if ( v10 )
  {
    memmove(v10, m_DeviceBase, v9);
    Irp->m_Irp->IoStatus.Information = v11;
    goto LABEL_24;
  }
LABEL_12:
  Status = -1073741670;
LABEL_13:
  Irp->m_Irp->IoStatus.Information = 0LL;
  v12 = This->m_DeviceBase;
  if ( Status == -1073741637 )
  {
    v13 = 20;
    globals = -1073741637;
  }
  else
  {
    v13 = 21;
    globals = Status;
  }
  m_ObjectSize = v12->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qDd(m_Globals, (unsigned __int8)_a2, 0xCu, v13, WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, globals);
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
