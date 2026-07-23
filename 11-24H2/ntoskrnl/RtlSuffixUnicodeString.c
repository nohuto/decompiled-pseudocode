/*
 * XREFs of RtlSuffixUnicodeString @ 0x14077D020
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403FAB40 (NLS_UPCASE.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r9
  unsigned __int16 *v6; // r10
  __int64 v7; // rcx
  __int64 Flink; // rbx
  char *v9; // r10
  unsigned __int64 v10; // r11
  size_t v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r11
  char *v14; // rdi
  __int64 v15; // r11
  unsigned __int16 *v16; // r10
  unsigned __int16 v17; // ax
  __int64 v18; // r10
  __int16 v19; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v6;
  Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
  if ( *v4 < (unsigned __int16)v7 )
    return 0;
  v9 = (char *)*((_QWORD *)v6 + 1);
  v10 = *v4 - v7;
  v11 = (unsigned int)v7;
  v12 = *((_QWORD *)v4 + 1);
  v13 = v10 >> 1;
  v14 = &v9[2 * ((unsigned __int64)(unsigned int)v11 >> 1)];
  if ( !v5 )
    return memcmp(v9, (const void *)(v12 + 2 * v13), v11) == 0;
  v15 = v12 + 2 * v13 - (_QWORD)v9;
  while ( v9 < v14 )
  {
    NLS_UPCASE(Flink, *(_WORD *)&v9[v15]);
    v17 = NLS_UPCASE(Flink, *v16);
    if ( v17 != v19 )
      return 0;
    v9 = (char *)(v18 + 2);
  }
  return 1;
}
