/*
 * XREFs of ?OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z @ 0x1401979A4
 * Callers:
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AC9B0 (DxgkOpenVerticalBlankEventInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 6959;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!(DesiredAccess & EVENT_MODIFY_STATE)",
      6959LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return ObOpenObjectByPointer(
           *(PVOID *)(3984 * v7 + *((_QWORD *)this + 16) + 904),
           0,
           0LL,
           a3,
           (POBJECT_TYPE)ExEventObjectType,
           a4,
           Handle);
}
