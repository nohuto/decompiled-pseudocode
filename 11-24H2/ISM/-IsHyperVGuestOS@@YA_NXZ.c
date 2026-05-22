/*
 * XREFs of ?IsHyperVGuestOS@@YA_NXZ @ 0x1800BED04
 * Callers:
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800BEB04 (--0MPCCursorManager@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

char IsHyperVGuestOS(void)
{
  char v0; // r8
  __int64 v11; // rbx
  unsigned __int64 v18; // [rsp+4h] [rbp-24h]

  v0 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    v18 = __PAIR64__(_RCX, _RBX);
    v11 = __PAIR64__(_RCX, _RBX) - 0x666F736F7263694DLL;
    if ( v18 == 0x666F736F7263694DLL )
      v11 = (unsigned int)_RDX - 1984438388LL;
    if ( !v11 && (int)_RAX >= 1073741827 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      return (_RBX & 0x1000) == 0;
    }
  }
  return v0;
}
