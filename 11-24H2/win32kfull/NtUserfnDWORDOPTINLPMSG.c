/*
 * XREFs of NtUserfnDWORDOPTINLPMSG @ 0x140198940
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnDWORDOPTINLPMSG(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 UserSessionState; // rax
  __int128 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+58h] [rbp-20h]

  v8 = a2;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PtiCurrent(a1, a2);
  if ( a4 )
  {
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v14 = *a4;
    v15 = a4[1];
    v16 = a4[2];
    a4 = &v14;
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 71176))(
           a1,
           v8,
           a3,
           a4,
           a5);
}
