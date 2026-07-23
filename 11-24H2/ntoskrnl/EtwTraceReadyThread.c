/*
 * XREFs of EtwTraceReadyThread @ 0x1402C9340
 * Callers:
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiFastReadyThread @ 0x1402DE4A8 (KiFastReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140650B74 (EtwpCoverageSamplerReadyThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  char v7; // cl
  void (__fastcall __noreturn *v8)(); // rax
  __int64 ServerSiloGlobals; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+34h] [rbp-34h]
  char v20; // [rsp+35h] [rbp-33h]
  char v21; // [rsp+36h] [rbp-32h]
  char v22; // [rsp+37h] [rbp-31h]
  _QWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF

  v18 = *(_DWORD *)(a1 + 1296);
  v5 = 6298114;
  v19 = a2;
  v20 = a3;
  v22 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v21 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v7 = (8 * (a4 & 1)) | ((*(_DWORD *)(v6 + 264) & 7) != 0 ? 4 : 0) | v21 & 0xF3;
  v8 = *(void (__fastcall __noreturn **)())(a1 + 1376);
  v21 = v7;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
  {
    v5 = 6294018;
  }
  else if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4848) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v23[1] = 8LL;
  v23[0] = &v18;
  ServerSiloGlobals = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(ServerSiloGlobals + 1520);
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    ServerSiloGlobals = EtwpHostSiloState + 32 * v13 + 4556;
    if ( ServerSiloGlobals && (*(_DWORD *)(ServerSiloGlobals + 4) & 0x200) != 0 )
      LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                     (__int64)v23,
                                     EtwpHostSiloState,
                                     *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4504),
                                     1u,
                                     1330,
                                     v5);
  }
  if ( v10 )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(v10);
    v14 = *(_QWORD *)(ServerSiloGlobals + 832);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v16, v15); !i; i = !_BitScanForward((unsigned int *)&v16, v15) )
      {
        v15 &= v15 - 1;
        ServerSiloGlobals = v14 + 32 * v16 + 4556;
        if ( ServerSiloGlobals && (*(_DWORD *)(ServerSiloGlobals + 4) & 0x200) != 0 )
          LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                         (__int64)v23,
                                         v14,
                                         *(unsigned __int8 *)(v14 + 2 * v16 + 4504),
                                         1u,
                                         1330,
                                         v5);
      }
    }
  }
  return ServerSiloGlobals;
}
