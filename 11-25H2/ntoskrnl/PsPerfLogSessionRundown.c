/*
 * XREFs of PsPerfLogSessionRundown @ 0x14076BDE0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceSiloDcEvent @ 0x14047F4D4 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsGetNextSession @ 0x140A2CC00 (PsGetNextSession.c)
 */

__int64 __fastcall PsPerfLogSessionRundown(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v3; // di
  void *v5; // rcx
  __int64 v7; // rdx
  __int64 NextSession; // rax
  void *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]

  v13 = 12;
  v12 = &v11;
  v14 = 0;
  v3 = (a3 != 0) + 588;
  v5 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    NextSession = PsGetNextSession(v5);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    v7 = *(_QWORD *)(NextSession + 744);
    DWORD2(v11) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)&v11 = v7;
    EtwTraceSiloDcEvent((struct _KTHREAD *)&v12, 1u, a1, a2, v3, 0x501803u);
    v5 = v9;
  }
  return 0LL;
}
