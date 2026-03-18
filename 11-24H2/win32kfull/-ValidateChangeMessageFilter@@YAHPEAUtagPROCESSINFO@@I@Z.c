/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1401B1944
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1401DB60C (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, int a2)
{
  if ( *((_DWORD *)a1 + 218) <= 0x1000u )
  {
    UserSetLastError(5);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1LL;
    UserSetLastError(87);
  }
  return 0LL;
}
