/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x14008F2C4
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008ECCC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     RtlStringValidateDestW @ 0x1400860E4 (RtlStringValidateDestW.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x140086140 (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(
        wchar_t *pszDest,
        unsigned __int64 cbDest,
        const _UNICODE_STRING *SourceString)
{
  unsigned __int64 v3; // rbx
  wchar_t *v4; // rdi
  __int64 result; // rax
  const _UNICODE_STRING *v6; // r9
  unsigned __int64 v7; // rcx
  char *v8; // rdx
  wchar_t *v9; // rax
  unsigned __int64 cchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *pszSrc; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  v4 = pszDest;
  result = RtlStringValidateDestW(pszDest, cbDest >> 1, 0x7FFFuLL);
  if ( (int)result >= 0 )
  {
    pszSrc = 0LL;
    cchSrcLength = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(v6, &pszSrc, &cchSrcLength, (const unsigned __int64)v6);
    if ( (int)result < 0 )
    {
      *v4 = 0;
    }
    else
    {
      if ( v3 )
      {
        v7 = cchSrcLength - v3;
        v8 = (char *)((char *)pszSrc - (char *)v4);
        do
        {
          if ( !(v7 + v3) )
            break;
          *v4 = *(wchar_t *)((char *)v4 + (_QWORD)v8);
          ++v4;
          --v3;
        }
        while ( v3 );
      }
      v9 = v4 - 1;
      if ( v3 )
        v9 = v4;
      *v9 = 0;
      return v3 == 0 ? 0x80000005 : 0;
    }
  }
  return result;
}
