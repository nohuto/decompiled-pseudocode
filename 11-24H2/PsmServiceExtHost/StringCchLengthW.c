/*
 * XREFs of StringCchLengthW @ 0x180070458
 * Callers:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x180047418 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 * Callees:
 *     StringLengthWorkerW @ 0x18007047C (StringLengthWorkerW.c)
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  HRESULT result; // eax
  _QWORD *v4; // r8

  result = StringLengthWorkerW(psz, cchMax, pcchLength);
  if ( result < 0 )
  {
    if ( v4 )
      *v4 = 0LL;
  }
  return result;
}
