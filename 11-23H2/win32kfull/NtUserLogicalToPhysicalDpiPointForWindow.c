/*
 * XREFs of NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C01D5A90
 * Callers:
 *     <none>
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalDpiPointForWindow(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct tagWND *v8; // r9
  int v9; // ebx
  _BYTE *v10; // rdx
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  v8 = (const struct tagWND *)ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[7] = v10[7];
    v12[0] = *a2;
    v12[1] = v12[0];
    v9 = LogicalToPhysicalInPlaceRectWithSubpixel(v8, (int *)v12, 0LL);
    if ( v9 == 1 )
      *a2 = v12[0];
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
