/*
 * XREFs of ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x14007A3C0
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1402044F4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x14020544C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::GetUsedEntryCount(HMGRTABLE *this)
{
  if ( *((_DWORD *)this + 4) < *((_DWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 159;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_TableSize >= m_FreeCount", 159LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5));
}
