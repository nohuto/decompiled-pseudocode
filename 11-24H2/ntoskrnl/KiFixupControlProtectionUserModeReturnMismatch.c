/*
 * XREFs of KiFixupControlProtectionUserModeReturnMismatch @ 0x14047E9B4
 * Callers:
 *     KiProcessControlProtection @ 0x140434290 (KiProcessControlProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFixupControlProtectionUserModeReturnMismatch(__int64 a1, __int64 a2, __int64 _R8)
{
  _RDX = a1 - 8;
  __asm { wrussq  qword ptr [rdx], r8 }
  __writemsr(0x6A7u, a1 - 8);
  return 0LL;
}
