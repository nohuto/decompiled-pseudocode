/*
 * XREFs of BiDeleteRegistryValue @ 0x140814EA4
 * Callers:
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x140812590 (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x1404990AC (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1404A1930 (BiSanitizeHandle.c)
 *     BiZwDeleteValueKey @ 0x1406987E4 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  void *v6; // rsi
  int v7; // eax
  void *v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  RtlInitUnicodeString(&v11, a2);
  v5 = BiSanitizeHandle(a1);
  v12 = 0LL;
  v6 = (void *)v5;
  if ( a3 )
  {
    v7 = BiOpenKey(v5, a3, 131103LL, &v12);
    v8 = v12;
    v9 = v7;
    if ( v7 < 0 )
      goto LABEL_6;
  }
  else
  {
    v8 = (void *)v5;
  }
  v9 = BiZwDeleteValueKey(v8, &v11);
LABEL_6:
  if ( v8 != v6 && v8 )
    CmSiCloseSection(v8);
  return v9;
}
