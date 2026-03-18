/*
 * XREFs of ?IsOpaque@CCachedVisualImage@@UEBA_NXZ @ 0x1801DA450
 * Callers:
 *     <none>
 * Callees:
 *     ?ColorSpaceToDXGIColorSpace@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4ColorSpace@@@Z @ 0x1801DA4D8 (-ColorSpaceToDXGIColorSpace@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedVisualImage::IsOpaque(CCachedVisualImage *this)
{
  __int64 (__fastcall *v2)(CCachedVisualImage *, _DWORD *); // rax
  __int64 v3; // rcx
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  _DWORD *v7; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__int64 (__fastcall **)(CCachedVisualImage *, _DWORD *))(*(_QWORD *)this + 24LL);
  if ( (char *)v2 == (char *)CCachedVisualImage::GetPixelFormatInfo )
  {
    v3 = *((unsigned int *)this + 21);
    v9[0] = *((_DWORD *)this + 19);
    v4 = ColorSpaceToDXGIColorSpace(v3);
    v5 = *((_DWORD *)this + 20) == 0;
    v9[2] = v4;
    v6 = 3;
    if ( !v5 )
      v6 = 1;
    v9[1] = v6;
    v7 = v9;
  }
  else
  {
    v7 = (_DWORD *)v2(this, v9);
  }
  return v7[1] == 3;
}
