/*
 * XREFs of DrpGetRecord @ 0x140663920
 * Callers:
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 * Callees:
 *     DrpVerifyData @ 0x1406639EC (DrpVerifyData.c)
 */

__int64 DrpGetRecord()
{
  __int64 result; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // r10

  result = DrpVerifyData();
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v3 + 24);
    if ( v5 + *(_QWORD *)(v3 + 16) <= v1 )
    {
      *v4 = v5 + v2;
      return 0LL;
    }
    else
    {
      return 3221225990LL;
    }
  }
  return result;
}
