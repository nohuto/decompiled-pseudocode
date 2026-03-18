/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140A5AEF0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140A5AF10 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}
