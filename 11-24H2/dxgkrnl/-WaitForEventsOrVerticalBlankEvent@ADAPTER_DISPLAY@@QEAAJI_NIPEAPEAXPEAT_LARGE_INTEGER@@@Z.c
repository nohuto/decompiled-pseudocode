/*
 * XREFs of ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x14032D7E0
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        void **Src,
        PLARGE_INTEGER Timeout)
{
  __int64 v7; // rcx
  __int64 v9; // rbx
  __int64 v10; // r14
  ULONG v11; // ebx
  KWAIT_REASON v12; // r9d
  const wchar_t *v14; // r9
  PVOID Object[64]; // [rsp+50h] [rbp-E38h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+250h] [rbp-C38h] BYREF

  v7 = *((_QWORD *)this + 2);
  v9 = a4;
  v10 = a2;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v7 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7592;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!IsCoreResourceSharedOwner()", 7592LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(Object, 0, sizeof(Object));
  if ( !(_DWORD)v9 )
    goto LABEL_4;
  if ( !Src )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v14 = L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7602;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return -1073741811;
  }
  if ( (unsigned int)v9 >= 0x3F )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v14 = L"Invalid number of wait objects in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7609;
    goto LABEL_15;
  }
  memmove(Object, Src, 8 * v9);
LABEL_4:
  Object[v9] = *(PVOID *)(4024 * v10 + *((_QWORD *)this + 16) + 904);
  v11 = v9 + 1;
  if ( v11 > 0x40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7622;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Count <= _countof(Objects)", 7622LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
    v12 = UserRequest;
  else
    v12 = Executive;
  return KeWaitForMultipleObjects(v11, Object, WaitAny, v12, 0, 0, Timeout, &WaitBlockArray);
}
