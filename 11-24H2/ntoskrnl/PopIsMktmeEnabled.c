/*
 * XREFs of PopIsMktmeEnabled @ 0x140B5F684
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 */

bool __fastcall PopIsMktmeEnabled(__int64 a1)
{
  char v1; // di
  unsigned __int64 v12; // rax

  v1 = 0;
  if ( (unsigned int)KiGetCpuVendor(a1) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RCX & 0x2000) != 0 )
      {
        v12 = __readmsr(0x982u);
        if ( (v12 & 2) != 0 )
          return (v12 & 0xF00000000LL) != 0;
      }
    }
  }
  return v1;
}
