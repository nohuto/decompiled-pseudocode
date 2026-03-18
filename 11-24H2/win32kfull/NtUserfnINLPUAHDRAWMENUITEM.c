/*
 * XREFs of NtUserfnINLPUAHDRAWMENUITEM @ 0x140212690
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 UserSessionState; // rax
  _OWORD v15[9]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v15, 0, sizeof(v15));
  PtiCurrent(v11, v10);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v15[0] = *a4;
  v15[1] = a4[1];
  v15[2] = a4[2];
  v15[3] = a4[3];
  v15[4] = a4[4];
  v15[5] = a4[5];
  v15[6] = a4[6];
  v15[7] = a4[7];
  v15[8] = a4[8];
  UserSessionState = W32GetUserSessionState(128LL, v12);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))(UserSessionState
                                                                                + 8LL * ((a6 + 6) & 0x1F)
                                                                                + 71176))(
           a1,
           a2,
           a3,
           v15,
           a5);
}
