/*
 * XREFs of _GetOverlayPackagePathFromKey @ 0x18006C824
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     QueryRegistryValue @ 0x18006CBC4 (QueryRegistryValue.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall GetOverlayPackagePathFromKey(__int64 a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v3; // esi
  size_t v7; // rax
  int v8; // ecx
  _WORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+34h] [rbp-24h]
  const wchar_t *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  v12 = L"Latest";
  v13 = 0;
  v11 = 0;
  v7 = 2 * wcslen(L"Latest");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v10[0] = v7;
  v10[1] = v7 + 2;
  v8 = QueryRegistryValue(a1, v10, &v13, a3, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( v13 != 1 )
  {
    v8 = -1073741788;
LABEL_4:
    if ( a3 && v3 >= 2 )
      *a3 = 0;
    return (unsigned int)v8;
  }
  if ( a3 && v3 >= *a2 )
    a3[(*a2 >> 1) - 1] = 0;
  return (unsigned int)v8;
}
