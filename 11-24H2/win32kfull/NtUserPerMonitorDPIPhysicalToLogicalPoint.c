/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1401B78A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401B7F74 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2)
{
  struct tagPOINT *v3; // rcx
  _BYTE *v5; // rdx
  unsigned int v6; // edi
  _BYTE v7[56]; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v8; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT *v9; // [rsp+88h] [rbp+10h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v9 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(v7, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v8 = 0LL;
    v5 = v9;
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[7] = v5[7];
    v8 = *v9;
    v6 = ((__int64 (__fastcall *)(_QWORD))W32GetCurrentThreadDpiAwarenessContext)(v8);
    if ( a1 )
    {
      ShouldVirtualizeWindowRect(a1, v6);
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v8,
              *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
              1LL);
      PhysicalToLogicalDPIPoint(&v8, &v8, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), &v10);
      LODWORD(a1) = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL), v8);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(v8, v6, 1LL);
      PhysicalToLogicalDPIPoint(&v8, &v8, v6, &v11);
      LODWORD(a1) = 1;
    }
    if ( (_DWORD)a1 )
    {
      v3 = v9;
      *v9 = v8;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return (int)a1;
}
