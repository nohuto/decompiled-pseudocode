/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140B930C0
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x1404B407C (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B92B98 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 __fastcall VfMajorTestStartedPdoStack(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx

  result = IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && (VfRuleClasses & 0x400000) == 0 )
  {
    v6 = 0LL;
    do
    {
      if ( *((_QWORD *)&unk_140FFEC60 + 12 * v6) )
        guard_dispatch_icall_no_overrides(a1, v3, v4, v5);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 <= 0x1B );
    result = qword_140FFF6E0;
    if ( qword_140FFF6E0 )
      return guard_dispatch_icall_no_overrides(a1, v3, v4, v5);
  }
  return result;
}
