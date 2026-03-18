/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1401BD570
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rdi
  __int64 UserSessionState; // rax
  __int128 v16; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+60h] [rbp-C8h]
  __int128 v18; // [rsp+70h] [rbp-B8h]
  __int128 v19; // [rsp+80h] [rbp-A8h]
  __int128 v20; // [rsp+90h] [rbp-98h]
  __int128 v21; // [rsp+A0h] [rbp-88h]
  __int128 v22; // [rsp+B0h] [rbp-78h]
  __int128 v23; // [rsp+C0h] [rbp-68h]
  __int64 v24; // [rsp+D0h] [rbp-58h]
  int v25; // [rsp+D8h] [rbp-50h]

  memset_0(&v16, 0, 0x8CuLL);
  PtiCurrent(v11, v10);
  v12 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v12 = (_BYTE *)MmUserProbeAddress;
  *v12 = *v12;
  v12[139] = v12[139];
  v16 = *(_OWORD *)a4;
  v17 = *(_OWORD *)(a4 + 16);
  v18 = *(_OWORD *)(a4 + 32);
  v19 = *(_OWORD *)(a4 + 48);
  v20 = *(_OWORD *)(a4 + 64);
  v21 = *(_OWORD *)(a4 + 80);
  v22 = *(_OWORD *)(a4 + 96);
  v23 = *(_OWORD *)(a4 + 112);
  v24 = *(_QWORD *)(a4 + 128);
  v25 = *(_DWORD *)(a4 + 136);
  if ( (_DWORD)v16 == 140 )
  {
    UserSessionState = W32GetUserSessionState(MmUserProbeAddress, &v16);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                   + 8LL * ((a6 + 6) & 0x1F)
                                                                                   + 71176))(
            a1,
            a2,
            a3,
            &v16,
            a5);
    *(_OWORD *)a4 = v16;
    *(_OWORD *)(a4 + 16) = v17;
    *(_OWORD *)(a4 + 32) = v18;
    *(_OWORD *)(a4 + 48) = v19;
    *(_OWORD *)(a4 + 64) = v20;
    *(_OWORD *)(a4 + 80) = v21;
    *(_OWORD *)(a4 + 96) = v22;
    *(_OWORD *)(a4 + 112) = v23;
    *(_QWORD *)(a4 + 128) = v24;
    *(_DWORD *)(a4 + 136) = v25;
  }
  else
  {
    v13 = 0LL;
    UserSetLastError(87);
  }
  return v13;
}
