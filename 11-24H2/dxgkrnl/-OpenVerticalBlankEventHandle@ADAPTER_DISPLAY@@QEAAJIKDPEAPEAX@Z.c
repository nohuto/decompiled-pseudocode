/*
 * XREFs of ?OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z @ 0x140199E30
 * Callers:
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::OpenVerticalBlankEventHandle(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        void **Handle)
{
  __int64 v7; // rbp

  v7 = a2;
  *Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7066;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!(DesiredAccess & EVENT_MODIFY_STATE)",
      7066LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return ObOpenObjectByPointer(
           *(PVOID *)(4024 * v7 + *((_QWORD *)this + 16) + 904),
           0,
           0LL,
           a3,
           (POBJECT_TYPE)ExEventObjectType,
           a4,
           Handle);
}
