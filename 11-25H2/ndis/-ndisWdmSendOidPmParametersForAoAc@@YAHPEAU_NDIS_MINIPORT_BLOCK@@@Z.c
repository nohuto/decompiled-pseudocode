/*
 * XREFs of ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016D730
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14016D440 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007D2A0 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSx @ 0x140085CD0 (ndisMSendPmParametersOidForSx.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140095F40 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  struct _NDIS_PM_PARAMETERS v4; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v5; // [rsp+58h] [rbp-30h] BYREF

  v5 = *ndisMInitializePmParametersForAoAc(&v4, a1);
  result = ndisMSendPmParametersOidForSx(a1, &v5);
  v3 = result;
  if ( (_DWORD)result )
  {
    NdisUnexpectedAoAcError(a1, 4u, result);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x1Du,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v3,
        a1);
    return v3;
  }
  return result;
}
