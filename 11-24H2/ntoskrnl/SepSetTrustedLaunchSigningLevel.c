/*
 * XREFs of SepSetTrustedLaunchSigningLevel @ 0x14078EB5C
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SepSetTrustedLaunchSigningLevel(char a1, __int64 a2, char *a3, char *a4)
{
  char v4; // bl
  __int64 result; // rax
  char v8; // bp
  char v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v10[0] = 0;
  result = qword_140F04C10;
  v8 = a2;
  if ( qword_140F04C10 && (result = guard_dispatch_icall_no_overrides(v10, a2), (int)result >= 0) && v10[0] )
  {
    *a3 = 3;
    if ( v8 || a1 )
      v4 = 3;
  }
  else if ( a1 )
  {
    *a3 = a1;
    v4 = a1;
  }
  else
  {
    *a3 = 1;
    v4 = v8 != 0;
  }
  *a4 = v4;
  return result;
}
