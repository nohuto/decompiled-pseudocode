/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1401B7DF0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401B7F74 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, struct tagPOINT *a2)
{
  int v3; // edi
  struct tagPOINT *v4; // rcx
  __int64 v5; // rbx
  struct tagPOINT *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  bool v8; // si
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v12; // [rsp+48h] [rbp-30h]
  struct tagPOINT v14; // [rsp+90h] [rbp+18h] BYREF
  struct tagPOINT v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v14 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (struct tagPOINT *)MmUserProbeAddress;
    v12 = *v6;
    v14 = v12;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v5, CurrentThreadDpiAwarenessContext) )
    {
      v15 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v15, &v14, v5, 0LL);
      v8 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v5 + 40) + 88LL), v15);
    }
    else
    {
      v8 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v5 + 40) + 88LL), v14);
      TransformPointBetweenCoordinateSpaces(&v14, &v14, 0LL, v5);
    }
    if ( v8 )
    {
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_BYTE *)MmUserProbeAddress;
      *v9 = *v9;
      v9[7] = v9[7];
      v4 = a2;
      *a2 = v14;
      v3 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
