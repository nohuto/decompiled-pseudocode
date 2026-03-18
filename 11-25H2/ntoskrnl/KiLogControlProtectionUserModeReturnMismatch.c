/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x14043E4E0
 * Callers:
 *     KiProcessControlProtection @ 0x14043E160 (KiProcessControlProtection.c)
 * Callees:
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14079C4D4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     KiShouldLogUserModeReturnMismatch @ 0x140A3488C (KiShouldLogUserModeReturnMismatch.c)
 */

__int64 __fastcall KiLogControlProtectionUserModeReturnMismatch(unsigned int a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rsi
  __int64 result; // rax

  Process = KeGetCurrentThread()->Process;
  result = KiShouldLogUserModeReturnMismatch(Process, a1, *(_QWORD *)(a3 + 8));
  if ( (_BYTE)result )
    return EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process, a3);
  return result;
}
