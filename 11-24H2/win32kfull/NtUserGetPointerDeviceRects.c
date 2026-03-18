/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x140026380
 * Callers:
 *     <none>
 * Callees:
 *     _GetPointerDeviceRects @ 0x1400264A4 (_GetPointerDeviceRects.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v12; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v10, &v12) )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    v8 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[15] = v8[15];
    *a2 = v10;
    *a3 = v12;
    v6 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit();
  return v6;
}
