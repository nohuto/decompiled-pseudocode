/*
 * XREFs of ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403A545C
 * Callers:
 *     DxgkDispMgrCreate @ 0x1403A5150 (DxgkDispMgrCreate.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(
        DXGDISPLAYMANAGEROBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT_CONTAINER *a2)
{
  if ( *((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 598;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_Object == nullptr", 598LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = a2;
}
