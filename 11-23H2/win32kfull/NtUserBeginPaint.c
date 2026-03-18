/*
 * XREFs of NtUserBeginPaint @ 0x1C0060550
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C0061760 (xxxEndPaint.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  __int128 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+48h] [rbp-80h]
  _OWORD v14[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-28h]

  memset_0(v14, 0, 0x48uLL);
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v6;
    HMLockObject(v6);
    v9 = xxxBeginPaint(v6);
    HIDWORD(v15) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v14[0];
    *(_OWORD *)(a2 + 16) = v14[1];
    *(_OWORD *)(a2 + 32) = v14[2];
    *(_OWORD *)(a2 + 48) = v14[3];
    *(_QWORD *)(a2 + 64) = v15;
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress, v10);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v9;
}
