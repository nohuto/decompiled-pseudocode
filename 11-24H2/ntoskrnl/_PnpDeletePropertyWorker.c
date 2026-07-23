/*
 * XREFs of _PnpDeletePropertyWorker @ 0x14097C4B0
 * Callers:
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     _PnpSetGenericStoreProperty @ 0x14097C974 (_PnpSetGenericStoreProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(int a1, int a2, const WCHAR *a3, __int64 a4, int a5, int a6, int a7)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // edi
  __int64 v15; // rcx
  const WCHAR *v16; // rax
  int pszFormat; // [rsp+28h] [rbp-130h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-C8h] BYREF
  wchar_t pszDest[48]; // [rsp+A0h] [rbp-B8h] BYREF

  Handle[0] = 0LL;
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    goto LABEL_4;
  v15 = 85LL;
  v16 = a3;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  v12 = v15 == 0 ? 0xC000000D : 0;
  if ( v15 )
  {
LABEL_4:
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX") < 0 )
      return (unsigned int)-1073741595;
    v10 = PnpOpenPropertiesKey(a1, a2, (unsigned int)pszDest, 6, 0, pszFormat, (__int64)Handle);
    v12 = v10;
    if ( v10 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v10 < 0 )
      return v12;
    v13 = PnpCtxRegDeleteValue(v11, Handle[0], a3);
    ZwClose(Handle[0]);
    if ( v13 == -1073741772 || v13 == -1073741444 )
      return (unsigned int)-1073741275;
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return v12;
}
