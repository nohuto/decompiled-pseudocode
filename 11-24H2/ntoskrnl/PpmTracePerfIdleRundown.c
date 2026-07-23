/*
 * XREFs of PpmTracePerfIdleRundown @ 0x140492000
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     PpmEventIdleStateChange @ 0x1404920F8 (PpmEventIdleStateChange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  unsigned int v4; // ecx
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int128 *v11; // [rsp+48h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+54h] [rbp-Ch]

  v1 = *(_QWORD *)(a1 + 35248);
  v10 = 0LL;
  v9 = 0LL;
  if ( v1 )
  {
    DWORD1(v9) = 0;
    HIDWORD(v9) = 0;
    v3 = *(_QWORD *)(a1 + 35256);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 80);
      v5 = *(_DWORD *)(v3 + 84);
      if ( v4 >= *(_DWORD *)(v1 + 528) )
        v4 = *(_DWORD *)(v1 + 528);
      DWORD1(v9) = v5;
      LODWORD(v9) = (v4 < *(_DWORD *)(v1 + 456)) + 1;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 68);
      LODWORD(v9) = 0;
      DWORD1(v9) = v5;
    }
    v6 = *(_QWORD *)(a1 + 200);
    v13 = 0;
    v10 = v6;
    DWORD2(v9) = v5;
    v11 = &v9;
    v12 = 24;
    EtwTraceKernelEvent((int)&v11, 1, 0x80008000, 4659, 5249026);
  }
  v7 = *(_QWORD *)(a1 + 34880);
  if ( v7 )
    PpmEventIdleStateChange(*(unsigned int *)(v7 + 24));
  return 0LL;
}
