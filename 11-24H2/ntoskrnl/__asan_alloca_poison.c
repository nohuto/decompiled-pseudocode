/*
 * XREFs of __asan_alloca_poison @ 0x1405A7E60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall _asan_alloca_poison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned __int64 v2; // rax
  int v5; // edx
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rbp
  size_t v10; // rbp
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // rcx

  v2 = BugCheckParameter3 - 32;
  v5 = 0;
  if ( byte_140FCECA8 )
  {
    if ( v2 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3 - 32, 0LL);
    if ( (v2 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3 - 32, 8uLL);
    if ( BugCheckParameter3 < v2 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3 - 32, 0x20uLL);
    v2 = qword_140FC52D8 + (v2 >> 3);
    *(_DWORD *)v2 = -2122219135;
  }
  v6 = ((_BYTE)a2 - 1) & 0x1F;
  v7 = a2 - v6 + 31;
  if ( byte_140FCECA8 )
  {
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( a2 > v7 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, a2 - v6 + 31);
    if ( v7 + BugCheckParameter3 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, a2 - v6 + 31);
    v2 = ((_BYTE)a2 - (_BYTE)v6 + 30) & 7;
    v8 = (_BYTE *)(qword_140FC52D8 + (BugCheckParameter3 >> 3));
    v9 = 31 - v6 + (((_BYTE)a2 - 1) & 7) - v2;
    if ( a2 >> 3 )
    {
      LOBYTE(v2) = (unsigned __int8)memset_0((void *)(qword_140FC52D8 + (BugCheckParameter3 >> 3)), 0, a2 >> 3);
      v8 += a2 >> 3;
      v5 = 0;
    }
    if ( (a2 & 7) != 0 )
    {
      LOBYTE(v2) = a2 & 7;
      *v8++ = a2 & 7;
    }
    v10 = v9 >> 3;
    if ( v10 )
    {
      LOBYTE(v5) = -126;
      LOBYTE(v2) = (unsigned __int8)memset_0(v8, v5, v10);
    }
  }
  v11 = BugCheckParameter3 - v6;
  v12 = v11 + a2 + 31;
  if ( byte_140FCECA8 )
  {
    if ( v12 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v11 + a2 + 31, 0LL);
    if ( (v12 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v11 + a2 + 31, 8uLL);
    LOBYTE(v2) = v12 + 32;
    if ( v12 + 32 < v12 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v11 + a2 + 31, 0x20uLL);
    *(_DWORD *)(qword_140FC52D8 + (v12 >> 3)) = -2088533117;
  }
  return v2;
}
