/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140093E54
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x140093E3C (TlgRegisterAggregateProvider.c)
 * Callees:
 *     FinishHash @ 0x140045CB8 (FinishHash.c)
 *     RunningHash @ 0x140046284 (RunningHash.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140092D50 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1400935EC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140093744 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  unsigned __int64 TlgAggregateSession; // rax
  __int64 v1; // rbx
  __int128 v3; // xmm0
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  TlgAggregateSession = (unsigned __int64)CreateTlgAggregateSession(0, 1);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14006C1F8, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  v9 = 0;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_14006C1F8;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  v3 = *((_OWORD *)off_14006C200 - 1);
  v10 = TlgAggregateSession >> 4;
  v11 = v3;
  RunningHash(&v9, (__int64)&v11, 0x10uLL);
  RunningHash(&v9, (__int64)&v10, 8uLL);
  FinishHash(&v9);
  *(_DWORD *)(v1 + 368) = v9 % 0x927C0 + 600000;
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (char *)&dword_14006C1F8,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v5 < 0 )
  {
    qword_14006C220 = 0LL;
    DestroyAggregateSession((_QWORD *)v1, v4, v6);
    return (unsigned int)v5;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14006FDE8, 0LL);
    v7 = qword_14006FDF0;
    if ( !qword_14006FDF0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_14006F840,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
      v7 = qword_14006FDF0;
    }
    v8 = &qword_14006FDF0;
    while ( v7 )
    {
      if ( *(int **)(v7 + 344) == &dword_14006C1F8 )
        goto LABEL_11;
      v8 = (__int64 *)(v7 + 352);
      v7 = *(_QWORD *)(v7 + 352);
    }
    *v8 = v1;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_14006FDE8, 0LL);
    return 0LL;
  }
}
