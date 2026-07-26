/*
 * XREFs of ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14015F270
 * Callers:
 *     ?ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140018A20 (-ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015F380 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        105,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1);
    result = ((__int64 (__fastcall *)(void *))FilterDriver->DefaultFilterCharacteristics.SetFilterModuleOptionsHandler)(a1->FilterModuleContext);
    v4 = result;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = result;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x6Au,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1,
        *(_DWORD *)v5);
      return v4;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        107,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1);
    return 0LL;
  }
  return result;
}
