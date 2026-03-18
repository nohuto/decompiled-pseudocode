/*
 * XREFs of ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140019178
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitCount(DXGADAPTERSOURCEHASH *this)
{
  unsigned int v2; // ebx
  DXGADAPTERSOURCEHASH *v4; // [rsp+50h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp-10h]

  v4 = this;
  v5 = 0;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v4 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v4);
  v2 = *((_DWORD *)this + 17);
  if ( v5 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v4);
  return v2;
}
