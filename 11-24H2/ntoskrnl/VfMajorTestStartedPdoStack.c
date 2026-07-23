/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140B950C0
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x1404AE89C (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B94B98 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 __fastcall VfMajorTestStartedPdoStack(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx

  result = IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && (VfRuleClasses & 0x400000) == 0 )
  {
    v4 = 0LL;
    do
    {
      if ( *((_QWORD *)&unk_140FFFC60 + 12 * v4) )
        guard_dispatch_icall_no_overrides(a1, v3);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= 0x1B );
    result = qword_1410006E0;
    if ( qword_1410006E0 )
      return guard_dispatch_icall_no_overrides(a1, v3);
  }
  return result;
}
