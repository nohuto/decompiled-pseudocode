/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140A5D260
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140A5D280 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}
