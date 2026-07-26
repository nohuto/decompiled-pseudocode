/*
 * XREFs of ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004DCD0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F700 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMFindNumaDistances(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int16 *Pool2; // rax
  int v3; // edx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v6; // rax
  _WORD *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  USHORT *p_NodeId; // rax
  __int64 v11; // rcx

  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 2LL * ndisMaxNumberOfProcessors, 538985550);
  a1->NumaDistances = Pool2;
  if ( Pool2 )
  {
    a1->NumaNodeId = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * HighestNodeNumber + 4;
      v6 = (_WORD *)ExAllocatePool2(66LL, 4LL * HighestNodeNumber + 4, 538985550);
      v7 = v6;
      if ( v6 )
      {
        v8 = 0LL;
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               &a1->NumaNodeId,
               2u,
               v6,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          v9 = ndisMaxNumberOfProcessors;
          p_NodeId = &ndisCpuInfo->NodeId;
          do
          {
            v11 = *p_NodeId;
            ++v8;
            p_NodeId += 10;
            a1->NumaDistances[v8 - 1] = v7[2 * v11];
            --v9;
          }
          while ( v9 );
        }
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      120,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
}
