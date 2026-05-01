/*
 * XREFs of ?PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z @ 0x18067E73C
 * Callers:
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18022C87C (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GDIHelpers::PreProcessDIB(GDIHelpers *this, int a2, __int64 a3, struct tagRGBQUAD *a4)
{
  __int64 v4; // r10
  unsigned __int8 *v5; // r9
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // kr04_4
  int v9; // ecx

  v4 = a2 * (int)this;
  if ( v4 >= 1 )
  {
    v5 = (unsigned __int8 *)(a3 + 2);
    do
    {
      v6 = v5[1];
      if ( (_BYTE)v6 )
      {
        v7 = v6 * *(v5 - 1);
        *v5 = (v6 * (unsigned int)*v5 + 128) / 0xFF;
        v8 = v7 + 128;
        v9 = v6 * *(v5 - 2);
        *(v5 - 1) = v8 / 0xFF;
        *(v5 - 2) = (v9 + 128) / 0xFFu;
      }
      else
      {
        *(_DWORD *)(v5 - 2) = 0;
      }
      v5 += 4;
      --v4;
    }
    while ( v4 );
  }
}
