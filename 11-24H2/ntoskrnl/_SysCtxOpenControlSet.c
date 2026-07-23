/*
 * XREFs of _SysCtxOpenControlSet @ 0x140820920
 * Callers:
 *     _SysCtxOpenMachine @ 0x140820B44 (_SysCtxOpenMachine.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlSetValue @ 0x14097EB88 (_RegRtlSetValue.c)
 *     _RegRtlQueryValue @ 0x1409C7A00 (_RegRtlQueryValue.c)
 */

__int64 __fastcall SysCtxOpenControlSet(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int KeyTransacted; // ebx
  unsigned int Value; // eax
  int v10; // [rsp+28h] [rbp-51h]
  int v11; // [rsp+28h] [rbp-51h]
  _DWORD KeyHandle[3]; // [rsp+64h] [rbp-15h] BYREF
  wchar_t pszDest[16]; // [rsp+70h] [rbp-9h] BYREF

  *a4 = 0LL;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  KeyTransacted = RegRtlOpenKeyTransacted(a2, L"CurrentControlSet", 0LL, 0x2000000LL, a4, a3);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RegRtlOpenKeyTransacted(a2, L"Select", 0LL, 1LL, &KeyHandle[1], a3);
    if ( KeyTransacted == -1073741772 )
    {
      LOBYTE(v10) = 0;
      KeyTransacted = RegRtlCreateKeyTransacted(a2, L"Select", 0LL, 3LL, 0LL, v10, &KeyHandle[1], 0LL, a3);
    }
    if ( !KeyTransacted )
    {
      KeyHandle[0] = 4;
      Value = RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], (__int64)KeyHandle);
      KeyTransacted = Value;
      if ( Value == -1073741772 )
      {
        KeyTransacted = RegRtlSetValue(*(HANDLE *)&KeyHandle[1], 4u);
        if ( KeyTransacted )
          goto LABEL_14;
        if ( RtlStringCchPrintfW(pszDest, 0xEuLL, L"ControlSet%03d") >= 0 )
        {
          KeyTransacted = RegRtlOpenKeyTransacted(a2, pszDest, 0LL, 0x2000000LL, a4, a3);
          if ( KeyTransacted == -1073741772 )
          {
            LOBYTE(v11) = 0;
            KeyTransacted = RegRtlCreateKeyTransacted(a2, pszDest, 0LL, 0x2000000LL, 0LL, v11, a4, 0LL, a3);
          }
          goto LABEL_14;
        }
      }
      else if ( Value )
      {
        goto LABEL_14;
      }
      KeyTransacted = -1073741811;
    }
  }
LABEL_14:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return KeyTransacted;
}
