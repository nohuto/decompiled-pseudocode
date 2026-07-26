/*
 * XREFs of ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FF20
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C37A0 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  int v4; // edx
  unsigned int v5; // ebx
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v8; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v8.Header.Revision, 0, 0xF7uLL);
  AoAc = a1->AoAc;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      149,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  }
  v7 = 131073;
  memset(&v8, 0, 0xF8uLL);
  *(_DWORD *)&v8.NdisReserved[16] |= 8u;
  *(_QWORD *)&v8.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v8.NdisReserved[96]);
  v8.PortNumber = 0;
  *(_DWORD *)&v8.NdisReserved[16] |= 0x400u;
  v8.DATA.QUERY_INFORMATION.InformationBuffer = &v7;
  v8.Header = (NDIS_OBJECT_HEADER)15466902;
  v8.DATA.QUERY_INFORMATION.Oid = -50265845;
  v8.RequestType = NdisRequestSetInformation;
  v8.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  KeInitializeEvent((PRKEVENT)&v8.NdisReserved[40], NotificationEvent, 0);
  v5 = ndisMInvokeOidRequest(a1, &v8);
  if ( v5 == 259 )
  {
    ndisWaitForKernelObject(&v8.NdisReserved[40]);
    v5 = *(_DWORD *)&v8.NdisReserved[8];
  }
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      150,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v5);
  }
  else
  {
    *((_BYTE *)AoAc + 1080) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x97u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v5);
  return v5;
}
