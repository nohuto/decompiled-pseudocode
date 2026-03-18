/*
 * XREFs of NtUserfnINOUTSTYLECHANGE @ 0x1401C1270
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTSTYLECHANGE(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // r8
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  v15 = 0LL;
  PtiCurrent(a1, a2);
  v12 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v12 = (_BYTE *)MmUserProbeAddress;
  *v12 = *v12;
  v12[7] = v12[7];
  v15 = *a4;
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64))(UserSessionState
                                                                                   + 8LL * ((a6 + 6) & 0x1F)
                                                                                   + 71176))(
             a1,
             v8,
             a3,
             &v15,
             a5);
  *a4 = v15;
  return result;
}
