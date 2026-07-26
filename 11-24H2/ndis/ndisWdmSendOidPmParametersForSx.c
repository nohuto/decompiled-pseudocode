/*
 * XREFs of ndisWdmSendOidPmParametersForSx @ 0x1400A8DE0
 * Callers:
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140174920 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ndisMSendPmParametersOidForSx @ 0x14006A0D0 (ndisMSendPmParametersOidForSx.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForSx(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct _GUID *v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int128 v8; // [rsp+40h] [rbp-48h]
  char v9[16]; // [rsp+58h] [rbp-30h] BYREF
  int v10; // [rsp+68h] [rbp-20h]

  v8 = *(_OWORD *)(a1 + 1120);
  v2 = HIDWORD(*(_QWORD *)(a1 + 1128)) & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 1136);
  HIDWORD(v8) = v2;
  *(_OWORD *)v9 = v8;
  v4 = ndisMSendPmParametersOidForSx((struct _NDIS_MINIPORT_BLOCK *)a1, v9);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x78u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1,
        *(_DWORD *)&v9[4]);
    if ( (byte_14011B102 & 0x40) != 0 )
    {
      LODWORD(v7) = 65537;
      LODWORD(v6) = *(_DWORD *)(a1 + 4056);
      McTemplateK0jqxd_EtwWriteTransfer(
        v3,
        (__int64)&PowerPolicyError,
        a1 + 4008,
        a1 + 4008,
        (__int64)v6,
        *(_QWORD *)(a1 + 4024),
        v7);
    }
  }
  else if ( *(_DWORD *)&v9[4] )
  {
    *(_DWORD *)(a1 + 124) |= 0x400u;
  }
  return v4;
}
