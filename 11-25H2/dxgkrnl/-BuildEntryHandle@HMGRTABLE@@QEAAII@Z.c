/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x140385DA0
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1402044F4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x14020544C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 216;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Index < m_TableSize", 216LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 7) & 0x3F | ((v3 & 0xFFFFFF | ((*(_DWORD *)(*(_QWORD *)this
                                                                                                  + 16 * v3
                                                                                                  + 8) & 0xFFFFFFE0) << 19)) << 6);
}
