/*
 * XREFs of DrpGetSectionAtIndex @ 0x140663988
 * Callers:
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 * Callees:
 *     DrpVerifyData @ 0x1406639EC (DrpVerifyData.c)
 */

__int64 DrpGetSectionAtIndex()
{
  __int64 result; // rax
  __int64 v1; // rcx
  unsigned int v2; // r8d
  _QWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rax

  result = DrpVerifyData();
  if ( (int)result >= 0 )
  {
    if ( v2 <= *(_DWORD *)(v1 + 16) )
    {
      v6 = *(unsigned int *)(v1 + 20);
      if ( v6 < *(_QWORD *)(v1 + 8) && *(unsigned int *)(v4 + 20) + 32 * (unsigned __int64)(v2 + 1) <= v5 )
      {
        *v3 = v6 + v1 + 32LL * v2;
        return 0LL;
      }
      else
      {
        return 3221225990LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
