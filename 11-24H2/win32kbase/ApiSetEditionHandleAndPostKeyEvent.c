/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x140191CE4
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     EditionHandleAndPostKeyEvent @ 0x14010FDD0 (EditionHandleAndPostKeyEvent.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        __int64 a16)
{
  unsigned int v16; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int (*v26)(void); // rax
  __int64 v27; // xmm0_8
  __int64 v29; // [rsp+80h] [rbp-18h] BYREF
  int v30; // [rsp+88h] [rbp-10h]

  v16 = 0;
  v29 = 0LL;
  v20 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
  {
    v22 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v21) + 18944) + 120LL);
    if ( v22 || (v22 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v23) + 18944) + 128LL)) != 0LL )
      v29 = *v22;
  }
  SendMessageTo(3LL, &v29, 8LL);
  v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48) + 5776LL);
  if ( v26 && v26() >= 0 )
  {
    v27 = *(_QWORD *)a2;
    v30 = *(_DWORD *)(a2 + 8);
    v29 = v27;
    return (unsigned int)EditionHandleAndPostKeyEvent(
                           v20,
                           &v29,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12,
                           a13,
                           a14,
                           a15,
                           a16);
  }
  return v16;
}
