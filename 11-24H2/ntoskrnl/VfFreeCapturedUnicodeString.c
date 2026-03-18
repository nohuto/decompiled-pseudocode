/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x140B82E64
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B9C634 (VfSetVerifierInformationEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
