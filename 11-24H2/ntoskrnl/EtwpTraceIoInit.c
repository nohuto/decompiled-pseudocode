/*
 * XREFs of EtwpTraceIoInit @ 0x1403C1EF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceIoInit(__int64 a1)
{
  char v2; // cl
  __int16 v3; // di
  __int64 v4; // rsi
  int ThreadServerSilo; // eax
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v10 = 0;
  v2 = **(_BYTE **)(a1 + 184);
  if ( v2 == 3 )
  {
    v3 = 268;
  }
  else
  {
    v3 = 271;
    if ( v2 != 9 )
      v3 = 269;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a1 + 152));
    v8 = a1;
    v6 = *(_DWORD *)(v4 + 1296);
  }
  else
  {
    ThreadServerSilo = 0;
    v8 = a1;
    v6 = -1;
  }
  v13 = 0;
  v9 = v6;
  v11 = &v8;
  v12 = 12;
  return EtwTraceSiloKernelEvent(ThreadServerSilo, (unsigned int)&v11, 1, 1024, v3, 23075075);
}
