/*
 * XREFs of ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x140068B80
 * Callers:
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167DA0 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068D80 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x140068E80 (ndisMSendPmParametersOidForSuspend.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008CBA0 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisWdmSendPmOidsForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  enum _DEVICE_POWER_STATE v7; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_PM_PARAMETERS v8; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v9[248]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_PM_PARAMETERS v10; // [rsp+160h] [rbp+60h]

  v7 = a2;
  memset(&v9[1], 0, 0xF7uLL);
  v10 = *ndisMInitializePmParametersForSuspend(&v8, a1);
  v3 = ndisMSendPmParametersOidForSuspend(a1);
  v4 = v3;
  if ( v3 )
  {
    NdisUnexpectedSsError(a1, 3u, v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 19;
LABEL_9:
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        v5,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        v4,
        a1);
    }
  }
  else
  {
    memset(&v9[112], 0, 136);
    *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
    memset(v9, 0, 104);
    *(_DWORD *)&v9[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v9[168]);
    *(_DWORD *)&v9[88] |= 0x400u;
    *(_QWORD *)&v9[40] = &v7;
    *(_DWORD *)v9 = 15466902;
    *(_DWORD *)&v9[32] = -50265855;
    *(_QWORD *)&v9[4] = 1LL;
    *(_DWORD *)&v9[48] = 4;
    KeInitializeEvent((PRKEVENT)&v9[112], NotificationEvent, 0);
    v4 = ndisMInvokeOidRequest(a1, (struct _NDIS_OID_REQUEST *)v9);
    if ( v4 == 259 )
    {
      ndisWaitForKernelObject(&v9[112]);
      v4 = *(_DWORD *)&v9[80];
    }
    if ( v4 )
    {
      NdisUnexpectedSsError(a1, 4u, v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 20;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
