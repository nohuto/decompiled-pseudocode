/*
 * XREFs of ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140090610
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140183D40 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E567C (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5710 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIovDeleteDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int SetMiniport; // edi
  unsigned int InterlockedFlags; // eax
  unsigned int v4; // ett
  _BYTE v5[248]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v6[4]; // [rsp+140h] [rbp+40h] BYREF

  SetMiniport = 0;
  memset(v5, 0, sizeof(v5));
  memset(v6, 0, 12);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      92,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  if ( ndisIovFindSwitchBySwitchId(a1, 0) )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(a1, 0);
    _m_prefetchw(&a1->InterlockedFlags);
    InterlockedFlags = a1->InterlockedFlags;
    do
    {
      v4 = InterlockedFlags;
      InterlockedFlags = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&a1->InterlockedFlags,
                           InterlockedFlags,
                           InterlockedFlags);
    }
    while ( v4 != InterlockedFlags );
    if ( (InterlockedFlags & 0x200) == 0 )
    {
      v6[0] = 786816;
      v6[2] = 0;
      *(_QWORD *)&v5[104] = &ndisIntReqGeneric;
      memset(v5, 0, 104);
      memset(&v5[112], 0, 136);
      *(_DWORD *)&v5[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v5[168]);
      *(_DWORD *)v5 = 15466902;
      *(_QWORD *)&v5[40] = v6;
      *(_DWORD *)&v5[32] = 66105;
      *(_QWORD *)&v5[4] = 1LL;
      *(_DWORD *)&v5[48] = 12;
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v5, 0, 0LL);
    }
    ndisIovDeleteNicSwitch(a1, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Du,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      SetMiniport);
}
