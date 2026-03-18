/*
 * XREFs of xxxUserModeCallback @ 0x1402BCAD8
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxClientLoadOLE @ 0x1402E7C98 (xxxClientLoadOLE.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 xxxUserModeCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  unsigned int v6; // edi
  unsigned int Count; // eax
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF
  int v13; // [rsp+6Ch] [rbp+24h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  v13 = HIDWORD(a4);
  v6 = a1;
  v11[0] = 0LL;
  v12 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LOBYTE(v8) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va, v8);
  EtwTraceBeginCallback(v6);
  v9 = KeUserModeCallback(v6, a2, a3, v11, &v12);
  EtwTraceEndCallback(v6);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)va);
  if ( v9 >= 0 && v12 )
    return (unsigned int)-1073741823;
  return (unsigned int)v9;
}
