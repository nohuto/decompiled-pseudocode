/*
 * XREFs of GreSetBitmapBits @ 0x1401CCFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140028884 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 */

__int64 __fastcall GreSetBitmapBits(Gre::Base *a1, unsigned int a2, __int64 a3, LONG *a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[0] = a3;
  v5[2] = 0LL;
  v5[1] = a2;
  v6 = 0;
  return GreSetBitmapBitsInternal(a1, (__int64)v5, a4);
}
