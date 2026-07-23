/*
 * XREFs of PspCaptureAndValidateUnicodeString @ 0x1409D90AC
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x1409D8840 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspCaptureAndValidateUnicodeString(_OWORD *a1, __int64 a2)
{
  unsigned __int16 v2; // cx

  *(_OWORD *)a2 = *a1;
  v2 = *(_WORD *)a2;
  if ( (*(_WORD *)a2 & 1) == 0 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      *(_WORD *)(a2 + 2) = v2 + 2;
      if ( (unsigned __int16)(v2 + 2) >= v2 )
        return 0LL;
    }
    else if ( !v2 )
    {
      *(_WORD *)(a2 + 2) = 0;
      return 0LL;
    }
  }
  return 3221225485LL;
}
