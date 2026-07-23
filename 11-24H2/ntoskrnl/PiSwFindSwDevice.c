/*
 * XREFs of PiSwFindSwDevice @ 0x1409BF560
 * Callers:
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PiSwFindSwDevice(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v2; // rbx
  PVOID v4; // rax
  wchar_t *v5; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-278h] BYREF
  wchar_t *v8; // [rsp+38h] [rbp-270h]
  wchar_t *v9; // [rsp+40h] [rbp-268h]
  wchar_t pszDest[5]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  memset_0(v7, 0, 0xD0uLL);
  Buffer = v7;
  v2 = 0LL;
  if ( !wcsnicmp(pszSrc, L"SWD\\", 4uLL) && RtlStringCbCopyW(pszDest, 0x190uLL, pszSrc) >= 0 )
  {
    v8 = pszDest;
    v5 = wcschr(Str, 0x5Cu);
    if ( v5 )
    {
      *v5 = 0;
      v9 = v5 + 1;
      v4 = RtlLookupElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
      if ( v4 )
        return *(_QWORD *)v4;
    }
  }
  return v2;
}
