/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18000817C
 * Callers:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800080D0 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum ColorSpace *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v2 = 0;
  if ( a1 > 65 )
  {
    v11 = a1 - 87;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 3;
        if ( v13 )
        {
          v14 = v13 - 12;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 2;
              if ( v16 )
              {
                v10 = v16 == 1;
LABEL_20:
                if ( !v10 )
                  return (unsigned int)-2003292344;
              }
            }
          }
        }
      }
    }
  }
  else if ( a1 != 65 )
  {
    v3 = a1 - 2;
    if ( !v3 || (v4 = v3 - 8) == 0 )
    {
      *(_DWORD *)a2 = 2;
      return v2;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v7 = v5 - 13;
      if ( v7 )
      {
        v8 = v7 - 4;
        if ( v8 )
        {
          v9 = v8 - 21;
          if ( v9 )
          {
            v10 = v9 == 12;
            goto LABEL_20;
          }
        }
      }
    }
  }
  *(_DWORD *)a2 = 1;
  return v2;
}
