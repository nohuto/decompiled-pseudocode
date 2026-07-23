/*
 * XREFs of __asan_allocas_unpoison @ 0x1405A8100
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall _asan_allocas_unpoison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  void *result; // rax
  _BYTE *v4; // rbx

  if ( BugCheckParameter3 )
  {
    if ( BugCheckParameter3 <= a2 )
    {
      v2 = a2 - BugCheckParameter3;
      if ( byte_140FCECA8 )
      {
        result = (void *)0xFFFF800000000000LL;
        if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
        if ( (BugCheckParameter3 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
        v4 = (_BYTE *)(qword_140FC52D8 + (BugCheckParameter3 >> 3));
        if ( v2 >> 3 )
        {
          result = memset_0(v4, 0, v2 >> 3);
          v4 += v2 >> 3;
        }
        if ( (v2 & 7) != 0 )
          *v4 = v2 & 7;
      }
    }
  }
  return result;
}
