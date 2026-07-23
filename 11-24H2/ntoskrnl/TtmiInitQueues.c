/*
 * XREFs of TtmiInitQueues @ 0x140770B28
 * Callers:
 *     TtmInit @ 0x140769D40 (TtmInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 */

__int64 TtmiInitQueues()
{
  __int64 result; // rax
  const wchar_t *v1; // rcx
  __int64 v2; // rdx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-49h] BYREF
  __int16 Src; // [rsp+40h] [rbp-39h] BYREF
  char v5; // [rsp+42h] [rbp-37h]
  int v6; // [rsp+48h] [rbp-31h]
  __int128 v7; // [rsp+4Ch] [rbp-2Dh]
  int v8; // [rsp+5Ch] [rbp-1Dh]
  int v9; // [rsp+64h] [rbp-15h]
  int v10; // [rsp+6Ch] [rbp-Dh]
  __int64 (__fastcall *v11)(); // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v12)(); // [rsp+80h] [rbp+7h]
  __int64 (__fastcall *v13)(); // [rsp+88h] [rbp+Fh]

  result = TtmIsEnabled();
  if ( (_BYTE)result )
  {
    memset_0(&Src, 0, 0x78uLL);
    Src = 120;
    v6 = 400;
    v8 = 2031619;
    v5 = v5 & 0xF1 | 2;
    v1 = L"TerminalEventQueue";
    v9 = 512;
    v11 = TtmpOpenQueueHandle;
    v12 = TtmpCloseQueueHandle;
    v13 = TtmpDeleteQueue;
    v7 = TtmpQueueMapping;
    v10 = 176;
    v2 = 0x7FFFLL;
    SourceString = 0LL;
    while ( *v1 )
    {
      ++v1;
      if ( !--v2 )
        goto LABEL_9;
    }
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = 2 * (0x7FFF - v2);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_9:
    result = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&TtmpQueueObjectType);
    if ( (int)result < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, (int)result, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  return result;
}
