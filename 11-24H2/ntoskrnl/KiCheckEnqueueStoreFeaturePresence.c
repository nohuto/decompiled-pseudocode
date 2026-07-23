/*
 * XREFs of KiCheckEnqueueStoreFeaturePresence @ 0x140B59EF8
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiCheckEnqueueStoreFeaturePresence(__int64 a1, _QWORD *a2)
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( *(_BYTE *)(a1 + 141) == 2 && (unsigned int)_RAX >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RCX & 0x20000000) != 0 && (_RCX & 0x10000000) != 0 )
    {
      LOBYTE(_RAX) = _bittest64(&KeEnabledSupervisorXStateFeatures, 0xAu);
      if ( (((*a2 & 0x800000LL) != 0) & (unsigned __int8)_RAX) != 0 )
      {
        LOBYTE(_RAX) = 0;
        *a2 |= 0x100000000000000uLL;
      }
    }
  }
  return _RAX;
}
