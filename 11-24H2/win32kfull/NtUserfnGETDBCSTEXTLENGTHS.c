/*
 * XREFs of NtUserfnGETDBCSTEXTLENGTHS @ 0x1400F5880
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1400F4420 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1400F46F0 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  v8 = a2;
  PtiCurrent(a1, a2);
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(UserSessionState
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 71176))(
           a1,
           v8,
           a3,
           a7,
           a5);
}
