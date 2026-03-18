/*
 * XREFs of ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x14009BD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x14002A5A0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     FxIsEqualGuid @ 0x14003167C (FxIsEqualGuid.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const _GUID *v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v7; // r8
  unsigned __int16 *p_m_ObjectSize; // r12
  WDFIOTARGET__ *v9; // rbx
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFIOTARGET__ *); // rax
  int v12; // eax
  int v13; // edx
  WDFIOTARGET__ *v14; // rbx
  const void *v15; // rax
  void (__fastcall *v16)(WDFIOTARGET__ *); // rax
  const void *v17; // rax
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-A8h] BYREF

  FxObject::AddRef(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    51,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  m_Globals = Context->m_Globals;
  v5 = (const _GUID *)(NotificationStructure + 4);
  v6 = 0;
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE) )
  {
    p_m_ObjectSize = &Context->m_ObjectSize;
    v9 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1);
    }
    m_Method = Context->m_EvtQueryRemove.m_Method;
    if ( m_Method )
    {
      if ( !*p_m_ObjectSize )
        v9 = 0LL;
      v12 = m_Method(v9);
LABEL_41:
      v6 = v12;
      goto LABEL_42;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( !*p_m_ObjectSize )
        v9 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v9);
    }
    v13 = 1;
    goto LABEL_26;
  }
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE) )
  {
    v14 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      v15 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v15);
    }
    v16 = Context->m_EvtRemoveComplete.m_Method;
    if ( !v16 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( !Context->m_ObjectSize )
          v14 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
      }
      v13 = 2;
LABEL_26:
      FxIoTargetRemote::Close(Context, v13, v7);
      goto LABEL_42;
    }
  }
  else
  {
    if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED) )
      goto LABEL_42;
    v14 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      v17 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17);
    }
    v16 = Context->m_EvtRemoveCanceled.m_Method;
    if ( !v16 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( !Context->m_ObjectSize )
          v14 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
      }
      memset(&params.EvtIoTargetQueryRemove, 0, 0x80uLL);
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v12 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_41;
    }
  }
  if ( !Context->m_ObjectSize )
    v14 = 0LL;
  v16(v14);
LABEL_42:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return v6;
}
