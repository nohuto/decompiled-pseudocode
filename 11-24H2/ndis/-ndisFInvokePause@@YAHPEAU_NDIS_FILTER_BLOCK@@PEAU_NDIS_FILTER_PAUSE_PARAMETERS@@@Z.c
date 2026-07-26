/*
 * XREFs of ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x140162410
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140175480 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140020E10 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      115,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x74u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  return v8;
}
