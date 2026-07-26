/*
 * XREFs of ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008A200
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  unsigned __int8 MajorNdisVersion; // cl
  int v4; // eax
  int v5; // esi
  unsigned int v6; // eax
  __int64 Pool2; // rax
  unsigned int *ndisSupportedOidList; // rax

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      19,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1);
  MajorNdisVersion = a1->MajorNdisVersion;
  v4 = 83;
  v5 = 45;
  if ( MajorNdisVersion < 6u )
    v4 = 45;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    ++v4;
    if ( MajorNdisVersion >= 6u )
      v4 += 4;
  }
  v6 = 4 * v4;
  a1->ndisSupportedOidListLength = v6;
  Pool2 = ExAllocatePool2(64LL, v6, 1835091022);
  a1->ndisSupportedOidList = (unsigned int *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = ndisHandledNdis5Ndis6GenOids;
    *(_OWORD *)(Pool2 + 16) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    *(_OWORD *)(Pool2 + 32) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    *(_OWORD *)(Pool2 + 64) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    *(_OWORD *)(Pool2 + 80) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    *(_OWORD *)(Pool2 + 96) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    *(_OWORD *)(Pool2 + 112) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    *(_OWORD *)(Pool2 + 128) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    *(_OWORD *)(Pool2 + 144) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    *(_OWORD *)(Pool2 + 160) = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    *(_DWORD *)(Pool2 + 176) = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( a1->MajorNdisVersion >= 6u )
    {
      v5 = 83;
      ndisSupportedOidList = a1->ndisSupportedOidList;
      *(_OWORD *)(ndisSupportedOidList + 45) = *(_OWORD *)&ndisHandledNdis6OnlyGenOids;
      *(_OWORD *)(ndisSupportedOidList + 49) = xmmword_140194AF0;
      *(_OWORD *)(ndisSupportedOidList + 53) = xmmword_140194B00;
      *(_OWORD *)(ndisSupportedOidList + 57) = xmmword_140194B10;
      *(_OWORD *)(ndisSupportedOidList + 61) = xmmword_140194B20;
      *(_OWORD *)(ndisSupportedOidList + 65) = xmmword_140194B30;
      *(_OWORD *)(ndisSupportedOidList + 69) = xmmword_140194B40;
      *(_OWORD *)(ndisSupportedOidList + 73) = xmmword_140194B50;
      *(_OWORD *)(ndisSupportedOidList + 77) = xmmword_140194B60;
      *(_QWORD *)(ndisSupportedOidList + 81) = qword_140194B70;
    }
    if ( a1->MediaType == NdisMedium802_3 )
    {
      a1->ndisSupportedOidList[v5] = (unsigned int)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( a1->MajorNdisVersion >= 6u )
        *(_OWORD *)&a1->ndisSupportedOidList[v5 + 1] = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v2);
  return v2;
}
