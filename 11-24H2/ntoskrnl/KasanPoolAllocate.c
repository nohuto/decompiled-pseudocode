/*
 * XREFs of KasanPoolAllocate @ 0x14035CFE0
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KasanPoolAllocate(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 result; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v10; // r8
  __int64 v11; // r14
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rbx
  ULONG_PTR BugCheckParameter4; // rdi
  size_t v15; // r8
  ULONG_PTR v16; // rsi
  _BYTE *v17; // rdi
  size_t v18; // rsi

  v4 = byte_140FCECA8;
  result = ((_BYTE)a3 - (_BYTE)BugCheckParameter3) & 7;
  v7 = a3 - result;
  v10 = a3 - result - BugCheckParameter3;
  v11 = a2;
  if ( byte_140FCECA8 )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( v7 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, v10);
    result = ((_BYTE)v10 - 1) & 7;
    v15 = (v10 - result + 7) >> 3;
    if ( v15 )
    {
      LOBYTE(a2) = -115;
      result = (__int64)memset_0((void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)), a2, v15);
    }
  }
  v12 = a3 & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = a4 + a3 - (a3 & 0xFFFFFFFFFFFFFFF8uLL);
  BugCheckParameter4 = v11 + BugCheckParameter3 - v12;
  if ( v4 )
  {
    if ( v12 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v12, 0LL);
    if ( v13 > BugCheckParameter4 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v13, BugCheckParameter4);
    if ( BugCheckParameter4 + v12 < v12 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v12, BugCheckParameter4);
    result = ((_BYTE)BugCheckParameter4 - 1) & 7;
    v16 = BugCheckParameter4 + (((_BYTE)v13 - 1) & 7) - result - v13;
    v17 = (_BYTE *)(KasaniShadow + ((v12 + 0x800000000000LL) >> 3));
    if ( v13 >> 3 )
    {
      result = (__int64)memset_0((void *)(KasaniShadow + ((v12 + 0x800000000000LL) >> 3)), 0, v13 >> 3);
      v17 += v13 >> 3;
    }
    if ( (v13 & 7) != 0 )
      *v17++ = v13 & 7;
    v18 = v16 >> 3;
    if ( v18 )
    {
      LOBYTE(a2) = -122;
      return (__int64)memset_0(v17, a2, v18);
    }
  }
  return result;
}
