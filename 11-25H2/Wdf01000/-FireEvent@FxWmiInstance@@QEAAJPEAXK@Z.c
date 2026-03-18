/*
 * XREFs of ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1400732F4
 * Callers:
 *     imp_WdfWmiInstanceFireEvent @ 0x140073290 (imp_WdfWmiInstanceFireEvent.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x140073460 (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxWmiInstance::FireEvent(FxWmiInstance *this, void *EventBuffer, unsigned int EventBufferSize)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  unsigned int v6; // esi
  __int64 Pool2; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // esi
  __int64 m_ObjectSize; // rax
  const void *_a1; // rdi
  FxWmiProvider *m_Provider; // rcx
  _GUID m_Guid; // xmm0
  FxWmiIrpHandler *m_Parent; // rcx
  ULONG v16; // eax
  FxWmiProvider *v17; // rcx

  p_m_Globals = &this->m_Globals;
  v6 = EventBuffer != 0LL ? EventBufferSize : 0;
  Pool2 = ExAllocatePool2(64LL, v6 + 64, this->m_Globals->Tag);
  v8 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    m_Provider = this->m_Provider;
    m_Guid = m_Provider->m_Guid;
    m_Parent = m_Provider->m_Parent;
    *(_GUID *)(Pool2 + 24) = m_Guid;
    v16 = IoWMIDeviceObjectToProviderId(m_Parent->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    *v8 = v6 + 64;
    v8[1] = v16;
    v17 = this->m_Provider;
    *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
    v8[11] = 138;
    v8[13] = FxWmiProvider::GetInstanceIndex(v17, this);
    v8[15] = v6;
    v8[14] = 64;
    if ( EventBuffer )
      memmove(v8 + 16, EventBuffer, v6);
    v9 = IoWMIWriteEvent(v8);
    if ( v9 < 0 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741670;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xAu, WPP_FxWmiInstance_cpp_Traceguids, _a1, -1073741670);
  }
  return (unsigned int)v9;
}
