/*
 * XREFs of _MuiRegAllocArray @ 0x1800D2690
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E1C48 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E1F5C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014AC60 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax

  v2 = 2LL * a2;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v2);
  else
    return 0LL;
}
