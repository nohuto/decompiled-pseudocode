/*
 * XREFs of SepMandatoryToDiscretionary @ 0x14040ECD0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMandatoryToDiscretionary(_DWORD *a1, int a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  v2 = a2 & 0xFDFFFFFF;
  if ( !a1[2] )
    return 0LL;
  result = 3221225506LL;
  if ( (v2 & *a1) == v2 )
    return 0LL;
  return result;
}
