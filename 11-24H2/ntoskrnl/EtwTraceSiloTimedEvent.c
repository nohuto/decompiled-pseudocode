/*
 * XREFs of EtwTraceSiloTimedEvent @ 0x140475938
 * Callers:
 *     PfHardFaultLog @ 0x1403512E8 (PfHardFaultLog.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceSiloTimedEvent(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *ServerSiloGlobals; // rax
  unsigned int v10; // ebx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch]
  __int64 v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+54h] [rbp-Ch]

  LODWORD(ServerSiloGlobals) = EtwpHostSiloState;
  v24 = 0;
  v22 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v23 = 32;
  while ( 1 )
  {
    v11 = !_BitScanForward((unsigned int *)&v12, v10);
    if ( v11 )
      break;
    v10 &= v10 - 1;
    ServerSiloGlobals = (_QWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v12 + 4556);
    if ( ServerSiloGlobals )
    {
      if ( (*(_DWORD *)ServerSiloGlobals & 0x2000) != 0 )
      {
        v13 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4505);
        v21 = 0;
        v20 = 8;
        v19 = a7 + 8 * (v13 - 1);
        LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                       (__int64)&v19,
                                       EtwpHostSiloState,
                                       *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v12 + 4504),
                                       2u,
                                       a2,
                                       0x501802u);
      }
    }
  }
  if ( a1 )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(a1);
    v14 = ServerSiloGlobals[104];
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      while ( 1 )
      {
        v11 = !_BitScanForward((unsigned int *)&v17, v15);
        if ( v11 )
          break;
        v15 &= v15 - 1;
        ServerSiloGlobals = (_QWORD *)(v14 + 32LL * (unsigned int)v17 + 4556);
        if ( ServerSiloGlobals && (*(_DWORD *)ServerSiloGlobals & 0x2000) != 0 )
        {
          v16 = *(unsigned __int8 *)(v14 + 2 * v17 + 4505);
          v21 = 0;
          v20 = 8;
          v19 = a7 + 8 * (v16 - 1);
          LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                         (__int64)&v19,
                                         v14,
                                         *(unsigned __int8 *)(v14 + 2LL * (unsigned int)v17 + 4504),
                                         2u,
                                         a2,
                                         0x501802u);
        }
      }
    }
  }
  return (int)ServerSiloGlobals;
}
