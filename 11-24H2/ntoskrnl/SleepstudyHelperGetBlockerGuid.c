/*
 * XREFs of SleepstudyHelperGetBlockerGuid @ 0x140A60140
 * Callers:
 *     SleepstudyHelper_GenerateGuid @ 0x1404AE960 (SleepstudyHelper_GenerateGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767A70 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SleepstudyHelperGetBlockerGuid(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 304) + 64LL);
    }
  }
  return result;
}
