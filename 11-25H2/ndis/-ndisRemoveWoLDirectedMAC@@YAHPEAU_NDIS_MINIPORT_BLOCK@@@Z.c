/*
 * XREFs of ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014ADE0
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400CA780 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-D8h]
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v8; // [rsp+58h] [rbp-B0h] BYREF

  memset(&v8.Header.Revision, 0, 0xF7uLL);
  AoAc = a1->AoAc;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      149,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
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
  v4 = ndisMInvokeOidRequest(a1, &v8);
  if ( v4 == 259 )
  {
    ndisWaitForKernelObject(&v8.NdisReserved[40]);
    v4 = *(_DWORD *)&v8.NdisReserved[8];
  }
  if ( v4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v4;
    LODWORD(v6) = v4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x96u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      v6);
  }
  else
  {
    *((_BYTE *)AoAc + 1080) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x97u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      v4);
  return v4;
}
