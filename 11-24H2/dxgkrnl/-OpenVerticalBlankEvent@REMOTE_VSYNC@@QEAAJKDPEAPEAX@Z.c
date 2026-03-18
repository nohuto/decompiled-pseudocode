/*
 * XREFs of ?OpenVerticalBlankEvent@REMOTE_VSYNC@@QEAAJKDPEAPEAX@Z @ 0x1401F3B14
 * Callers:
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403C54B8 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::OpenVerticalBlankEvent(PVOID *this, ACCESS_MASK a2, KPROCESSOR_MODE a3, void **a4)
{
  NTSTATUS result; // eax

  *a4 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!(DesiredAccess & EVENT_MODIFY_STATE)",
      155LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = REMOTE_VSYNC::EnsureEmulationRunning((REMOTE_VSYNC *)this);
  if ( result >= 0 )
  {
    if ( !this[2] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 164;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pVSyncEvent", 164LL, 0LL, 0LL, 0LL, 0LL);
    }
    return ObOpenObjectByPointer(this[2], 0, 0LL, a2, (POBJECT_TYPE)ExEventObjectType, a3, a4);
  }
  return result;
}
