/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1401B7A70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401B7F74 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, struct tagPOINT *a2)
{
  struct tagPOINT *v3; // rcx
  _BYTE *v4; // rdx
  unsigned int v5; // edi
  bool v6; // al
  __int64 v7; // r8
  struct tagPOINT v8; // r9
  __int64 v9; // r8
  __int64 *v10; // r9
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v14[48]; // [rsp+48h] [rbp-30h] BYREF
  struct tagPOINT v15; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT *v16; // [rsp+88h] [rbp+10h]
  struct tagPOINT v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(v14, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
  v12 = 0;
  v15 = 0LL;
  v4 = v16;
  if ( (unsigned __int64)v16 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[7] = v4[7];
  v15 = *v16;
  v5 = ((__int64 (__fastcall *)(_QWORD))W32GetCurrentThreadDpiAwarenessContext)(v15);
  if ( a1 )
  {
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, v5) )
    {
      v17 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v17, &v15, a1, 0LL);
      v6 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL), v17);
      v8 = v15;
    }
    else
    {
      v6 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL), v15);
    }
    if ( !v6 )
      goto LABEL_12;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v8,
            *(unsigned int *)(v7 + 288),
            0LL);
    v9 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v10 = &v18;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(v15, v5, 0LL);
    v10 = &v13;
    v9 = v5;
  }
  LogicalToPhysicalDPIPoint(&v15, &v15, v9, v10);
  v12 = 1;
LABEL_12:
  if ( v12 == 1 )
  {
    v3 = v16;
    *v16 = v15;
    v12 = 1;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v3);
  return v12;
}
