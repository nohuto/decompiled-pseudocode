/*
 * XREFs of _PnpGetGenericStorePropertyLocales @ 0x14097F518
 * Callers:
 *     PiDqPnPGetObjectPropertyLocales @ 0x140980068 (PiDqPnPGetObjectPropertyLocales.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409802E8 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpGetGenericStorePropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        unsigned int cchDest,
        unsigned int *a6)
{
  wchar_t *v6; // r15
  NTSTATUS v7; // ebx
  int v8; // eax
  unsigned int v9; // esi
  ULONG v10; // r14d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // rdi
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-70h]
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-60h] BYREF
  wchar_t pszSrc[88]; // [rsp+110h] [rbp+0h] BYREF

  v6 = a4;
  v16 = a2;
  v18 = a1;
  *a6 = 0;
  Handle = 0LL;
  if ( cchDest )
    *a4 = 0;
  v7 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX");
  if ( v7 >= 0 )
  {
    v8 = PnpOpenPropertiesKey(v18, v16, pszDest, 1u, 0, (__int64)pszFormat, &Handle);
    v7 = v8;
    if ( v8 == -1073741772 )
    {
      return 0;
    }
    else if ( v8 >= 0 )
    {
      v9 = cchDest;
      v10 = 0;
      while ( 1 )
      {
        do
        {
          LODWORD(v16) = 85;
          v11 = RegRtlEnumValue(Handle, v10++, pszSrc, &v16, 0LL, 0LL, 0LL);
        }
        while ( v11 == -1073741789 );
        if ( v11 )
          break;
        if ( pszSrc[0] )
        {
          v14 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v14 < v9 )
          {
            RtlStringCchCopyExW(v6, v9, pszSrc, 0LL, 0LL, 0x900u);
            v9 -= v14;
            v6 += v14;
          }
          *a6 += v14;
        }
      }
      ZwClose(Handle);
      v12 = *a6 + 1;
      *a6 = v12;
      if ( v6 && cchDest >= v12 )
        *v6 = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
