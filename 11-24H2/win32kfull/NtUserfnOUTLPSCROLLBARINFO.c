/*
 * XREFs of NtUserfnOUTLPSCROLLBARINFO @ 0x1401FE7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOUTLPSCROLLBARINFO(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // rdx
  __int64 UserSessionState; // rax
  __int64 v13; // [rsp+30h] [rbp-88h]
  __int128 v14; // [rsp+48h] [rbp-70h] BYREF
  __int128 v15; // [rsp+58h] [rbp-60h]
  __int128 v16; // [rsp+68h] [rbp-50h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  int v18; // [rsp+80h] [rbp-38h]

  v8 = a2;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  PtiCurrent(a1, a2);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[59] = v10[59];
  v14 = *(_OWORD *)a4;
  v15 = *(_OWORD *)(a4 + 16);
  v16 = *(_OWORD *)(a4 + 32);
  v17 = *(_QWORD *)(a4 + 48);
  v18 = *(_DWORD *)(a4 + 56);
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                 + 8LL * ((a6 + 6) & 0x1F)
                                                                                 + 71176))(
          a1,
          v8,
          a3,
          &v14,
          a5);
  *(_OWORD *)a4 = v14;
  *(_OWORD *)(a4 + 16) = v15;
  *(_OWORD *)(a4 + 32) = v16;
  *(_QWORD *)(a4 + 48) = v17;
  *(_DWORD *)(a4 + 56) = v18;
  return v13;
}
