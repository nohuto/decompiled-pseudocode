/*
 * XREFs of KasanMarkAddressRedZone @ 0x1403D2C50
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KasanMarkAddressRedZone(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR BugCheckParameter4,
        unsigned __int8 a4)
{
  char v5; // bl
  __int64 result; // rax
  _BYTE *v7; // r14
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // rbp
  size_t v10; // rsi

  v5 = a2;
  if ( byte_140FCECA8 )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( a2 > BugCheckParameter4 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, BugCheckParameter4);
    if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
    result = ((_BYTE)BugCheckParameter4 - 1) & 7;
    v7 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
    v8 = BugCheckParameter4 + (((_BYTE)a2 - 1) & 7) - result - a2;
    v9 = a2 >> 3;
    if ( a2 >> 3 )
    {
      result = (__int64)memset_0((void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)), 0, a2 >> 3);
      v7 += v9;
    }
    if ( (v5 & 7) != 0 )
      *v7++ = v5 & 7;
    v10 = v8 >> 3;
    if ( v10 )
      return (__int64)memset_0(v7, a4, v10);
  }
  return result;
}
