/*
 * XREFs of HdlspPutWideString @ 0x140BB0468
 * Callers:
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     HdlspUTF8Encode @ 0x1406523A0 (HdlspUTF8Encode.c)
 *     HdlspSendStringAtBaud @ 0x140BB05CC (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspPutWideString(unsigned __int16 *a1)
{
  KSPIN_LOCK v2; // rbx
  _BYTE *v3; // r9
  _BYTE *v4; // rsi
  unsigned int i; // edx
  char v6; // cl
  __int16 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+32h] [rbp+Ah]

  v8 = 0;
  v9 = 0;
  v2 = HeadlessGlobals[3];
  v3 = (_BYTE *)v2;
  v4 = (_BYTE *)(v2 + 79);
  while ( *a1 )
  {
    if ( v3 < v4 )
    {
      HdlspUTF8Encode(*a1, &v8);
      for ( i = 0; i < 3; ++i )
      {
        v6 = *((_BYTE *)&v8 + i);
        if ( v6 )
        {
          *v3++ = v6;
          if ( i >= 3uLL )
            _report_rangecheckfailure();
          *((_BYTE *)&v8 + i) = 0;
        }
      }
      ++a1;
    }
    else
    {
      *v4 = 0;
      HdlspSendStringAtBaud(v2);
      v3 = (_BYTE *)HeadlessGlobals[3];
    }
  }
  *v3 = 0;
  return HdlspSendStringAtBaud(v2);
}
