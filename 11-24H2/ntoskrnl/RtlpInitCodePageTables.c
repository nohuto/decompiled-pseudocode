/*
 * XREFs of RtlpInitCodePageTables @ 0x14077E994
 * Callers:
 *     ExInitializeNls @ 0x140ABC9FC (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlInitCodePageTable @ 0x14077E5E0 (RtlInitCodePageTable.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  ULONG v2; // ebp
  ULONG v3; // r15d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  PUSHORT *v6; // r14
  PVOID *p_Flink; // rbx
  struct _LIST_ENTRY **v8; // rsi
  unsigned __int64 CurrentServerSilo; // rbx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rax

  v2 = a2;
  v3 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  p_Blink = &CurrentServerSiloGlobals[64].Blink;
  v6 = (PUSHORT *)&CurrentServerSiloGlobals[72].Blink;
  p_Flink = (PVOID *)&CurrentServerSiloGlobals[73].Flink;
  v8 = &CurrentServerSiloGlobals[68].Blink;
  if ( (_WORD)v3 != 0xFDE9 && (_WORD)v2 != 0xFDE9 )
  {
    if ( NtGetNlsSectionPtr(0xBu, v3, 0LL, (PVOID *)&CurrentServerSiloGlobals[72].Blink, 0LL) < 0 )
      goto LABEL_7;
    if ( (_WORD)v2 == (_WORD)v3 )
    {
      *p_Flink = *v6;
      goto LABEL_8;
    }
    if ( NtGetNlsSectionPtr(0xBu, v2, 0LL, p_Flink, 0LL) < 0 )
    {
LABEL_7:
      *v6 = 0LL;
      *p_Flink = 0LL;
    }
  }
LABEL_8:
  RtlInitCodePageTable(*v6, (PCPTABLEINFO)p_Blink);
  RtlInitCodePageTable((PUSHORT)*p_Flink, (PCPTABLEINFO)v8);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo == PdcCreateWatchdogAroundClientCall() )
  {
    if ( *(_WORD *)p_Blink == 0xFDE9 || *(_WORD *)v8 == 0xFDE9 )
    {
      NlsAnsiCodePage = -535;
      NlsOemCodePage = -535;
      LOBYTE(NlsMbCodePageTag) = 0;
      LOBYTE(NlsMbOemCodePageTag) = 0;
    }
    else
    {
      NlsAnsiCodePage = *(_WORD *)p_Blink;
      v10 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      if ( *((_WORD *)p_Blink + 6) )
      {
        NlsLeadByteInfo = p_Blink[7];
        v11 = p_Blink[7];
      }
      else
      {
        NlsLeadByteInfo = &NlsEmptyLeadByteInfoTable;
        v11 = (struct _LIST_ENTRY *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[18] = v11;
      LOBYTE(NlsMbCodePageTag) = *((_WORD *)p_Blink + 6) != 0;
      NlsOemCodePage = *(_WORD *)v8;
      if ( *((_WORD *)v8 + 6) )
      {
        NlsOemLeadByteInfo = (PUSHORT *)v8[7];
        v10 = v8[7];
      }
      else
      {
        NlsOemLeadByteInfo = (PUSHORT *)&NlsEmptyLeadByteInfoTable;
      }
      p_Blink[19] = v10;
      LOBYTE(NlsMbOemCodePageTag) = *((_WORD *)v8 + 6) != 0;
    }
  }
  return 0LL;
}
