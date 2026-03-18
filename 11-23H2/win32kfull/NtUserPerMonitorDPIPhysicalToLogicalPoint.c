/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01D7A40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0150F64 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagPOINT v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // rdx
  __int64 v10; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  __int64 v12; // r9
  struct tagPOINT v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( !v4 || (v4 = ValidateHwnd(v4)) != 0 )
  {
    v14 = 0LL;
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[7] = v9[7];
    v14 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( v4 )
    {
      ShouldVirtualizeWindowRect(v4, CurrentThreadDpiAwarenessContext);
      v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v14,
              *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL),
              1LL,
              v12);
      PhysicalToLogicalDPIPoint(&v14, &v14, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), &v15);
      LODWORD(v4) = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v14);
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v14,
              CurrentThreadDpiAwarenessContext,
              1LL,
              v10);
      PhysicalToLogicalDPIPoint(&v14, &v14, CurrentThreadDpiAwarenessContext, &v16);
      LODWORD(v4) = 1;
      v7 = v14;
    }
    if ( (_DWORD)v4 )
    {
      *a2 = v7;
      LODWORD(v4) = 1;
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(v6, v5, v7, v8);
  return (int)v4;
}
