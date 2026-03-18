/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1402A2670
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 UserSessionState; // rax
  __int64 v14; // r8
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  v16[0] = 0LL;
  PtiCurrent(a1, a2);
  v12 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  v16[0] = *v12;
  UserSessionState = W32GetUserSessionState(v11, v10);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, __int64))(UserSessionState
                                                                               + 8LL * ((a6 + 6) & 0x1F)
                                                                               + 71176))(
          a1,
          v8,
          a3,
          v16,
          a5);
  v16[1] = v14;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_QWORD *)MmUserProbeAddress;
  *a4 = v16[0];
  return v14;
}
