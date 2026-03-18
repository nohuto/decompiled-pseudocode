/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1401D3584
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rbx
  _QWORD *result; // rax
  _QWORD *v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v4 = W32GetUserSessionState(v3);
  v6 = (__int64 *)&v20;
  v7 = (_QWORD *)(v4 + 136);
  v8 = *(_QWORD **)(v4 + 136);
  v21 = (__int64 *)&v20;
  v20 = &v20;
  if ( v8 != (_QWORD *)(v4 + 136) )
  {
    do
    {
      v5 = v8 - 2;
      v9 = (__int64)(v8 + 53);
      if ( v8 == (_QWORD *)16 )
        v9 = 368LL;
      if ( *(_QWORD *)v9 && *(_QWORD *)(*(_QWORD *)v9 + 88LL) == a1 )
      {
        v10 = (__int64)(v8 + 30);
        if ( v8 == (_QWORD *)16 )
          v10 = 184LL;
        if ( (*(_DWORD *)v10 & 4) == 0 )
        {
          v11 = (__int64)(v8 + 22);
          if ( v8 == (_QWORD *)16 )
            v11 = 120LL;
          if ( *(_QWORD *)v11 != v11 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 776);
            v6 = v21;
          }
          if ( (_QWORD **)*v6 != &v20 )
LABEL_23:
            __fastfail(3u);
          *(_QWORD *)(v11 + 8) = v6;
          *(_QWORD *)v11 = &v20;
          *v6 = v11;
          v21 = (__int64 *)v11;
        }
        *(_QWORD *)(*(_QWORD *)v9 + 88LL) = 0LL;
        v6 = v21;
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v7 );
  }
  v12 = W32GetUserSessionState(v5);
  RIMUnlockExclusive(v12 + 56);
  v13 = v20;
  while ( 1 )
  {
    result = &v20;
    if ( v13 == &v20 )
      break;
    v14 = *v13;
    v15 = v13;
    v16 = v13;
    v13 = (_QWORD *)v14;
    if ( *(_QWORD **)(v14 + 8) != v15 )
      goto LABEL_23;
    v17 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v17 != v15 )
      goto LABEL_23;
    *v17 = v14;
    *(_QWORD *)(v14 + 8) = v17;
    v15[1] = v15;
    *v15 = v15;
    v18 = *(_QWORD *)(*(v16 - 11) + 392LL);
    RIMLockExclusive(v18 + 104);
    RIMIDERemoveInjectionDevice(*(v16 - 11));
    RIMUnlockExclusive(v18 + 104);
  }
  *(_QWORD *)(a1 + 816) &= ~0x200000uLL;
  return result;
}
