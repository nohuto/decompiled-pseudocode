/*
 * XREFs of ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18022C87C
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x180068954 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z @ 0x18067E73C (-PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z.c)
 */

HANDLE __fastcall GDIHelpers::PremultiplyAlphaChannel(GDIHelpers *this, HBITMAP a2)
{
  HANDLE v2; // rax
  HANDLE v3; // rbx
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned int v6; // r11d
  _BYTE *v7; // rax
  UINT flags; // [rsp+20h] [rbp-38h]
  __int128 pv; // [rsp+30h] [rbp-28h] BYREF
  int v11[4]; // [rsp+40h] [rbp-18h]

  v2 = CopyImage(this, 0, 0, 0, 0x2000u);
  v3 = v2;
  if ( v2 )
  {
    pv = 0LL;
    *(_OWORD *)v11 = 0LL;
    if ( GetObjectW(v2, 32, &pv) )
    {
      if ( *(_QWORD *)&v11[2] )
      {
        if ( HIWORD(v11[0]) == 32 )
        {
          v4 = 0LL;
          v5 = DWORD2(pv) * (unsigned __int64)DWORD1(pv);
          if ( v5 <= 0xFFFFFFFF )
          {
            v6 = 0;
            if ( (_DWORD)v5 )
            {
              v7 = (_BYTE *)(*(_QWORD *)&v11[2] + 3LL);
              while ( !(_DWORD)v4 )
              {
                if ( *v7 )
                  v4 = 1LL;
                ++v6;
                v7 += 4;
                if ( v6 >= (unsigned int)v5 )
                {
                  if ( !(_DWORD)v4 )
                    return v3;
                  break;
                }
              }
              GDIHelpers::PreProcessDIB((GDIHelpers *)DWORD1(pv), SDWORD2(pv), v11[2], (struct tagRGBQUAD *)v4, flags);
            }
          }
        }
      }
    }
  }
  return v3;
}
