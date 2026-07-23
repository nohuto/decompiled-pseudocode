/*
 * XREFs of EtwpTraceFileIo @ 0x1402D1360
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 */

int __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5,
        const GUID *ActivityId)
{
  unsigned __int64 v6; // rdi
  __int64 v9; // r15
  __int64 *v10; // r11
  __int64 v11; // r9
  ULONG v12; // r10d
  const EVENT_DESCRIPTOR *v13; // r11
  __int64 ServerSiloGlobals; // rax
  unsigned int v15; // ebx
  bool i; // zf
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx

  v6 = a4;
  if ( a1 )
  {
    v9 = *(_QWORD *)(a1 + 1688);
    if ( v9 == -3 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
    }
    else if ( v9 )
    {
      if ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
      {
        do
          v9 = *(_QWORD *)(v9 + 1304);
        while ( !(unsigned __int8)PsIsServerSilo(v9) );
      }
    }
    else
    {
      v9 = 0LL;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 0x6000000) != 0 )
  {
    if ( a5 == 1100 )
    {
      v10 = KFileEvt_OperationEnd;
    }
    else
    {
      if ( a5 != 1091 )
      {
        switch ( a5 )
        {
          case 1088:
            v10 = KFileEvt_Create;
            goto LABEL_11;
          case 1089:
            v10 = KFileEvt_Cleanup;
            goto LABEL_11;
          case 1090:
            v10 = KFileEvt_Close;
            goto LABEL_11;
          case 1092:
            v10 = KFileEvt_Write;
            goto LABEL_11;
          case 1093:
            v10 = KFileEvt_SetInformation;
            goto LABEL_11;
          case 1094:
            v10 = KFileEvt_Delete;
            goto LABEL_11;
          case 1095:
            v10 = KFileEvt_Rename;
            goto LABEL_11;
          case 1096:
            v10 = KFileEvt_DirEnum;
            goto LABEL_11;
          case 1097:
            v10 = KFileEvt_Flush;
            goto LABEL_11;
          case 1098:
            v10 = KFileEvt_QueryInformation;
            goto LABEL_11;
          case 1099:
            v10 = KFileEvt_FSCTL;
            goto LABEL_11;
          case 1101:
            v10 = KFileEvt_DirNotify;
            goto LABEL_11;
          case 1102:
            v10 = KFileEvt_CreateNewFile;
            goto LABEL_11;
          case 1103:
            v10 = KFileEvt_DeletePath;
            goto LABEL_11;
          case 1104:
            v10 = KFileEvt_RenamePath;
            goto LABEL_11;
          case 1105:
            v10 = KFileEvt_SetLinkPath;
            goto LABEL_11;
          case 1106:
            v10 = KFileEvt_SetLink;
            goto LABEL_11;
          case 1107:
            v10 = KFileEvt_SetSecurity;
            goto LABEL_11;
          case 1108:
            v10 = KFileEvt_QuerySecurity;
            goto LABEL_11;
          case 1109:
            v10 = KFileEvt_SetEA;
            goto LABEL_11;
          case 1110:
            v10 = KFileEvt_QueryEA;
            goto LABEL_11;
          default:
            goto LABEL_16;
        }
        goto LABEL_16;
      }
      v10 = KFileEvt_Read;
    }
LABEL_11:
    if ( EtwpFileProvRegHandle
      && ((unsigned __int8)EtwpLevelKeywordEnabled(
                             *(_QWORD *)(EtwpFileProvRegHandle + 32) + 96LL,
                             *((unsigned __int8 *)v10 + 4),
                             v10[1],
                             EtwpFileProvRegHandle)
       || *(_WORD *)(v11 + 102)
       && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v11 + 40) + 96LL, v13->Level, v13->Keyword, v11)) )
    {
      EtwWriteEx(EtwpFileProvRegHandle, v13, 0LL, v12, ActivityId, 0LL, a3, a2);
    }
  }
LABEL_16:
  LODWORD(ServerSiloGlobals) = 1102;
  if ( a5 != 1102 )
  {
    v15 = *(_DWORD *)(EtwpHostSiloState + 4520);
    for ( i = !_BitScanForward(&v17, v15); !i; i = !_BitScanForward(&v17, v15) )
    {
      v15 &= v15 - 1;
      v18 = v17;
      ServerSiloGlobals = 32LL * v17;
      v19 = ServerSiloGlobals + EtwpHostSiloState + 4556;
      if ( v19 )
      {
        ServerSiloGlobals = v6 >> 29;
        if ( ((unsigned int)v6 & *(_DWORD *)(v19 + 4 * (v6 >> 29)) & 0x1FFFFFFF) != 0 )
          LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                         (__int64)a2,
                                         EtwpHostSiloState,
                                         *(unsigned __int8 *)(EtwpHostSiloState + 2 * v18 + 4504),
                                         a3,
                                         a5,
                                         0x601903u);
      }
    }
    if ( v9 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(v9);
      v20 = *(_QWORD *)(ServerSiloGlobals + 832);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v20 + 4520);
        for ( i = !_BitScanForward((unsigned int *)&v22, v21); !i; i = !_BitScanForward((unsigned int *)&v22, v21) )
        {
          v23 = (unsigned int)v22;
          LODWORD(ServerSiloGlobals) = v21 - 1;
          v21 &= v21 - 1;
          v24 = v20 + 32 * v22 + 4556;
          if ( v24 )
          {
            ServerSiloGlobals = v6 >> 29;
            if ( ((unsigned int)v6 & *(_DWORD *)(v24 + 4 * (v6 >> 29)) & 0x1FFFFFFF) != 0 )
              LODWORD(ServerSiloGlobals) = EtwpLogKernelEvent(
                                             (__int64)a2,
                                             v20,
                                             *(unsigned __int8 *)(v20 + 2 * v23 + 4504),
                                             a3,
                                             a5,
                                             0x601903u);
          }
        }
      }
    }
  }
  return ServerSiloGlobals;
}
