/*
 * XREFs of ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x14003932C
 * Callers:
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FF8 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

DXGKEYEDMUTEXLOCK *__fastcall DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK(DXGKEYEDMUTEXLOCK *this, struct DXGKEYEDMUTEX *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = (char *)a2 + 112;
  if ( a2 == (struct DXGKEYEDMUTEX *)-112LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 24LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  return this;
}
