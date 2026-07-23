/*
 * XREFs of ReportExceptionInternal @ 0x1800CF998
 * Callers:
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 *     RtlWerpReportException @ 0x180136010 (RtlWerpReportException.c)
 * Callees:
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall ReportExceptionInternal(int a1, __int64 a2, const void *a3, unsigned int a4, int a5, _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _PORT_MESSAGE ReceiveMessage; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h]
  _PORT_MESSAGE SendMessageA; // [rsp+5A0h] [rbp+4A0h] BYREF
  int v14; // [rsp+5C8h] [rbp+4C8h]
  int v15; // [rsp+5D0h] [rbp+4D0h]
  int v16; // [rsp+5D4h] [rbp+4D4h]
  __int64 v17; // [rsp+5D8h] [rbp+4D8h]
  _BYTE v18[1344]; // [rsp+5E0h] [rbp+4E0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset_thunk_772440563353939046(&SendMessageA, 0, 0x578uLL);
  v15 = a5;
  SendMessageA.u1.Length = 91751760;
  v14 = 0x20000000;
  v17 = a2;
  v16 = a1;
  if ( a3 && (_DWORD)v7 )
    memmove(v18, a3, 8 * v7);
  memset_thunk_772440563353939046(&ReceiveMessage.u2, 0, 0x574uLL);
  ReceiveMessage.u1.Length = 91751760;
  result = SendMessageToWERService(&SendMessageA, &ReceiveMessage);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = v12;
      return 0LL;
    }
  }
  return result;
}
