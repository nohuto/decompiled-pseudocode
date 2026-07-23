/*
 * XREFs of EtwpTraceFileName @ 0x1403C2F70
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwpTraceFileName(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, unsigned int a5, __int16 a6)
{
  __int64 CurrentServerSilo; // rdi
  unsigned int v10; // ecx
  _QWORD *ServerSiloGlobals; // rax
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 v14; // rcx
  const EVENT_DESCRIPTOR *v15; // rdx
  __int16 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int16 v22; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  unsigned int v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+74h] [rbp+Bh]
  __int16 *v28; // [rsp+78h] [rbp+Fh]
  __int64 v29; // [rsp+80h] [rbp+17h]

  v23[1] = 0LL;
  v22 = 0;
  if ( a1 )
    CurrentServerSilo = *(_QWORD *)(a1 + 1520);
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a3;
  v23[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v26 = v10;
  UserData.Ptr = (ULONGLONG)v23;
  v25 = *((_QWORD *)a3 + 1);
  v28 = &v22;
  v27 = 0;
  v29 = 2LL;
  ServerSiloGlobals = (_QWORD *)(EtwpHostSiloState + 4812);
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)ServerSiloGlobals & 0x200) != 0 )
  {
    if ( a6 == 1056 )
    {
      v15 = &KFileEvt_NameCreate;
    }
    else
    {
      LODWORD(ServerSiloGlobals) = 1059;
      if ( a6 != 1059 )
        goto LABEL_7;
      v15 = (const EVENT_DESCRIPTOR *)KFileEvt_NameDelete;
    }
    EtwWriteEx(EtwpFileProvRegHandle, v15, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    goto LABEL_8;
  }
LABEL_7:
  if ( a6 != 1060 )
  {
LABEL_8:
    LODWORD(ServerSiloGlobals) = EtwpHostSiloState;
    v12 = *(_DWORD *)(EtwpHostSiloState + 4520);
    while ( 1 )
    {
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
      if ( v13 )
        break;
      v12 &= v12 - 1;
      ServerSiloGlobals = (_QWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v14 + 4556);
      if ( ServerSiloGlobals )
      {
        if ( (*(_DWORD *)ServerSiloGlobals & 0x200) != 0 )
          LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                         (__int64)&UserData,
                                         EtwpHostSiloState,
                                         *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4504),
                                         3u,
                                         a6,
                                         0x501802u);
      }
    }
    if ( CurrentServerSilo )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(CurrentServerSilo);
      v18 = ServerSiloGlobals[104];
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 + 4520);
        while ( 1 )
        {
          v13 = !_BitScanForward((unsigned int *)&v20, v19);
          if ( v13 )
            break;
          v19 &= v19 - 1;
          ServerSiloGlobals = (_QWORD *)(v18 + 32LL * (unsigned int)v20 + 4556);
          if ( ServerSiloGlobals && (*(_DWORD *)ServerSiloGlobals & 0x200) != 0 )
            LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                           (__int64)&UserData,
                                           v18,
                                           *(unsigned __int8 *)(v18 + 2 * v20 + 4504),
                                           3u,
                                           a6,
                                           0x501802u);
        }
      }
    }
    return (int)ServerSiloGlobals;
  }
  if ( !a4 || a4 == CurrentServerSilo )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(a4);
    v17 = ServerSiloGlobals[104];
    if ( v17 )
      LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent((__int64)&UserData, v17, a5, 3u, v16, 0x501802u);
  }
  return (int)ServerSiloGlobals;
}
