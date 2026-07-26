/*
 * XREFs of ndisMSetPowerManagementCapabilities @ 0x14005AC10
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ndisRssPmObjectHeaderFixup @ 0x14005AF80 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisMSetPowerManagementCapabilities(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  size_t v5; // rsi
  char v6; // r9
  __int16 v7; // ax

  v2 = (void *)(a1 + 1000);
  *(_OWORD *)(a1 + 1000) = 0LL;
  *(_OWORD *)(a1 + 1016) = 0LL;
  v5 = 60LL;
  *(_OWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1048) = 0LL;
  *(_DWORD *)(a1 + 1056) = 0;
  if ( *(_BYTE *)(a2 + 1) < 2u )
  {
    if ( *(_BYTE *)(a1 + 32) > 6u || *(_BYTE *)(a1 + 32) == 6 && *(_BYTE *)(a1 + 33) >= 0x50u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x7Cu,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          a1,
          a2);
      return 3223519276LL;
    }
    v6 = 1;
    v7 = 52;
  }
  else
  {
    v6 = 2;
    v7 = 60;
  }
  if ( (unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"PowerManagementCapabilities", a2, 0x80, v6, v7)
    && (*(_BYTE *)(a1 + 32) > 6u || *(_BYTE *)(a1 + 32) == 6 && *(_BYTE *)(a1 + 33) >= 0x50u) )
  {
    return 3223519276LL;
  }
  if ( *(unsigned __int16 *)(a2 + 2) < 0x3Cu )
    v5 = *(unsigned __int16 *)(a2 + 2);
  memmove(v2, (const void *)a2, v5);
  return 0LL;
}
