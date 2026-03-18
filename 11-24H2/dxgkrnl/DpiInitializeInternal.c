/*
 * XREFs of DpiInitializeInternal @ 0x14007CA88
 * Callers:
 *     DpiInitialize @ 0x14007CA70 (DpiInitialize.c)
 *     DpiInitializeWin8 @ 0x14007CB60 (DpiInitializeWin8.c)
 * Callees:
 *     DpiInitializeEx @ 0x14023BB28 (DpiInitializeEx.c)
 */

__int64 __fastcall DpiInitializeInternal(void *a1, const UNICODE_STRING *a2, _QWORD *a3, char a4)
{
  if ( *(_DWORD *)a3 >= 0x104Eu )
  {
    if ( a3[1]
      && a3[2]
      && a3[3]
      && a3[4]
      && a3[5]
      && a3[6]
      && a3[7]
      && a3[8]
      && (a3[9] || a3[125])
      && a3[10]
      && a3[11]
      && a3[13]
      && a3[14] )
    {
      return DpiInitializeEx(a1, a2, a3, a4);
    }
    WdLogSingleEntry1(2LL, -1073741735LL);
    WdLogGlobalForLineNumber = 3985;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741735LL);
    WdLogGlobalForLineNumber = 3955;
  }
  return 3221225561LL;
}
