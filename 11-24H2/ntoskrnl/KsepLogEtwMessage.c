/*
 * XREFs of KsepLogEtwMessage @ 0x140488B58
 * Callers:
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _vsnprintf @ 0x1404FAC40 (_vsnprintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KsepLogEtwMessage(int a1, int a2, const char *a3, va_list a4)
{
  unsigned int v5; // eax
  __int64 v6; // rax
  const EVENT_DESCRIPTOR *v7; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+5Ch] [rbp-A4h]
  char Dest[256]; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+180h] [rbp+80h] BYREF

  v13 = a1;
  if ( KseEtwHandle )
  {
    v5 = vsnprintf(Dest, 0xFFuLL, a3, a4);
    if ( v5 < 0x100 )
    {
      if ( v5 == 255 )
        Dest[255] = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      UserData.Size = 4;
      v9 = Dest;
      v6 = -1LL;
      do
        ++v6;
      while ( Dest[v6] );
      v11 = 0;
      v7 = (const EVENT_DESCRIPTOR *)KShimErrorMessage;
      v10 = v6 + 1;
      if ( a2 )
        v7 = &KShimInfoMessage;
      EtwWriteEx(KseEtwHandle, v7, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
