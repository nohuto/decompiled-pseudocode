/*
 * XREFs of HUBCONNECTOR_MapHubPorts @ 0x140084F8C
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007A970 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x140084EA8 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x1400850CC (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1400851C8 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBCONNECTOR_RegisterPort @ 0x140085504 (HUBCONNECTOR_RegisterPort.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x140085958 (HUBCONNECTOR_UnMapHubPorts.c)
 */

void __fastcall HUBCONNECTOR_MapHubPorts(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm0
  int v7; // eax
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-10h]

  if ( (*(_DWORD *)(a1 + 40) & 0x40000) == 0 )
  {
LABEL_10:
    if ( *(_BYTE *)(a1 + 240) )
    {
      if ( *(_WORD *)(a1 + 296) )
        HUBCONNECTOR_MapIntegratedHubPorts(a1);
      else
        HUBCONNECTOR_MapExternalHubPorts(a1);
    }
    else
    {
      HUBCONNECTOR_MapRootHubPorts(a1);
    }
    return;
  }
  v2 = a1 + 2376;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 2376);
  v5 = v4 - 248;
  if ( a1 + 2376 != v4 )
  {
    do
    {
      if ( (*(_BYTE *)(v5 + 204) & 5) == 5 )
      {
        v6 = *(_OWORD *)(v5 + 1352);
        *(_DWORD *)(v5 + 1368) = 2;
        *(_OWORD *)(v5 + 1372) = v6;
        *(_QWORD *)(v5 + 1416) = (*(_DWORD *)(v5 + 1380) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(v5 + 1380)) & 0x7F80)) >> 7;
        v7 = HUBCONNECTOR_RegisterPort(v5, v3);
        v3 = (unsigned int)v7;
        if ( v7 < 0 )
          break;
      }
      v8 = *(_QWORD *)(v5 + 248);
      v5 = v8 - 248;
    }
    while ( v2 != v8 );
    if ( (int)v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2536),
          2u,
          6u,
          0x1Bu,
          (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
          v9);
      }
      HUBCONNECTOR_UnMapHubPorts(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFBFFFF);
      goto LABEL_10;
    }
  }
}
