/*
 * XREFs of _GetOverlayPackagePathFromKey @ 0x18007F704
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     QueryRegistryValue @ 0x18007FAA4 (QueryRegistryValue.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall GetOverlayPackagePathFromKey(HANDLE KeyHandle, unsigned int *a2, _WORD *a3)
{
  unsigned int v3; // esi
  size_t v7; // rax
  int v8; // ecx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a2;
  ValueName.Buffer = (wchar_t *)L"Latest";
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v7 = 2 * wcslen(L"Latest");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  ValueName.Length = v7;
  ValueName.MaximumLength = v7 + 2;
  v8 = QueryRegistryValue(KeyHandle, &ValueName, (__int64)a2);
  if ( v8 >= 0 )
    v8 = -1073741788;
  if ( a3 && v3 >= 2 )
    *a3 = 0;
  return (unsigned int)v8;
}
