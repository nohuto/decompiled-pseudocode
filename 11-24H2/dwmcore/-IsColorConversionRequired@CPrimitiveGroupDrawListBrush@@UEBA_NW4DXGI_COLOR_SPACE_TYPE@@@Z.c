/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802DC000
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EF750 (-IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        unsigned int a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 9);
    v6 = *(_QWORD *)(v5 + 16);
    if ( (unsigned int)i >= *(_DWORD *)(v6 + 8) )
      break;
    v7 = (_DWORD *)(*(_QWORD *)v6 + 144 * i);
    if ( *v7 )
    {
      v8 = (unsigned int)v7[10];
      if ( (unsigned int)v8 < *(_DWORD *)(v5 + 32)
        && !CDrawListBitmap::IsMatchingColorSpace((CDrawListBitmap *)(*(_QWORD *)(v5 + 80) + 24 * v8), a2) )
      {
        return 1;
      }
    }
  }
  return 0;
}
