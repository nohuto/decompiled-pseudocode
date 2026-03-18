/*
 * XREFs of UserValidateCopyRgn @ 0x1C005C980
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     HmgLockIgnoreOwner @ 0x1C005C9F0 (HmgLockIgnoreOwner.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    v4 = HmgLockIgnoreOwner(a1, a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 80);
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
      if ( !v6 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
        {
          GreDeleteObject((HPALETTE)RectRgnIndirect);
          return 0LL;
        }
      }
    }
  }
  return RectRgnIndirect;
}
