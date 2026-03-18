/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1401F3894
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_ @ 0x1401F3270 (_lambda_3cf49cee9a6682970a5610bc379494ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3D2C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  bool v2; // zf

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1159);
  if ( !*((_BYTE *)this + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1160);
  v2 = (*((_BYTE *)this + 112))-- == 1;
  if ( v2
    && ((*(_BYTE *)(HMPheFromObject(*((int **)this + 10)) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 1152)
     || CInputDest::TestWindowFlag(this, 896)) )
  {
    CInputDest::~CInputDest(this);
  }
}
