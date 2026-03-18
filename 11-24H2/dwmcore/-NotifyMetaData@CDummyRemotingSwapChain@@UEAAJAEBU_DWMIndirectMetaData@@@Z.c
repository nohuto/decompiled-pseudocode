/*
 * XREFs of ?NotifyMetaData@CDummyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1802C71A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180211948 (McTemplateU0xxx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::NotifyMetaData(
        CDummyRemotingSwapChain *this,
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
  else if ( *(_DWORD *)a2 != 5
         && *(_DWORD *)a2 != 6
         && *(_DWORD *)a2 != 7
         && *(_DWORD *)a2 != 8
         && *(_DWORD *)a2 != 9
         && (unsigned int)(*(_DWORD *)a2 - 10) >= 2 )
  {
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DWMIndirectMetaData *, __int64))(**((_QWORD **)this + 10) + 56LL))(
         *((_QWORD *)this + 10),
         a2,
         1LL);
  v2 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xB0u, 0LL);
  return v2;
}
