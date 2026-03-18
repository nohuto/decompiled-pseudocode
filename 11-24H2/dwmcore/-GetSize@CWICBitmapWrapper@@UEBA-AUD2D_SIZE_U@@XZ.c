/*
 * XREFs of ?GetSize@CWICBitmapWrapper@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180198F60
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 * Callees:
 *     ?GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z @ 0x1802557C0 (-GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CWICBitmapWrapper::GetSize(CWICBitmapWrapper *this, _DWORD *a2)
{
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, int *, int *); // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0;
  v3 = *((_QWORD *)this + 2);
  v4 = *(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v3 + 24LL);
  if ( (char *)v4 == (char *)CCompressedSourceBitmap::GetSize )
    CCompressedSourceBitmap::GetSize(v3, &v6, &v7);
  else
    v4(v3, &v6, &v7);
  *a2 = v6;
  a2[1] = v7;
  return (struct D2D_SIZE_U)a2;
}
