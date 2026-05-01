/*
 * XREFs of ?RevealDesktop@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x1802F0060
 * Callers:
 *     <none>
 * Callees:
 *     ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x1802EFED0 (-AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::RevealDesktop(
        CTrustedComponentForegroundControl *this,
        enum PROCESS_UICONTEXT *a2)
{
  __int64 result; // rax

  result = CTrustedComponentForegroundControl::AllowSetForegroundWindow(this, a2);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  return result;
}
