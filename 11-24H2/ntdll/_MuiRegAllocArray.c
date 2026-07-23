/*
 * XREFs of _MuiRegAllocArray @ 0x180099020
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax

  v2 = 2LL * a2;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v2);
  else
    return 0LL;
}
