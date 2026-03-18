/*
 * XREFs of ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403B28CC
 * Callers:
 *     DxgkDispMgrCreate @ 0x1403B25C0 (DxgkDispMgrCreate.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(
        DXGDISPLAYMANAGEROBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT_CONTAINER *a2)
{
  if ( *((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 588;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_Object == nullptr", 588LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = a2;
}
