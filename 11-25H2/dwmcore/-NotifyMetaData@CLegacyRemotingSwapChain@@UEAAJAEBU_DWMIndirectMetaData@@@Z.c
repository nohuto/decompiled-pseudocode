/*
 * XREFs of ?NotifyMetaData@CLegacyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1802D5870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x18021D148 (McTemplateU0xxx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::NotifyMetaData(
        CLegacyRemotingSwapChain *this,
        const struct _DWMIndirectMetaData *a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        (__int64)this,
        &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
        *((_QWORD *)a2 + 1),
        a2,
        1LL);
  }
  else if ( *(_DWORD *)a2 != 5 && *(_DWORD *)a2 != 6 && *(_DWORD *)a2 != 8 && (unsigned int)(*(_DWORD *)a2 - 9) >= 2 )
  {
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DWMIndirectMetaData *, __int64))(**((_QWORD **)this + 12) + 56LL))(
         *((_QWORD *)this + 12),
         a2,
         1LL);
  v2 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x95u, 0LL);
  return v2;
}
