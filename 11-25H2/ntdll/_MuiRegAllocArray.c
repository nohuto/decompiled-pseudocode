/*
 * XREFs of _MuiRegAllocArray @ 0x1800A7340
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
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
