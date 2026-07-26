/*
 * XREFs of ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140152570
 * Callers:
 *     ?ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004F470 (-ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140152680 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeSetFilterModuleOptions(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rdi
  __int64 result; // rax
  unsigned int v4; // edi
  char v5[4]; // [rsp+30h] [rbp-18h]

  FilterDriver = a1->FilterDriver;
  if ( FilterDriver->DefaultFilterCharacteristics.SetFilterModuleOptionsHandler )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        106,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)a1);
    result = ((__int64 (__fastcall *)(void *))FilterDriver->DefaultFilterCharacteristics.SetFilterModuleOptionsHandler)(a1->FilterModuleContext);
    v4 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = result;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x6Bu,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)a1,
        *(_DWORD *)v5);
      return v4;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        108,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)a1);
    return 0LL;
  }
  return result;
}
