/*
 * XREFs of ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2220
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140167B20 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memcpy_s @ 0x14008F190 (memcpy_s.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *v2; // rsi
  unsigned int v3; // edi
  _SINGLE_LIST_ENTRY *Next; // rax
  KIRQL v5; // dl
  unsigned int v6; // eax
  int v7; // edx
  KIRQL NewIrql[16]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v11[52]; // [rsp+158h] [rbp+50h] BYREF

  v2 = 0LL;
  NewIrql[0] = 0;
  memset(&v10, 0, 248);
  v3 = 0;
  memset(v11, 0, 196);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      83,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Next = a1->WOLPatternList.Next;
  while ( Next )
  {
    v2 = Next;
    if ( HIDWORD(Next[7].Next) == 2 )
      break;
    Next = Next->Next;
    v2 = 0LL;
  }
  v5 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( !v2 )
  {
    v11[0] = 12845440;
    v11[3] = 2;
    LOWORD(v11[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v11[4] + 2, 0x80uLL, off_14011A2A8, MagicPacketStr.Length);
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
    v10.PortNumber = 0;
    *(_DWORD *)&v10.NdisReserved[16] |= 0x100000u;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = v11;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.Oid = -50265846;
    v10.RequestType = NdisRequestSetInformation;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 196;
    v6 = ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
    v3 = v6;
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        84,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v6);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x55u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v3);
  return v3;
}
