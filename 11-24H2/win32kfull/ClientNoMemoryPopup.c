/*
 * XREFs of ClientNoMemoryPopup @ 0x1402B87DC
 * Callers:
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall ClientNoMemoryPopup(__int64 a1, __int64 a2)
{
  unsigned int Count; // eax
  __int64 v3; // rdx
  char v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LOBYTE(v3) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v4, v3);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v6, &v5);
  EtwTraceEndCallback(86LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v4);
}
