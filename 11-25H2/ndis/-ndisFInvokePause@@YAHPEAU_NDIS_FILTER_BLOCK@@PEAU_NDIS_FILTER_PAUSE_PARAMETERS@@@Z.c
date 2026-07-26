/*
 * XREFs of ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x14016DAB0
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140183290 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokePause(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  struct _NDIS_FILTER_PAUSE_PARAMETERS *v3; // rdi
  bool IsFilterVerified; // al
  void *FilterModuleContext; // rcx
  int v7; // eax
  unsigned int v8; // edi
  char v10[4]; // [rsp+30h] [rbp-18h]

  FilterDriver = a1->FilterDriver;
  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      114,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
  IsFilterVerified = ndisIsFilterVerified(a1);
  FilterModuleContext = a1->FilterModuleContext;
  if ( IsFilterVerified )
    v7 = (*((__int64 (__fastcall **)(void *, struct _NDIS_FILTER_PAUSE_PARAMETERS *, void *, int (__fastcall *)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *)))ndisVerifierNdisDispatch
          + 18))(
           FilterModuleContext,
           v3,
           a1->VerifierContext,
           FilterDriver->DefaultFilterCharacteristics.PauseHandler);
  else
    v7 = FilterDriver->DefaultFilterCharacteristics.PauseHandler(FilterModuleContext, v3);
  v8 = v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x73u,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  return v8;
}
