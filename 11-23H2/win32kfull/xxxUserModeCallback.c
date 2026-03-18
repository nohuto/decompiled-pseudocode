/*
 * XREFs of xxxUserModeCallback @ 0x1C0213134
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxClientLoadOLE @ 0x1C0230F60 (xxxClientLoadOLE.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C001B458 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138954 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C013897C (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 xxxUserModeCallback(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  unsigned int Count; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF
  int v15; // [rsp+8Ch] [rbp+24h]
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v15 = HIDWORD(a4);
  v13[0] = 0LL;
  v14 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va, v8, v9, v10);
  EtwTraceBeginCallback(a1);
  v11 = KeUserModeCallback(a1, a2, a3, v13, &v14);
  EtwTraceEndCallback(a1);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)va);
  if ( v11 >= 0 && v14 )
    return (unsigned int)-1073741823;
  return (unsigned int)v11;
}
