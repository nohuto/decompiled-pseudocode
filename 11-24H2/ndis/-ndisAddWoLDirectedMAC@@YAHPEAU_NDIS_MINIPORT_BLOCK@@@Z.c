/*
 * XREFs of ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FBA0
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068D80 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1400B2B8C (-ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 *v6; // rdx
  int v7; // edx
  unsigned int v8; // ebx
  unsigned __int8 *BitMapHeader; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_BITMAP BitMapHeader_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _NDIS_OID_REQUEST v11; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v12[272]; // [rsp+168h] [rbp+60h] BYREF

  memset(&v11.Header.Revision, 0, 0xF7uLL);
  memset(v12, 0, 268);
  AoAc = a1->AoAc;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      145,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  if ( ndisDirectedMacForNapsState )
  {
    BitMapHeader = 0LL;
    BitMapHeader_8 = 0LL;
    ndisInitializeDirectedWolPattern((struct _DIRECT_WOL_PATTERN *)v12, v2, &BitMapHeader_8, &BitMapHeader);
    IfBlock = a1->IfBlock;
    v6 = BitMapHeader;
    *(_DWORD *)BitMapHeader = *(_DWORD *)IfBlock->ifPhysAddress.Address;
    *((_WORD *)v6 + 2) = *(_WORD *)&IfBlock->ifPhysAddress.Address[4];
    RtlSetBits(&BitMapHeader_8, 0, 6u);
    memset(&v11, 0, 0xF8uLL);
    *(_DWORD *)&v11.NdisReserved[16] |= 8u;
    *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v11.NdisReserved[96]);
    v11.PortNumber = 0;
    *(_DWORD *)&v11.NdisReserved[16] |= 0x400u;
    v11.DATA.QUERY_INFORMATION.InformationBuffer = v12;
    v11.Header = (NDIS_OBJECT_HEADER)15466902;
    v11.DATA.QUERY_INFORMATION.Oid = -50265846;
    v11.RequestType = NdisRequestSetInformation;
    v11.DATA.QUERY_INFORMATION.InformationBufferLength = 268;
    KeInitializeEvent((PRKEVENT)&v11.NdisReserved[40], NotificationEvent, 0);
    v8 = ndisMInvokeOidRequest(a1, &v11);
    if ( v8 == 259 )
    {
      ndisWaitForKernelObject(&v11.NdisReserved[40]);
      v8 = *(_DWORD *)&v11.NdisReserved[8];
    }
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        147,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v8);
    }
    else
    {
      *((_BYTE *)AoAc + 1080) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x94u,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1,
        v8);
    return v8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0x92u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      0);
  return 0LL;
}
