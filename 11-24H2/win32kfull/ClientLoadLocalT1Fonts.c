/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x14019A154
 * Callers:
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void ClientLoadLocalT1Fonts()
{
  unsigned int Count; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v2 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v1, 1);
  EtwTraceBeginCallback(77LL);
  KeUserModeCallback(77LL, 0LL, 0LL, &v3, &v2);
  EtwTraceEndCallback(77LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v1);
}
