/*
 * XREFs of RtlpInitCodePageTables @ 0x180009640
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800095A8 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1800097B0 (RtlInitCodePageTable.c)
 *     ZwGetNlsSectionPtr @ 0x180162080 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  BOOLEAN v3; // bl
  ULONG v4; // edi
  USHORT *v5; // rcx
  unsigned __int16 *v6; // rdx
  unsigned __int16 *DBCSOffsets; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 == 0xFDE9 || a2 == 0xFDE9 )
    goto LABEL_15;
  if ( ZwGetNlsSectionPtr(0xBu, a1, 0LL, &SectionPointer, 0LL) < 0 )
    goto LABEL_6;
  if ( (_WORD)v4 == a1 )
  {
    v5 = (USHORT *)SectionPointer;
    *(&SectionPointer + 1) = SectionPointer;
    goto LABEL_7;
  }
  if ( ZwGetNlsSectionPtr(0xBu, v4, 0LL, &SectionPointer + 1, 0LL) >= 0 )
  {
LABEL_15:
    v5 = (USHORT *)SectionPointer;
  }
  else
  {
LABEL_6:
    *(_OWORD *)&SectionPointer = 0LL;
    v5 = 0LL;
  }
LABEL_7:
  RtlInitCodePageTable(v5, &GlobalRtlNlsState);
  RtlInitCodePageTable((PUSHORT)*(&SectionPointer + 1), &CodePageTable);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v6 = (unsigned __int16 *)&NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState.CodePage;
    DBCSOffsets = (unsigned __int16 *)&NlsEmptyLeadByteInfoTable;
    if ( GlobalRtlNlsState.DBCSCodePage )
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    NlsMbCodePageTag = GlobalRtlNlsState.DBCSCodePage != 0;
    qword_1801CC020 = (__int64)DBCSOffsets;
    if ( CodePageTable.DBCSCodePage )
      v6 = CodePageTable.DBCSOffsets;
    v3 = CodePageTable.DBCSCodePage != 0;
    qword_1801CC028 = (__int64)v6;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
