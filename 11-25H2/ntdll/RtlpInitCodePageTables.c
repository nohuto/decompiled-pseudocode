/*
 * XREFs of RtlpInitCodePageTables @ 0x1800AFD0C
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AFC74 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1800AFE70 (RtlInitCodePageTable.c)
 *     ZwGetNlsSectionPtr @ 0x180165250 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  bool v3; // bl
  unsigned int v4; // edi
  __int64 v5; // rcx
  void *v6; // rdx
  void *v7; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 == 0xFDE9 || a2 == 0xFDE9 )
    goto LABEL_15;
  if ( (int)ZwGetNlsSectionPtr(11LL, a1, 0LL, &xmmword_1801CF010, 0LL) < 0 )
    goto LABEL_6;
  if ( (_WORD)v4 == a1 )
  {
    v5 = xmmword_1801CF010;
    *((_QWORD *)&xmmword_1801CF010 + 1) = xmmword_1801CF010;
    goto LABEL_7;
  }
  if ( (int)ZwGetNlsSectionPtr(11LL, v4, 0LL, (char *)&xmmword_1801CF010 + 8, 0LL) >= 0 )
  {
LABEL_15:
    v5 = xmmword_1801CF010;
  }
  else
  {
LABEL_6:
    xmmword_1801CF010 = 0LL;
    v5 = 0LL;
  }
LABEL_7:
  RtlInitCodePageTable(v5, &GlobalRtlNlsState);
  RtlInitCodePageTable(*((_QWORD *)&xmmword_1801CF010 + 1), &word_1801CEFD0);
  if ( GlobalRtlNlsState == -535 || word_1801CEFD0 == -535 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v6 = &NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState;
    v7 = &NlsEmptyLeadByteInfoTable;
    if ( word_1801CEF9C )
      v7 = (void *)qword_1801CEFC8;
    NlsMbCodePageTag = word_1801CEF9C != 0;
    qword_1801CF020 = (__int64)v7;
    if ( word_1801CEFDC )
      v6 = (void *)qword_1801CF008;
    v3 = word_1801CEFDC != 0;
    qword_1801CF028 = (__int64)v6;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
