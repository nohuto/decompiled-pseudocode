/*
 * XREFs of KiSetControlEnforcement @ 0x140B5BBA0
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiSetControlEnforcement(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v13; // rax

  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) <= 1u && (unsigned int)_RAX >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RCX & 0x80u) != 0LL )
      KiCetCapable = 1;
  }
  if ( KiCetCapable )
  {
    LOBYTE(_RAX) = _bittest64(&KeEnabledSupervisorXStateFeatures, 0xBu);
    if ( (((*a2 & 0x800000LL) != 0) & (unsigned __int8)_RAX) != 0 )
    {
      *a2 |= 0x400000000000uLL;
      *(_QWORD *)(a1 + 36768) |= 0x400000000000uLL;
      v13 = __readcr4();
      _RAX = v13 | 0x800000;
      __writecr4(_RAX);
      KiUserCetAllowed = 1;
      if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 141) == 1 && *(_BYTE *)(a1 + 64) == 25 )
        KiUserCetPl3SspCanonicalizeUpperMask = 0x7FFF;
    }
  }
  return _RAX;
}
