/*
 * XREFs of ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013C7B0
 * Callers:
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013CD6C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxTooltipDestroyCallback@@YAXXZ @ 0x1C013CED8 (-xxxTooltipDestroyCallback@@YAXXZ.c)
 *     ?xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z @ 0x1C013CEF4 (-xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

void __fastcall xxxTooltipCallback(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v6[0] = a1;
  v6[1] = 0;
  v7 = a2;
  v8 = a3;
  v11 = 0LL;
  v10 = 0;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, a2, a3, a4);
  EtwTraceBeginCallback(131LL);
  KeUserModeCallback(131LL, v6, 24LL, &v11, &v10);
  EtwTraceEndCallback(131LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, v4, v5);
}
