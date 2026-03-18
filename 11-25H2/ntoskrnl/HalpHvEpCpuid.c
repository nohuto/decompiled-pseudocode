/*
 * XREFs of HalpHvEpCpuid @ 0x140548040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEpCpuid(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 result; // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a3 = result;
    *a4 = _RBX;
    *a5 = _RCX;
    *a6 = _RDX;
  }
  else
  {
    result = qword_140FC0788;
    if ( qword_140FC0788 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      result = guard_dispatch_icall_no_overrides(a1);
      if ( (int)result >= 0 )
        return result;
      *a3 = 0;
      *a4 = 0;
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
    *a5 = 0;
    *a6 = 0;
  }
  return result;
}
