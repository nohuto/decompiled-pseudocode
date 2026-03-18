/*
 * XREFs of NtUserfnINOUTLPPOINT5 @ 0x1401DB6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTLPPOINT5(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // rdx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+48h] [rbp-60h] BYREF
  __int128 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+68h] [rbp-40h]

  v8 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PtiCurrent(a1, a2);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[39] = v10[39];
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_QWORD *)(a4 + 32);
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 71176))(
             a1,
             v8,
             a3,
             &v13,
             a5);
  *(_OWORD *)a4 = v13;
  *(_OWORD *)(a4 + 16) = v14;
  *(_QWORD *)(a4 + 32) = v15;
  return result;
}
