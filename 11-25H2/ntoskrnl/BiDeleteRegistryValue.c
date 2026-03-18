/*
 * XREFs of BiDeleteRegistryValue @ 0x140804BEC
 * Callers:
 *     BiSetFirmwareModified @ 0x1404A75E4 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x1408022D8 (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x14049F444 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     BiZwDeleteValueKey @ 0x14068C414 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
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
