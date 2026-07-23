/*
 * XREFs of HaliWheaInitProcessorGenericSection @ 0x140477F48
 * Callers:
 *     HalpWheaInitProcessorGenericSection @ 0x140477EF0 (HalpWheaInitProcessorGenericSection.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HaliWheaInitProcessorGenericSection(_QWORD *a1)
{
  __int64 v17; // rcx
  __int64 InitialApicId; // rcx
  __int64 result; // rax

  memset_0(a1, 0, 0xC0uLL);
  *a1 |= 0x43uLL;
  _RAX = 1LL;
  *((_BYTE *)a1 + 9) = 2;
  __asm { cpuid }
  a1[2] = (unsigned int)_RAX;
  if ( (unsigned __int8)HalpGetCpuVendor(_RCX, _RDX) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x1A )
    {
      _RAX = 26LL;
      __asm { cpuid }
      if ( (_DWORD)_RAX )
      {
        v17 = a1[2];
        *a1 |= 0x2000uLL;
        a1[2] = __PAIR64__(_RAX, v17);
      }
    }
  }
  InitialApicId = KeGetCurrentPrcb()->InitialApicId;
  *a1 |= 0x100uLL;
  result = 0LL;
  a1[19] = InitialApicId;
  return result;
}
