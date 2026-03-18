/*
 * XREFs of NtUserLogicalToPhysicalDpiPointForWindow @ 0x1401D1C20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalDpiPointForWindow(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  const struct tagWND *v4; // r9
  int v5; // ebx
  _BYTE *v6; // rdx
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  v4 = (const struct tagWND *)ValidateHwnd(a1);
  v5 = 0;
  if ( v4 )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[7] = v6[7];
    v8[0] = *a2;
    v8[1] = v8[0];
    v5 = LogicalToPhysicalInPlaceRectWithSubpixel(v4, (int *)v8, 0LL);
    if ( v5 == 1 )
    {
      v3 = a2;
      *a2 = v8[0];
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v5;
}
