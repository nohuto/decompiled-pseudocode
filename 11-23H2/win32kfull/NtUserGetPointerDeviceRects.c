/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C008ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C008AEE4 (_GetPointerDeviceRects.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[16]; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v16, &v17) )
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
    *a2 = v16;
    *a3 = v17;
    v6 = 1;
    v15 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v6;
}
