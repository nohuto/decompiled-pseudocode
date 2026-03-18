/*
 * XREFs of ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009B8C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitCount(DXGADAPTERSOURCEHASH *this)
{
  DXGADAPTERSOURCEHASH *v2; // rdx
  unsigned int v3; // ebx
  DXGADAPTERSOURCEHASH *v5; // [rsp+50h] [rbp-18h] BYREF
  char v6; // [rsp+58h] [rbp-10h]

  v5 = this;
  v6 = 0;
  v2 = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v2 = 0LL;
  }
  if ( *((struct _KTHREAD **)v2 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v5);
  v3 = *((_DWORD *)this + 17);
  if ( v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v5);
  return v3;
}
