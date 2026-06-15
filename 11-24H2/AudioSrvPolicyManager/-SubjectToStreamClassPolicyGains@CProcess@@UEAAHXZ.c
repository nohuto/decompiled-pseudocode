/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x1800164E0
 * Callers:
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800327C0 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *((_DWORD *)this + 123) )
  {
    if ( *((_DWORD *)this + 120) ? *((_DWORD *)this + 121) : *((_DWORD *)this + 78) )
      return 1;
  }
  return result;
}
