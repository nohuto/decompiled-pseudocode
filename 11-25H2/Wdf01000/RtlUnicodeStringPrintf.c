/*
 * XREFs of RtlUnicodeStringPrintf @ 0x140085E74
 * Callers:
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x14008536C (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7538 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     _vsnwprintf @ 0x140084524 (_vsnwprintf.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x140086110 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 RtlUnicodeStringPrintf(_UNICODE_STRING *DestinationString, const wchar_t *pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  unsigned __int64 v6; // [rsp+20h] [rbp-48h]
  unsigned int v7; // [rsp+28h] [rbp-40h]
  unsigned __int64 cchDest; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *pszDest; // [rsp+38h] [rbp-30h] BYREF
  __int64 ap; // [rsp+80h] [rbp+18h] BYREF
  va_list apa; // [rsp+80h] [rbp+18h]
  unsigned __int64 *v13; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, pszFormat);
  va_start(apa, pszFormat);
  ap = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int64 *);
  pszDest = 0LL;
  cchDest = 0LL;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &pszDest, &cchDest, v13, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(pszDest, cchDest, pszFormat, apa);
    if ( v4 < 0 || v4 > cchDest )
    {
      LOWORD(v4) = cchDest;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return (unsigned int)v3;
}
